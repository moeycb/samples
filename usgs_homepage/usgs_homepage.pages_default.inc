<?php

/**
 * @file
 * This module provides default panels to demonstrate the behavior of the plugins.
 */

/**
 * Default panels pages for CTools Plugin Example
 *
 * To pick up this file, your module needs to implement
 * hook_ctools_plugin_api() - See ctools_plugin_example_ctools_plugin_api() in
 * ctools_plugin_example.module.
 *
 *
 * Note the naming of the file: <modulename>.pages_default.inc
 * With this naming, no additional code needs to be provided. CTools will just find the file.
 * The name of the hook is <modulename>_default_page_manager_pages()
 *
 * This example provides two pages, but the returned array could
 * have several pages.
 *
 * @return
 *   Array of pages, normally exported from Panels.
 */

function usgs_homepage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_page';
  $page->task = 'page';
  $page->admin_title = 'Home Page';
  $page->admin_description = 'The USGS Home Page';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_page__panel_context_7e3dcf2b-5a0d-48a7-be23-68168a8f8e12';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'U.S. Geological Survey';
  $display->uuid = '0398ae5e-2779-4313-bc16-f8b7aca71111';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page'] = $page;

  variable_set('site_frontpage', 'home');

  return $pages;
}