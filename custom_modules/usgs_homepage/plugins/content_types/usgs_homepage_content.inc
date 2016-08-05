<?php

/**
 * @file
 *
 */

$plugin = array(
  'title' => t('USGS Homepage Main Content'),
  'content_types' => 'usgs_homepage_main_content',
  'single' => TRUE,
  'render callback' => 'usgs_homepage_main_content_render',
  'icon' => 'usgs-logo.png',
  'description' => t('Main content for the USGS Home Page'),

  //'required context' => new ctools_context_required(t('Simplecontext'), 'simplecontext'),
  //'admin title' => 'ctools_plugin_example_simplecontext_content_type_admin_title',
  //'edit form' => 'simplecontext_content_type_edit_form',

  // Presents a block which is used in the preview of the data.
  // This is the preview pane shown on the panels building page.
  'admin info' => 'usgs_homepage_main_content_admin_info',
  'category' => array(t('USGS Plugins'), -9),

);

/**
 * Callback to provide administrative info (the preview in panels when building
 * a panel).
 *
 * In this case we'll render the content with a dummy argument and
 * a dummy context.
 */
function usgs_homepage_main_content_admin_info($subtype, $conf, $context = NULL) {
  $args['admin'] = TRUE;
  $block = usgs_homepage_main_content_render($subtype, $conf, $args, $context);
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
function usgs_homepage_main_content_render($subtype, $conf, $args, $context) {
	// Filler for preview in panels editing pages.
  if(isset($args['admin'])) {
    $block = new stdClass();
    $block->title = "USGS Home PAge Main Content";
    $block->content = t("This widget will render
      the main contentfor the home page. See " . __FUNCTION__ . " in the usgs_homepage module.");
    return $block;
  }
  $out = theme('homepage_real_time_data');
  $out .= theme('homepage_our_science');
  $out .= theme('homepage_products');

  $block = new stdClass();
  $block->content = $out;
  return $block;
}
