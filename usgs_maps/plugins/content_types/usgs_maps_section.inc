<?php

$plugin = array(
  'title' => t('USGS Maps Section Tab'),
  'content_types' => array('usgs_maps_tab'),
  // 'single' means not to be subtyped.
  'single' => TRUE,
  // Name of a function which will render the block.
  'render callback' => 'usgs_maps_tab_render',

  // Icon goes in the directory with the content type.
  'icon' => 'usgs-logo.png',
  'description' => t('USGS Maps Tab'),

  'category' => array(t('USGS Plugins'), -9),
);


function usgs_maps_tab_render($subtype, $conf, $args, $context){
  $block = new stdClass();
  $block->content = "";

  // This checks whether the block should be displayed on the page or not based on the
  // section_tab parameter
  if(empty($_GET['section_tab']))
    return $block;

  $section_tab = $_GET['section_tab'];

  if(!is_numeric($section_tab))
    return $block;

  $section_tab_term = taxonomy_term_load($section_tab);

  if($section_tab_term->name != 'Maps')
    return $block;

  $menu_item = menu_get_item();

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
  if(empty($result)){
    $block->content = "There are no results to display.";
    return $block;
  }

  // Get the term ids into an array
  $usgsTerms = array_keys($result['taxonomy_term']);

  // For memory
  $query = NULL;
  $result = NULL;
  $view = views_embed_view('section_tab_views','block',implode('+',$usgsTerms),$section_tab_term->tid);
  $block->content = $view;

  return $block;
}