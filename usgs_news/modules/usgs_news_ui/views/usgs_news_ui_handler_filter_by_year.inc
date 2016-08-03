<?php
class usgs_news_ui_handler_filter_by_year extends views_handler_filter_in_operator {


    /**
     * Override parent get_value_options() function. This function returns an array of all valid years from our post type.
     * @return
     *   Return the stored values in $this->value_options if someone expects it.
     */
    function get_value_options()
    {
        $news_article_tid = variable_get('news_article_tid');
        $query = new EntityFieldQuery();
        $query->entityCondition('entity_type', 'node')
            ->propertyCondition('type', 'usgs_node')//post type
            ->propertyCondition('status', '1') //is published
            ->fieldCondition('field_usgs_tags', 'tid', $news_article_tid);


        $results = $query->execute();
        if (!empty($results['node'])) {
            $object_node_ids = array_keys($results['node']);
            foreach ($object_node_ids as $nid) {
                $results = db_query('SELECT f.field_release_date_value FROM field_data_field_release_date f WHERE f.entity_id = :fid', array(':fid' => $nid));
                $date = $results->fetchField();
                $values[date('Y', strtotime($date))] = date('Y', strtotime($date));
            }
            asort($values); // arrange dates chronologically
            $this->value_options = $values;

        } else {
            $values['null'] = 'No Values';
        }
        return $values; //array of year values
    }

    function query()
    {
        if ($this->value) {
            $this->ensure_my_table(); //not sure why/if this is necessary
            $startDate = mktime(0, 0, 0, 1, 1, intval($this->value[0]));
            $endDate = mktime(0, 0, 0, 1, 1, intval($this->value[0] + 1));

            $this->query->add_where_expression($this->options['group'], "UNIX_TIMESTAMP(field_release_date_value) >= " . $startDate . " AND UNIX_TIMESTAMP(field_release_date_value) <= " . $endDate); //filtering query
        }
    }

}