<?php
/**
 * @file
 * usgs_faq.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function usgs_faq_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:hub_page:create faq_content content'
  $permissions['node:hub_page:create faq_content content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:hub_page:create internal_faq content'
  $permissions['node:hub_page:create internal_faq content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:hub_page:create popular_media content'
  $permissions['node:hub_page:create popular_media content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:hub_page:create spotlight_article content'
  $permissions['node:hub_page:create spotlight_article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:hub_page:create usgs_intranet_page content'
  $permissions['node:hub_page:create usgs_intranet_page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:hub_page:delete any faq_content content'
  $permissions['node:hub_page:delete any faq_content content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:hub_page:delete any internal_faq content'
  $permissions['node:hub_page:delete any internal_faq content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:hub_page:delete any popular_media content'
  $permissions['node:hub_page:delete any popular_media content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:hub_page:delete any spotlight_article content'
  $permissions['node:hub_page:delete any spotlight_article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:hub_page:delete any usgs_intranet_page content'
  $permissions['node:hub_page:delete any usgs_intranet_page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:hub_page:delete own faq_content content'
  $permissions['node:hub_page:delete own faq_content content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:hub_page:delete own internal_faq content'
  $permissions['node:hub_page:delete own internal_faq content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:hub_page:delete own popular_media content'
  $permissions['node:hub_page:delete own popular_media content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:hub_page:delete own spotlight_article content'
  $permissions['node:hub_page:delete own spotlight_article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:hub_page:delete own usgs_intranet_page content'
  $permissions['node:hub_page:delete own usgs_intranet_page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:hub_page:update any faq_content content'
  $permissions['node:hub_page:update any faq_content content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:hub_page:update any internal_faq content'
  $permissions['node:hub_page:update any internal_faq content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:hub_page:update any popular_media content'
  $permissions['node:hub_page:update any popular_media content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:hub_page:update any spotlight_article content'
  $permissions['node:hub_page:update any spotlight_article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:hub_page:update any usgs_intranet_page content'
  $permissions['node:hub_page:update any usgs_intranet_page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:hub_page:update own faq_content content'
  $permissions['node:hub_page:update own faq_content content'] = array(
    'roles' => array(),
  );
 
  // Exported og permission: 'node:hub_page:update own spotlight_article content'
  $permissions['node:hub_page:update own spotlight_article content'] = array(
    'roles' => array(),
  );

   

  return $permissions;
}
