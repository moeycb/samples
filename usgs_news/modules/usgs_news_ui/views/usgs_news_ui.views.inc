<?php
function usgs_news_ui_views_data_alter(&$data){
    /************** For News Articles - Filter By Date ***************/
    $data['field_release_date'] = array(
        'table' => array(
            'group'=>t('USGS News Custom'),
            'join'=>array(
                'node' =>array(
                    'left_field' => 'nid',
                    'field' => 'entity_id',
                ),
            ),
        )
    );
    // Our fields
    $data['field_release_date']['field_release_date_value'] = array(
        'title' => t('Published Year'),
        'help' => t('Date the article was published'),
    );

    // Adds our field in the "Filters" section of Views
    $data['field_release_date']['field_release_date_value']['filter'] = array(
        'handler' => 'usgs_news_ui_handler_filter_by_year',
    );


    /************** For News Articles - Filter By State ***************/
    $data['field_usgs_tags'] = array(
        'table' => array(
            'group'=>t('USGS News Custom'),
            'join'=>array(
                'node' =>array(
                    'left_field' => 'nid',
                    'field' => 'entity_id',
                ),
            ),
        )
    );
    // Our fields
    $data['field_usgs_tags']['field_usgs_tags_value'] = array(
        'title' => t('State'),
        'help' => t('State to which the news article is tagged'),
    );

    // Adds our field in the "Filters" section of Views
    $data['field_usgs_tags']['field_usgs_tags_value']['filter'] = array(
        'handler' => 'usgs_news_ui_handler_filter_by_state',
    );

}