<?php
/**
 * @file
 * usgs_faq.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function usgs_faq_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function usgs_faq_views_api($module = NULL, $api = NULL) {
    return array(
        'api' => 3,
        'version' => 2,
        'path' => drupal_get_path('module', 'usgs_faq') . '/views',
        'template path' => drupal_get_path('module', 'usgs_faq') . '/theme/views',
    );
}

