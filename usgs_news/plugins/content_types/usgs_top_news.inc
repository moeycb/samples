<?php

$plugin = array(
  'title' => t('USGS Top News'),
  'content_types' => array('usgs_top_news'),
  // 'single' means not to be subtyped.
  'single' => TRUE,
  // Name of a function which will render the block.
  'render callback' => 'usgs_top_news_render',

  // Icon goes in the directory with the content type.
  'icon' => 'usgs-logo.png',
  'description' => t('USGS Top News'),

  'category' => array(t('USGS Plugins'), -9),
);


function usgs_top_news_render($subtype, $conf, $args, $context){
  $block = new stdClass();
  $block->content = "";

  $menu_item = menu_get_item();

  if(empty($menu_item['page_arguments'][0]->nid))
    return $block;

  $node = node_load($menu_item['page_arguments'][0]->nid);

  if(empty($node->og_group_ref))
    return $block;

  if(!empty($_GET['section_tab']) and $_GET['section_tab'] != 'home')
    return $block;

  // The title of the page node we're on. This is used to get the term in the usgs_tags
  $title = $menu_item['page_arguments'][0]->title;

  // The usgs_tags vocabulary
  $vocab = taxonomy_vocabulary_machine_name_load('usgs_tags');

  // Get the term objects using the page node title (e.g. Missouri, Climate and Land Use Change)
  $query = new EntityFieldQuery();

  $result = $query->entityCondition('entity_type', 'taxonomy_term')
    ->propertyCondition('vid', $vocab->vid)
    ->propertyCondition('name', $title)
    ->execute();

  // If tag not found, we might as well return no results since there will be no nodes tagged with
  // the term since it doesnt even exist
  if(empty($result))
    return $block;

  // Get the term ids into an array
  $usgsTerms = array_keys($result['taxonomy_term']);

  // Get the term objects using the page node title (e.g. Missouri, Climate and Land Use Change)
  $query = new EntityFieldQuery();

  $result = $query->entityCondition('entity_type', 'taxonomy_term')
    ->propertyCondition('vid', $vocab->vid)
    ->propertyCondition('name', 'News Article')
    ->execute();

  // If tag not found, we might as well return no results since there will be no nodes tagged with
  // the term since it doesnt even exist
  if(empty($result))
    return $block;

  // Get the term ids into an array
  $newsTerm = array_keys($result['taxonomy_term']);

  // For memory
  $query = NULL;
  $result = NULL;

  $view = views_embed_view('section_tab_views','top_block',implode('+',$usgsTerms), array_pop($newsTerm));

  $block->content = $view;

  return $block;
}