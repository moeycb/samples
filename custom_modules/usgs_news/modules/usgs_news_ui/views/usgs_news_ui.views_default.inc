<?php
function usgs_news_ui_views_default_views() {
    $view = new view();
    $view->name = 'my_news_products';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'node';
    $view->human_name = 'My News Products';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['use_ajax'] = TRUE;
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'full';
    $handler->display->display_options['style_plugin'] = 'default';
    $handler->display->display_options['row_plugin'] = 'fields';
    /* Relationship: Content: Author */
    $handler->display->display_options['relationships']['uid']['id'] = 'uid';
    $handler->display->display_options['relationships']['uid']['table'] = 'node';
    $handler->display->display_options['relationships']['uid']['field'] = 'uid';
    /* Field: Content: Title */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['label'] = '';
    $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
    $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
    /* Field: Content: Publication Status */
    $handler->display->display_options['fields']['field_news_article_pub_status']['id'] = 'field_news_article_pub_status';
    $handler->display->display_options['fields']['field_news_article_pub_status']['table'] = 'field_data_field_news_article_pub_status';
    $handler->display->display_options['fields']['field_news_article_pub_status']['field'] = 'field_news_article_pub_status';
    $handler->display->display_options['fields']['field_news_article_pub_status']['label'] = '';
    $handler->display->display_options['fields']['field_news_article_pub_status']['element_label_colon'] = FALSE;
    /* Field: Content: Article Type */
    $handler->display->display_options['fields']['field_news_article_type']['id'] = 'field_news_article_type';
    $handler->display->display_options['fields']['field_news_article_type']['table'] = 'field_data_field_news_article_type';
    $handler->display->display_options['fields']['field_news_article_type']['field'] = 'field_news_article_type';
    $handler->display->display_options['fields']['field_news_article_type']['label'] = '';
    $handler->display->display_options['fields']['field_news_article_type']['element_label_colon'] = FALSE;
    /* Field: Content: Release Date */
    $handler->display->display_options['fields']['field_release_date']['id'] = 'field_release_date';
    $handler->display->display_options['fields']['field_release_date']['table'] = 'field_data_field_release_date';
    $handler->display->display_options['fields']['field_release_date']['field'] = 'field_release_date';
    $handler->display->display_options['fields']['field_release_date']['label'] = '';
    $handler->display->display_options['fields']['field_release_date']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_release_date']['type'] = 'date_plain';
    $handler->display->display_options['fields']['field_release_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    );
    /* Field: Content: Nid */
    $handler->display->display_options['fields']['nid']['id'] = 'nid';
    $handler->display->display_options['fields']['nid']['table'] = 'node';
    $handler->display->display_options['fields']['nid']['field'] = 'nid';
    $handler->display->display_options['fields']['nid']['label'] = '';
    $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
    /* Field: Content: Images */
    $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
    $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
    $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
    $handler->display->display_options['fields']['field_images']['label'] = '';
    $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'sid';
    $handler->display->display_options['fields']['field_images']['type'] = 'sdl_preview';
    $handler->display->display_options['fields']['field_images']['settings'] = array(
    'link' => '0',
    );
    $handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
    /* Field: Content: Author uid */
    $handler->display->display_options['fields']['uid']['id'] = 'uid';
    $handler->display->display_options['fields']['uid']['table'] = 'node';
    $handler->display->display_options['fields']['uid']['field'] = 'uid';
    $handler->display->display_options['fields']['uid']['label'] = '';
    $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
    /* Field: User: Name */
    $handler->display->display_options['fields']['name']['id'] = 'name';
    $handler->display->display_options['fields']['name']['table'] = 'users';
    $handler->display->display_options['fields']['name']['field'] = 'name';
    $handler->display->display_options['fields']['name']['relationship'] = 'uid';
    $handler->display->display_options['fields']['name']['label'] = '';
    $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
    /* Sort criterion: Content: Post date */
    $handler->display->display_options['sorts']['created']['id'] = 'created';
    $handler->display->display_options['sorts']['created']['table'] = 'node';
    $handler->display->display_options['sorts']['created']['field'] = 'created';
    $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    /* Filter criterion: Content: USGS Tags (field_usgs_tags) */
    $handler->display->display_options['filters']['field_usgs_tags_tid']['id'] = 'field_usgs_tags_tid';
    $handler->display->display_options['filters']['field_usgs_tags_tid']['table'] = 'field_data_field_usgs_tags';
    $handler->display->display_options['filters']['field_usgs_tags_tid']['field'] = 'field_usgs_tags_tid';
    $handler->display->display_options['filters']['field_usgs_tags_tid']['value'] = array(
    126 => '126',
    );
    $handler->display->display_options['filters']['field_usgs_tags_tid']['type'] = 'select';
    $handler->display->display_options['filters']['field_usgs_tags_tid']['vocabulary'] = 'usgs_tags';
    $handler->display->display_options['filters']['field_usgs_tags_tid']['hierarchy'] = 1;
    /* Filter criterion: User: Current */
    $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
    $handler->display->display_options['filters']['uid_current']['table'] = 'users';
    $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
    $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
    $handler->display->display_options['filters']['uid_current']['value'] = '1';
    /* Filter criterion: Content: Publication Status (field_news_article_pub_status) */
    $handler->display->display_options['filters']['field_news_article_pub_status_value']['id'] = 'field_news_article_pub_status_value';
    $handler->display->display_options['filters']['field_news_article_pub_status_value']['table'] = 'field_data_field_news_article_pub_status';
    $handler->display->display_options['filters']['field_news_article_pub_status_value']['field'] = 'field_news_article_pub_status_value';
    $handler->display->display_options['filters']['field_news_article_pub_status_value']['exposed'] = TRUE;
    $handler->display->display_options['filters']['field_news_article_pub_status_value']['expose']['operator_id'] = 'field_news_article_pub_status_value_op';
    $handler->display->display_options['filters']['field_news_article_pub_status_value']['expose']['operator'] = 'field_news_article_pub_status_value_op';
    $handler->display->display_options['filters']['field_news_article_pub_status_value']['expose']['identifier'] = 'field_news_article_pub_status_value';
    $handler->display->display_options['filters']['field_news_article_pub_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    );
    /* Filter criterion: Content: Article Type (field_news_article_type) */
    $handler->display->display_options['filters']['field_news_article_type_value']['id'] = 'field_news_article_type_value';
    $handler->display->display_options['filters']['field_news_article_type_value']['table'] = 'field_data_field_news_article_type';
    $handler->display->display_options['filters']['field_news_article_type_value']['field'] = 'field_news_article_type_value';
    $handler->display->display_options['filters']['field_news_article_type_value']['exposed'] = TRUE;
    $handler->display->display_options['filters']['field_news_article_type_value']['expose']['operator_id'] = 'field_news_article_type_value_op';
    $handler->display->display_options['filters']['field_news_article_type_value']['expose']['operator'] = 'field_news_article_type_value_op';
    $handler->display->display_options['filters']['field_news_article_type_value']['expose']['identifier'] = 'field_news_article_type_value';
    $handler->display->display_options['filters']['field_news_article_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    );

    $views[$view->name] = $view;

    return $views;
}
