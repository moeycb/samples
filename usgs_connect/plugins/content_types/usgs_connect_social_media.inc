<?php

/**
 * @filesource
 *
 * Defines a configurable view content type plugin that can be dragged and
 * dropped onto a panel page.
 *
 */
/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
    'title' => t('USGS Connect Social Media'),
    'content_types' => 'usgs_connect_social_media',
    'single' => TRUE, // 'single' means not to be subtyped.
    'render callback' => 'usgs_connect_social_media_render', // Name of a function which will render the block.
    'icon' => 'usgs-logo.png', // Icon goes in the directory with the content type.
    'description' => 'Displays and filters social media links.',
    'admin info' => 'usgs_connect_social_media_info',
    'category' => array(t('USGS Plugins'), -9), // Presents a block which is used in the preview of the data. This is the preview pane shown on the panels building page.
    'all contexts' => TRUE,
);

function usgs_connect_social_media_admin_title($subtype, $conf, $context = NULL) {
    $output = t('USGS Connect Social Media');
    if ($conf['override_title'] && !empty($conf['override_title_text'])) {
        $output = filter_xss_admin($conf['override_title_text']);
    }
    return $output;
}

/**
 * Callback to provide administrative info (the preview in panels when building
 * a panel).
 *
 * In this case we'll render the content with a dummy argument and
 * a dummy context.
 */
function usgs_connect_social_media_admin_info($subtype, $conf, $context = NULL) {
    $args['admin'] = TRUE;
    $block = usgs_connect_social_media_render();
    return $block;
}

/**
 * Run-time rendering of the body of the block (content type)
 *
 * @param $subtype
 * @param $conf
 *   Configuration as done at admin time
 * @param $args
 * @param $context
 *   Context - in this case we don't have any
 *
 * @return
 *   An object with at least title and content members
 */
function usgs_connect_social_media_render($subtype, $conf, $args, $context) {
    $block = new stdClass();

    if (isset($args['admin'])) {
        $block->title = "USGS Connect Social Media";
        $block->content = t("This widget will render the topic terms using the path. See "
                . __FUNCTION__ .
                " in the usgs_connect module.");
    } else {

        $vars = array_merge($context, $conf, $args);
        $form = drupal_build_form('usgs_connect_social_media_form', $vars);
        $block->content = $form ? drupal_render($form) : false;
        
    }

    return $block;
}
  