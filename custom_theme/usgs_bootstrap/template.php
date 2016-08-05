<?php

/**
 * Implements hook_preprocess_page().
 *
 * @see page.tpl.php
 */
function usgs_bootstrap_preprocess_page(&$variables) {
    $key = array_search('container', $variables['navbar_classes_array']);
    unset($variables['navbar_classes_array'][$key]);
    $variables['navbar_classes_array'][] = 'full-width';

    // For now we are going to turn off the primary nav
    //$variables['primary_nav'] = FALSE;
}

function usgs_bootstrap_form_alter(&$form, &$form_state, $form_id) {

    if ($form_id == 'search_block_form') {
//        $form['#attributes']['class'][] = 'navbar-form';
//
//// Alternative (HTML5) placeholder attribute instead of using the javascript
        $form['search_block_form']['#attributes']['placeholder'] = t('Search ...');
        $form['search_block_form']['#size'] = '';

//// Hide the default button from display and implement a theme wrapper
//// to add a submit button containing a search icon directly after the
//// input element.
//        $form['actions']['submit']['#value'] = '';
//        $form['actions']['submit']['#attributes']['class'] = array('fa', 'fa-search');
        //   $form['search_block_form']['#theme_wrappers'] = array('usgs_bootstrap_bootstrap_search_form_wrapper');
    }
    ;
}

/**
 * Theme function implementation for bootstrap_search_form_wrapper.
 */
function usgs_bootstrap_bootstrap_search_form_wrapper($variables) {

    $output = '<div class="input-group">';
    $output .= $variables['element']['#children'];
    $output .= '<span class="input-group-btn">';
    $output .= '<button type="submit" class="btn btn-default">';
    $output .= '<i class="icon fa fa-search"></i>';
    $output .= '</button>';
    $output .= '</span>';
    $output .= '</div>';
    $output .= '<div class="hidden-lg hidden-md clear">';
    $output .= '<button type="submit" class="btn btn-success">';
    $output .= 'Apply Search';
    $output .= '</button>';
    $output .= '</div>';
 
    return $output;
}

/**
 * Stub implementation for hook_theme().
 *
 * @see bootstrap_theme()
 * @see hook_theme()
 */
function usgs_bootstrap_theme(&$existing, $type, $theme, $path) {

    // Custom theme hooks:
    // Do not define the `path` or `template`.
    $hook_theme = array(
        'bootstrap_search_form_wrapper' => array(
            'render element' => 'element',
        ),
        'bootstrap_breadcrumb' => array(
            'render element' => 'element',
        ),
    );

    return $hook_theme;
}

/**
 * Overrides theme_breadcrumb().
 *
 * Print breadcrumbs as an ordered list.
 */
function usgs_bootstrap_bootstrap_breadcrumb($variables) {
    $output = '';
    $breadcrumb = $variables['breadcrumb'];

    // Determine if we are to display the breadcrumb.
    $bootstrap_breadcrumb = theme_get_setting('bootstrap_breadcrumb');
    if (($bootstrap_breadcrumb == 1 || ($bootstrap_breadcrumb == 2 && arg(0) == 'admin')) && !empty($breadcrumb)) {
        $output = theme('item_list', array(
            'attributes' => array(
                'class' => array('breadcrumb h6'),
            ),
            'items' => $breadcrumb,
            'type' => 'ol',
        ));
    }
    return $output;
}
