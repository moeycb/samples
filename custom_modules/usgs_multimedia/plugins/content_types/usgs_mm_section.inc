<?php

$plugin = array(
  'title' => t('USGS Multimedia Section Tab'),
  'content_types' => array('usgs_mm_tab'),
  // 'single' means not to be subtyped.
  'single' => TRUE,
  // Name of a function which will render the block.
  'render callback' => 'usgs_mm_tab_render',

  // Icon goes in the directory with the content type.
  'icon' => 'usgs-logo.png',
  'description' => t('USGS Multimedia Tab'),

  'category' => array(t('USGS Plugins'), -9),
);


function usgs_mm_tab_render($subtype, $conf, $args, $context){
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

  if($section_tab_term->name != 'Multimedia')
    return $block;

  $menu_item = menu_get_item();

  // The title of the page node we're on. This is used to get the term in the usgs_tags
  $title = $menu_item['page_arguments'][0]->title;

  $view = views_embed_view('multimedia_section_view','block',$title);

  $block->content = $view;

  return $block;
}