<?php

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

function theme_usgs_connect_social_media($variables) {
    $output = '';
    if (!empty($variables['media'])) {
        $i = 0;
        foreach ($variables['media'] AS $section => $values) {
            $output .= ($i++ == 0) ? false : '<hr />';
            $output .= "<h3>$section</h3>";
            $output .= !empty($values['body']) ? "<p>{$values['body']}</p>" : false;
            $output .= '<div class="row">';
            foreach ($values['values'] AS $media) {
                $output .= '<div class="col-lg-6 col-md-6 col-sm-12"><h4>';
                $output .= "<a href=\"{$media->field_links_to_url}\" class=\"socialmedia-icon {$media->field_social_media_icon_value}\"></a>";
                $output .= "<a href=\"{$media->field_links_to_url}\" class=\"\">{$media->field_links_to_title}</a>";
                $output .= '</h4></div>';
            }
             $output .= '</div>';
        }
    } else {
        $output = "<p>No results found</p>";
    }
    return $output;
}
