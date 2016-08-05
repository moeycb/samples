<?php

function usgs_multimedia_views_default_views(){
  return usgs_multimedia_tab_view() + usgs_section_tabs_views();
}

function usgs_multimedia_tab_view(){
  $view = new view();
  $view->name = 'multimedia_section_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'scald_atoms';
  $view->human_name = 'Multimedia Section View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Atom: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Atoms: Thumbnail */
  $handler->display->display_options['fields']['scald_thumbnail']['id'] = 'scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail']['table'] = 'field_data_scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail']['field'] = 'scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['scald_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['scald_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['scald_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Resource Manager: Caption */
  $handler->display->display_options['fields']['copyright']['id'] = 'copyright';
  $handler->display->display_options['fields']['copyright']['table'] = 'mee_resource';
  $handler->display->display_options['fields']['copyright']['field'] = 'copyright';
  $handler->display->display_options['fields']['copyright']['label'] = '';
  $handler->display->display_options['fields']['copyright']['element_label_colon'] = FALSE;
  /* Contextual filter: Atoms: Tags (scald_tags) */
  $handler->display->display_options['arguments']['scald_tags_tid']['id'] = 'scald_tags_tid';
  $handler->display->display_options['arguments']['scald_tags_tid']['table'] = 'field_data_scald_tags';
  $handler->display->display_options['arguments']['scald_tags_tid']['field'] = 'scald_tags_tid';
  $handler->display->display_options['arguments']['scald_tags_tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['scald_tags_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['scald_tags_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['scald_tags_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['scald_tags_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['scald_tags_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['scald_tags_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['scald_tags_tid']['validate_options']['vocabularies'] = array(
    'scald_tags' => 'scald_tags',
  );
  $handler->display->display_options['arguments']['scald_tags_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['scald_tags_tid']['validate']['fail'] = 'empty';
  /* Filter criterion: Atom: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'scald_atoms';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'all' => 'all',
    'audio' => 'audio',
    'gallery' => 'gallery',
    'image' => 'image',
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['group_info']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['group_info']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  return [$view->name => $view];
}

function usgs_section_tabs_views(){
  $view = new view();
  $view->name = 'section_tab_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Section Tab Views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Release Date */
  $handler->display->display_options['fields']['field_release_date']['id'] = 'field_release_date';
  $handler->display->display_options['fields']['field_release_date']['table'] = 'field_data_field_release_date';
  $handler->display->display_options['fields']['field_release_date']['field'] = 'field_release_date';
  $handler->display->display_options['fields']['field_release_date']['label'] = '';
  $handler->display->display_options['fields']['field_release_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_release_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Article Subtitle */
  $handler->display->display_options['fields']['field_news_article_subtitle']['id'] = 'field_news_article_subtitle';
  $handler->display->display_options['fields']['field_news_article_subtitle']['table'] = 'field_data_field_news_article_subtitle';
  $handler->display->display_options['fields']['field_news_article_subtitle']['field'] = 'field_news_article_subtitle';
  $handler->display->display_options['fields']['field_news_article_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_news_article_subtitle']['element_label_colon'] = FALSE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'usgs_tags' => 'usgs_tags',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'empty';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['arguments']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid_1']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_1']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['tid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_1']['validate_options']['vocabularies'] = array(
    'usgs_tags' => 'usgs_tags',
  );
  $handler->display->display_options['arguments']['tid_1']['validate']['fail'] = 'empty';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'usgs_node' => 'usgs_node',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Section Tab View';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'top_block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['block_description'] = 'Top Nodes View';

  return [$view->name => $view];
}