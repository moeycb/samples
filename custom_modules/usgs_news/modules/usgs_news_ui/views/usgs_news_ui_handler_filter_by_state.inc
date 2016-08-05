<?php
class usgs_news_ui_handler_filter_by_state extends views_handler_filter_in_operator
{
    /**
     * @return
     *   Return the stored values in $this->value_options if someone expects it.
     */
    function get_value_options()
    {
        $values = usgs_news_ui_get_states();
        asort($values);
        $this->value_options = $values;

        return $values; //array of states
    }

    function query()
    {
        if ($this->value) {
            $this->query->add_where_expression($this->options['group'], "field_data_field_usgs_tags = " . $this->value[0]); //filtering query
        }
    }
}