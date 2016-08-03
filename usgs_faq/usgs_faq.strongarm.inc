<?php
/**
 * @file
 * usgs_faq.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function usgs_faq_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_faq_content';
  $strongarm->value = 'edit-panelizer';
  $export['additional_settings__active_tab_faq_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_internal_faq';
  $strongarm->value = 'edit-og';
  $export['additional_settings__active_tab_internal_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_popular_media';
  $strongarm->value = 'edit-og';
  $export['additional_settings__active_tab_popular_media'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_spotlight_article';
  $strongarm->value = 'edit-og';
  $export['additional_settings__active_tab_spotlight_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'faq_toplevel';
  $strongarm->value = '2';
  $export['faq_toplevel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_default_active_menus';
  $strongarm->value = array(
    1 => 'main-menu',
    2 => 'management',
    3 => 'navigation',
    4 => 'user-menu',
    5 => 'devel',
    7 => 'menu-page-menu',
    8 => 'menu-about',
    9 => 'menu-connect',
    10 => 'menu-maps',
    11 => 'menu-categories',
    12 => 'menu-internal-faq-menu',
    13 => 'menu-legal-menu',
    14 => 'menu-mobile-small-screen-footer-',
    15 => 'menu-mobile-small-screen-main-me',
    16 => 'menu-usgs-ccsa',
  );
  $export['menu_default_active_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_expanded';
  $strongarm->value = array();
  $export['menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_faq_content_pattern';
  $strongarm->value = 'frequently-asked-questions/[node:og_group_ref]/[node:field_topic]/content/[node:title]';
  $export['pathauto_node_faq_content_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_internal_faq_pattern';
  $strongarm->value = 'frequently-asked-questions/internal/[node:og_group_ref]/[node:field_topic]/content/[node:title]';
  $export['pathauto_node_internal_faq_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_panel_pattern';
  $strongarm->value = '';
  $export['pathauto_node_panel_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_popular_media_pattern';
  $strongarm->value = 'frequently-asked-questions/popular-media/[node:og_group_ref]/content/[node:title]';
  $export['pathauto_node_popular_media_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_spotlight_article_pattern';
  $strongarm->value = 'frequently-asked-questions/spotlight/[node:og_group_ref]/content/[node:title]';
  $export['pathauto_node_spotlight_article_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_usgs_intranet_page_pattern';
  $strongarm->value = 'frequently-asked-questions/intranet/[node:og_group_ref]/content/[node:title]';
  $export['pathauto_node_usgs_intranet_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hyphen';
  $strongarm->value = 1;
  $export['pathauto_punctuation_hyphen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_faq_categories_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_faq_categories_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_faq_tags_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_faq_tags_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_moderation_state_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_moderation_state_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_popular_media_icons_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_popular_media_icons_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_tags_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_tags_pattern'] = $strongarm;

  return $export;
}
