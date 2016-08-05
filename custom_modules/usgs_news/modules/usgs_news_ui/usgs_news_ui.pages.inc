<?php

/**

 */
/**
 * Menu callback; presents a specific tab editing form.
 *
 * @param $tab
 * @param $node
 * @return array|mixed\
 */

function _create_news_node(){
    /*
     * Create a new node with a default title and redirect to edit-node forms
     *
     */
    $node_obj= new stdClass();
    $node_obj->title = 'New News Article';
    $node_obj->type = 'usgs_node';
    $node_obj->language = 'und';
    node_object_prepare($node_obj);
    node_save($node_obj);
    $node = $node_obj->nid;
    drupal_goto('add-content/news-article/edit-title/'.$node);
}

function usgs_news_ui_page_edit($tab, $node) {
    $type_name = node_type_get_name($node);
    drupal_set_title(t('<em>Edit @type</em> @title', array(
        '@type' => $type_name,
        '@title' => $node->title
    )), PASS_THROUGH);

    // We want to try and keep as close to the naming conventions that Drupal uses i.e.
    // that means urls will have dashes instead of underscores, but since variables and function
    // names can't have dashes, we convert it all to underscores.

    $tab = preg_replace('/[^a-z0-9_]+/', '_', strtolower($tab));
    $func = 'usgs_news_ui_' . $tab . '_form';

    if (!function_exists($func)) {
        return "<p>Call <br/>&nbsp&nbspdrupal_get_form('$func', \$node)</p>";
    }
    else {
        return drupal_get_form($func, $node);
    }
}


/*
function usgs_news_ui_page_add($tab){
    $tab = preg_replace('/[^a-z0-9_]+/', '_', strtolower($tab));
    $func = 'usgs_news_ui_add_' . $tab . '_form';
    if (!function_exists($func)) {
        return "<p>Call <br/>&nbsp&nbspdrupal_get_form('$func')</p>";
    }
    else {
        return drupal_get_form($func);
    }
}

function usgs_news_ui_add_edit_notifications_form($form, &$form_state, $node=null){

    $form['top_save'] = _create_top_save();

    $form['intro'] =array(
        '#markup' => theme('usgs_news_ui_notifications_form_intro', array()),
    );

    //get submit/draft/cancel buttons
    $form['actions'] = _get_news_submit_buttons();
    return $form;
}

function usgs_news_ui_add_edit_partners_form($form, &$form_state, $node=null){
    $form['top_save'] = _create_top_save();

    $form['intro'] =array(
        '#markup' => theme('usgs_news_ui_partners_form_intro', array()),
    );


//get submit/draft/cancel buttons
    $form['actions'] = _get_news_submit_buttons();
    return $form;
}

function usgs_news_ui_add_edit_contacts_form($form, &$form_state, $node=null) {
    $form['top_save'] = _create_top_save();

    $form['intro'] =array(
        '#markup' => theme('usgs_news_ui_contacts_form_intro', array()),
    );


//get submit/draft/cancel buttons
    $form['actions'] = _get_news_submit_buttons();
    return $form;
}

function usgs_news_ui_add_edit_tags_form($form, &$form_state, $node=null){
    $form['top_save'] = _create_top_save();

    $form['intro'] =array(
        '#markup' => theme('usgs_news_ui_tags_form_intro', array()),
    );


//get submit/draft/cancel buttons
    $form['actions'] = _get_news_submit_buttons();
    return $form;
}

function usgs_news_ui_add_edit_image_form($form, &$form_state, $node=null){

    $form['top_save'] = _create_top_save();
    $form['intro'] =array(
        '#markup' => theme('usgs_news_ui_image_form_intro', array()),
    );


//get submit/draft/cancel buttons
    $form['actions'] = _get_news_submit_buttons();
    return $form;
}

function usgs_news_ui_add_edit_title_form($form, &$form_state, $node=null) {
    $form['top_save'] = _create_top_save();

    $form['intro'] =array(
        '#markup' => theme('usgs_news_ui_title_form_intro', array()),
    );


//get submit/draft/cancel buttons
    $form['actions'] = _get_news_submit_buttons();
    return $form;
}


*/

/**
 *
 * The form for editing node title, body, and release date.
 *
 * @param $form
 * @param $form_state
 * @param $node
 * @return mixed
 */
function usgs_news_ui_edit_title_form($form, &$form_state, $node){
 // dsm($node);
  //dsm(menu_get_item());

  //get date breakdown
  if(!empty($node->field_news_article_release_date['und'][0]['value'])) {
    $date_array = _date_breakdown($node->field_news_article_release_date['und'][0]['value'], $node->field_news_article_release_date['und'][0]['timezone']);
    // Create the form introduction
  }

  $form['intro'] =array(
      '#markup' => theme('usgs_news_ui_title_form_intro', array()),
  );

  // Attach the field_content_tags to the form
  //field_attach_form('node',$node,$form,$form_state,'und',['field_name' => 'title']);
  field_attach_form('node',$node,$form,$form_state,'und',['field_name' => 'body']);
  field_attach_form('node',$node,$form,$form_state,'und',['field_name' => 'field_news_article_release_date']);

  //get submit/draft/cancel buttons
  $form['actions'] = _get_news_submit_buttons();

  //$type = node_type_get_type($node);

  //get the title and create a field for it since the title field does not seem to show up
  $form['article_title'] = array(
      '#type' => 'textfield',
      '#default_value' => !empty($node->title) ? $node->title : '',
      '#required' => TRUE, '#weight' => -5
  );
  $form['date'] = array(
    '#type'=>'container',
  );
  $form['date']['month'] = array(
    '#type'=>'select',
      '#name'=>'month',
      '#options'=>    array(
        1 =>'Januray',
        2 => 'February',
        3 => 'March',
        4 =>'April',
        5 =>'May',
        6 =>'June',
        7 =>'July',
        8 =>'August',
        9 =>'September',
        10 =>'October',
        11 =>'November',
        12 =>'December'
      ),
      '#required'=>TRUE,
      '#attributes'=>array('class'=>array('col-md-2')),
      '#empty_option'=> 'Month',
  );
  $form['date']['day'] = array(
      '#type'=>'select',
      '#name'=>'day',
      '#options'=> array(
          1=>1,
          2=>2,
          3=>3,
          4=>4,
          5=>5,
          6=>6,
          7=>7,
          8=>8,
          9=>9,
          10=>10,
          11=>11,
          12=>12,
          13=>13,
          14=>14,
          15=>15,
          16=>16,
          17=>17,
          18=>18,
          19=>19,
          20=>20,
          21=>21,
          22=>22,
          23=>23,
          24=>24,
          25=>25,
          26=>26,
          27=>27,
          28=>28,
          29=>29,
          30=>30,
          31=>31,

  ),
      '#required'=>TRUE,
      '#attributes'=>array('class'=>array('col-md-2')),
      '#empty_option'=> 'Day',
  );
  $form['date']['year'] = array(
      '#type'=>'select',
      '#name'=>'year',
      '#options'=> array(
          2014=>2014,
          2015=>2015,
          2016=>2016,
          2017=>2017,
          2018=>2018,
          2019=>2019,
          2020=>2020
      ),
      '#required'=>TRUE,
      '#attributes'=>array('class'=>array('col-md-2')),
      '#empty_option'=> 'Year',
  );
  $form['date']['hour'] = array(
      '#type'=>'select',
      '#name'=>'hour',
      '#options'=> array(
          1 =>1,
          2 =>2,
          3 =>3,
          4 =>4,
          5 =>5,
          6 =>6,
          7 =>7,
          8 =>8,
          9 =>9,
          10 =>10,
          11 =>11,
          12 =>12
      ),
      '#required'=>TRUE,
      '#attributes'=>array('class'=>array('col-md-2')),
      '#empty_option'=> 'Hour',
  );
  $form['date']['meridian'] = array(
      '#type'=>'select',
      '#name'=>'meridian',
      '#options'=> array(
              0 => t('AM'),
              1 => t('PM'),
      ),
      '#required'=>TRUE,
      '#attributes'=>array('class'=>array('col-md-2')),
      '#empty_option'=> 'AM/PM',
  );
  $form['date']['time_zone'] = array(
      '#type'=>'select',
      '#name'=>'time_zone',
      '#options'=> array(
                0 => t('EST'),
                1 => t('CST'),
                2 => t('MST'),
                3 => t('PST'),
                4 => t('AKST'),
                4 => t('AKST'),
      ),
      '#required'=>TRUE,
      '#attributes'=>array('class'=>array('col-md-2')),
      '#empty_option'=> 'Time Zone',
  );

if(!empty($date_array)) {
  $form['date']['month']['#default_value'] = $date_array['mon'];
  $form['date']['day']['#default_value'] = $date_array['mday'];
  $form['date']['year']['#default_value'] = $date_array['year'];
  $form['date']['meridian']['#default_value'] = $date_array['meridian'];
  $form['date']['time_zone']['#default_value'] = $date_array['time_zone'];
  $form['date']['hour']['#default_value'] = $date_array['hours'];
}
  //create top save buttons
  $form['top_save'] = _create_top_save();

  //use custom submit function
  $form['#submit'][] = 'usgs_news_ui_edit_title_form_submit';

  //use custom validation
  $form['#validate'][] = 'usgs_news_ui_edit_title_form_validate';
  return $form;
}

function usgs_news_ui_edit_title_form_validate($form, &$form_state){

  //check to see if they filled out all the date dropdowns
  _admin_date_validate($form_state);

  //make sure the title is less than 70 chars
  $title = $form_state['input']['article_title'];
  if(strlen($title) >70) {
    form_set_error('article_title', 'A max of 70 characters is permitted in the title.');
  } else {
    $form_state['values']['title'] = $title;
  }
}

function usgs_news_ui_edit_title_form_submit($form, &$form_state){

  // Get the node id
  $newsArticleNode = node_load(arg(1));
  $wrapper = entity_metadata_wrapper('node', $newsArticleNode);
  // Save contact

  if($form_state['clicked_button']['#name'] == 'temp_save') {
    $wrapper->field_news_article_release_date = $form_state['values']['field_news_article_release_date']['und'][0]['value'];
    $wrapper->title = $form_state['values']['article_title'];
    //$wrapper->body = $form_state['values']['body']['und'][0]['value'];
    $wrapper->body->set(array(
        'value'=>$form_state['values']['body']['und'][0]['value'],
        'summary'=>'',
        'format'=>'filtered_html')
    );
    node_save($newsArticleNode);
    }

  if($form_state['clicked_button']['#name'] == 'Publish') {

    //node_save($newsArticleNode);
  }

}

function _admin_date_validate(&$form_state){
  $errors=0;
  $data = array('month'=>'Please Select a Month',
      'day'=>'Please Select a Day',
      'year'=>'Please Select a Year',
      'hour'=>'Please Select and Hour',
      'meridian'=>'Please Select AM or PM',
      'time_zone'=>'Please Select a Time Zone');
  foreach($data as $field=>$message){
    if($form_state['input'][$field]==NULL){
      form_set_error('date]['.$field, $message);
      $errors++;
    }
  }
  if(!$errors){
    //dsm('no errors');
    //convert the dropdown date picker to unix timestamp
    $date = mktime($form_state['values']['hour'],0,0,$form_state['values']['month'], $form_state['values']['day'], $form_state['values']['year']);
    $form_state['values']['field_news_article_release_date']['und'][0]['value'] = $date;
    $form_state['values']['field_news_article_release_date']['und'][0]['value2'] = $date;
    //dsm($date);
  }

}

function _date_breakdown($orig_date, $time_zone){
  $date_array = getdate($orig_date);
  $date_array['meridian'] = ($date_array['hours']<11)?  0:1;

  switch($time_zone) {
    case 'America/New_York':  $date_array['time_zone'] = 0;
      break;
    case 'America/Chicago':  $date_array['time_zone'] = 1;
      break;
    case 'America/Denver':    $date_array['time_zone'] = 2;
      break;
    case 'America/Los_Angeles':  $date_array['time_zone'] = 3;
      break;
    case 'America/Juneau':    $date_array['time_zone'] = 4;
      break;
    case 'Pacific/Honolulu':  $date_array['time_zone'] = 5;
      break;
  }

  return $date_array;
}


/**
 *
 * The form for editing node contacts.
 *
 * @param $form
 * @param $form_state
 * @param $node
 * @return mixed
 */
function usgs_news_ui_edit_contacts_form($form, &$form_state, $node){

    // Create the form introduction
    $form['intro'] =array(
        '#markup' => theme('usgs_news_ui_contacts_form_intro', array()),
    );
  // The base url for redirecting later
  global $base_url;

  // Get the list of all active contacts **** THIS WILL NEED TO BE REDONE WHEN WE CONVERT TO PROFILES ****
    $query = new EntityFieldQuery();
    //get OCAP tag code
    $t_id = taxonomy_get_term_by_name('OCAP');
    $result = $query->entityCondition('entity_type', 'node')
        ->entityCondition('bundle', 'usgs_node')
        ->fieldCondition('field_usgs_free_tags','tid',key($t_id))
        ->execute();
  // Get the term ids
  $result = array_keys($result['node']);

  // Get the terms
  $contactList = node_load_multiple($result);
    if(!empty($contactList)){
        // Create the datalist for the contacts autocomplete
        $datalist = '<datalist id="contacts">';

        foreach($contactList as $contact){
            $datalist .= "<option data-tid='{$contact->nid}' value='{$contact->title}'</option>";
        }
        $datalist .= '</datalist>';
    }

  // Create the autocomplete textfield
  $form['add_contact'] = array(
    '#type' => 'textfield',
    '#title' => 'Add Contact',
    '#suffix' => $datalist,
    '#attributes' => array(
      'list' => 'contacts',
      'autocomplete' => 'off',
    ),
  );

  $form['actions'] = _get_news_submit_buttons();

  // The base url used for ajax
  $form['base_url'] = array(
    '#type' => 'hidden',
    '#attributes' => array(
      'id' => 'base-url',
    ),
    '#value' => $base_url,
  );


  // Create the contacts display region
  $form['contacts-display'] = array(
    '#type' => 'container',
    '#attributes' => array(
      'class' => array(),
    ),
  );

    //get list of current contacts

    if(!empty($node->field_news_article_contacts['und'])){
        $current_contacts = $node->field_news_article_contacts['und'];
        $x = 0;
        $contact_ids = array();
        foreach($current_contacts as $c){
            $x++;
            $contact_ids[]=$c['target_id'];
            $c_node = node_load($c['target_id']);
            $name = $c_node->title;
            $data = $c_node->body['und'][0]['value'];

            $form['contacts-display'][$x]['contact'] = array(
              '#type'=>'container',
                '#attributes'=>array(
                    'class'=>array('partner_container')
                ),
            );

            $form['contacts-display'][$x]['contact']['row'] = array(
                '#type'=>'container',
                '#attributes'=>array(
                    'class'=>array('row'),
                    'id'=>'node_'.$c['target_id']
                ),
            );
            $form['contacts-display'][$x]['contact']['row']['md2'] = array(
                '#type'=>'container',
                '#attributes'=>array(
                    'class'=>array('col-md-2')
                ),
            );
            $form['contacts-display'][$x]['contact']['row']['md2']['close_button'] = array(
                '#type'=>'container',
                '#attributes'=>array(
                    'data-node'=>$c['target_id'],
                    'class'=>array('close_button'),
                ),
            );
            $form['contacts-display'][$x]['contact']['row']['md2']['close_button']['link'] = array(
                    '#markup'=>'<a href="#">X</a>',
            );
            $form['contacts-display'][$x]['contact']['row']['md10'] = array(
                   '#type'=>'container',
                    '#attributes'=>array('class'=>array(
                       'col-md-10'
                    )),
            );
            $form['contacts-display'][$x]['contact']['row']['md10']['name'] = array(
                '#markup'=>'<h4>'.$name.'</h4>',
            );
            $form['contacts-display'][$x]['contact']['row']['md10']['body'] = array(
                '#markup'=>'<p>'.$data.'</p>',
            );

        }

        //add the current contacts ids to the hidden field on the form field


    }
    if(!empty($contact_ids)){
        $id_value =  implode(',',$contact_ids);
    } else{
        $id_value ='';
    }

    $form['contacts-id'] = array(
        '#type'=>'hidden',
        '#attributes'=>array(
            'id'=>'contacts_id',
        ),
        '#value'=> $id_value,

    );



  // Store the node id
  $form['node-id'] = array(
    '#type' => 'hidden',
    '#value' => $node->nid,
  );

    // Add the node to the form so we can use when submitted
    $form['#entity'] = $node;

  $form['top_save'] = _create_top_save();

    $path = drupal_get_path('module', 'usgs_news_ui');
    drupal_add_js($path.'/js/add-contacts.js');
    drupal_add_css($path.'/css/usgs_news_ui.css');
    drupal_add_js(array('usgs_news_ui' => array('base_url'=>$base_url)), 'setting');

  return $form;

}

function usgs_news_ui_edit_contacts_form_validate($form, &$form_state){
    //dsm('notification validate');
    //dsm($form['#entity']);
    //dsm($form_state);
    $form_state['values']['contacts-id'] = ltrim($form_state['input']['contacts-id'], ',');

}

/**
 *
 * Adds/Removes contacts
 *
 * @param $form
 * @param $form_state
 * @throws Exception
 */
function usgs_news_ui_edit_contacts_form_submit($form, &$form_state){
//dsm($form_state);
  // Save contact
  if($form_state['clicked_button']['#name'] == 'temp_save') {
      $contacts_id = $form_state['values']['contacts-id'];
      $nid = $form_state['complete form']['#entity']->nid;
      $node = node_load($nid);
    if($contacts_id) {
        $contact_array = explode(',', $contacts_id);
        //remove all existing contacts and replace with currently selected ones
        $node->field_news_article_contacts['und']=null;
        foreach ($contact_array as $c) {
            $node->field_news_article_contacts['und'][]['target_id'] = $c;
        }
    }
    node_save($node);
  }

}

/**
 *
 * Creates the form for editing node content tags
 *
 * @param $form
 * @param $form_state
 * @param $node
 * @return array
 */
function usgs_news_ui_edit_tags_form($form, &$form_state, $node)
{
  // Create the form introduction
  $form['intro'] =array(
      '#markup' => theme('usgs_news_ui_tags_form_intro', array()),
  );

  // Attach the field_content_tags to the form
    /*  field_attach_form('node',$node,$form,$form_state,'und',['field_name' => 'field_news_article_type']);
      field_attach_form('node',$node,$form,$form_state,'und',['field_name' => 'field_mission_area']);
      field_attach_form('node',$node,$form,$form_state,'und',['field_name' => 'field_southeast']);
      field_attach_form('node',$node,$form,$form_state,'und',['field_name' => 'field_southwest']);
      field_attach_form('node',$node,$form,$form_state,'und',['field_name' => 'field_northeast']);
      field_attach_form('node',$node,$form,$form_state,'und',['field_name' => 'field_midwest']);
      field_attach_form('node',$node,$form,$form_state,'und',['field_name' => 'field_pacific']);
      field_attach_form('node',$node,$form,$form_state,'und',['field_name' => 'field_alaska']);
      field_attach_form('node',$node,$form,$form_state,'und',['field_name' => 'field_news_article_topics']);
      field_attach_form('node',$node,$form,$form_state,'und',['field_name' => 'field_missn_area']);
     field_attach_form('node',$node,$form,$form_state,'und',['field_name' => 'field_usgs_tags']);
    field_attach_form('node',$node,$form,$form_state,'und',['field_name' => 'field_northwest']);
    field_attach_form('node',$node,$form,$form_state,'und',['field_name' => 'field_climate_and_land_use_chang']);
    field_attach_form('node',$node,$form,$form_state,'und',['field_name' => 'field_core_science_systems']);
    field_attach_form('node',$node,$form,$form_state,'und',['field_name' => 'field_ecosystems']);
    field_attach_form('node',$node,$form,$form_state,'und',['field_name' => 'field_energy_and_minerals']);
    field_attach_form('node',$node,$form,$form_state,'und',['field_name' => 'field_environmental_health']);
    field_attach_form('node',$node,$form,$form_state,'und',['field_name' => 'field_natural_hazards']);
    field_attach_form('node',$node,$form,$form_state,'und',['field_name' => 'field_science_support']);

  */
  $form['actions'] = _get_news_submit_buttons();

  // Add the node to the form so we can use when submitted
  $form['#entity'] = $node;

  $form['top_save'] = _create_top_save();

  return $form;
}

/**
 *
 * Form submission for content tags
 *
 * @param $form
 * @param $form_state
 * @throws Exception
 */
function usgs_news_ui_edit_tags_form_submit($form, &$form_state){

  // Get the node
  $node = node_load($form['#entity']->nid);

  dsm($form);
  dsm($form_state);
  dsm($node);

  // Get the terms to be tagged to the node
  $checkedTerms = $form_state['values']['field_usgs_tags']['und']['usgs_widget_plus_term_tree'];

  dsm($checkedTerms);

  // Reset the node list so we don't have to check what is already there and what is not
  $node->field_usgs_tags['und'] = [];

  // Loop to add the term to the node.
  // Big confusing loop due to array nesting
  foreach($checkedTerms as $checkboxArr){
    foreach($checkboxArr as $terms){
      foreach($terms as $term){
        if($term != 0) {
          $node->field_usgs_tags['und'][]['tid'] = $term;
        }
      }
    }
  }

  // Save the updated node
  node_save($node);

}


function usgs_news_ui_edit_image_form($form, &$form_state, $node){
    // Create the form introduction
    $form['intro'] =array(
        '#markup' => theme('usgs_news_ui_image_form_intro', array()),
    );

    // Attach the field_content_tags to the form
    field_attach_form('node',$node,$form,$form_state,'und',['field_name' => 'field_images']);

  $form['actions'] = _get_news_submit_buttons();

    // Add the node to the form so we can use when submitted
    $form['#entity'] = $node;

  //create top save buttons
  $form['top_save'] = _create_top_save();
    return $form;
}

function usgs_news_ui_edit_image_form_validate($form, &$form_state){
 //check that there is a ScaldID for each image.
    $scaldData = $form_state['values']['field_images']['und'];
    foreach($scaldData as $key=>$val){
       if(empty($val['sid'])){
           unset($scaldData[$key]);
       }
    }
    $form_state['values']['field_images']['und'] = $scaldData;
    $form_state['input']['field_images']['und'] = $scaldData;

}

function usgs_news_ui_edit_image_form_submit($form, &$form_state){
    dsm($form_state);
    $node = $form_state['complete form']['#entity'];
    $node->field_images = $form_state['input']['field_images'];
    node_save($node);
}

function usgs_news_ui_edit_notifications_form($form, &$form_state, $node){
    global $base_url;

    $form['#validate'][] = 'usgs_news_ui_edit_notifications_form_validate';

    // Create the form introduction
    $form['intro'] =array(
        '#markup' => theme('usgs_news_ui_notifications_form_intro', array()),
    );

    // Attach the field_content_tags to the form
    field_attach_form('node',$node,$form,$form_state,'und',['field_name' => 'field_news_article_notifications']);
    //get the list of the additional emails that will be notified when the article is published
    if(!empty($node->field_news_article_addtl_notify['und'])) {
        $email_list = $node->field_news_article_addtl_notify['und'][0]['value'];

        $email_array = explode(',', $email_list);
        $boxes = "";
        foreach ($email_array as $e) {
            $boxes .= '<div class="keyword_box col-md-4">';
            $boxes .= '<div class="col-md-9">';
            $boxes .= $e;
            $boxes .= '</div><div>';
            $boxes .= '<a href="#" class="close_box" id=';
            $boxes .= $e;
            $boxes .= '>X</a></div>';
            $boxes .= '</div>';
        }

        $form['boxes'] = array(
            '#markup' => $boxes
        );
    } else{
        $email_list = '';
    }
    $form['email-list'] = array(
        '#type'=>'hidden',
        '#attributes'=>array(
            'id'=>'email_list',
        ),
        '#value'=>$email_list
    );

  $form['actions'] = _get_news_submit_buttons();

    // Add the node to the form so we can use when submitted
    $form['#entity'] = $node;

    $path = drupal_get_path('module', 'usgs_news_ui');
    drupal_add_js($path.'/js/add-notifications.js');
    drupal_add_css($path.'/css/usgs_news_ui.css');
    drupal_add_js(array('usgs_news_ui' => array('base_url'=>$base_url)), 'setting');


    $form['top_save'] = _create_top_save();

  return $form;
}

function usgs_news_ui_edit_notifications_form_validate($form, &$form_state){
    //dsm($form['#entity']);
    //dsm($form_state);
    $form_state['values']['email-list'] = ltrim($form_state['input']['email-list'], ',');
    $form_state['input']['email-list'] = ltrim($form_state['input']['email-list'], ',');
    //dsm($form_state);
}

function usgs_news_ui_edit_notifications_form_submit($form, &$form_state){
    //dsm($form_state['values']['email-list']);
    $node = node_load($form['#entity']->nid);
    //dsm($node);
    if(empty($form_state['values']['email-list'])){
        $node->field_news_article_addtl_notify['und'] = null;
    } else {
        $node->field_news_article_addtl_notify['und'][0]['value'] = $form_state['values']['email-list'];
        $node->field_news_article_notifications = $form_state['values']['field_news_article_notifications'];
    }

    //dsm($node);
    node_save($node);
}
/**
 *
 * Wrapper for in_array() just to check nested arrays.
 *
 * @param $needle
 * @param $haystack
 * @return bool
 */
function _inArray($needle, $haystack){
  if(is_array($haystack[0])){
    foreach($haystack as $substack){
      $result = _InArray($needle, $substack);
      if($result){
        return $result;
      }
    }
    return false;
  }
  return in_array($needle, $haystack);
}

/**
 *
 * Form for editting node partners.
 * Pretty much the same as contacts form.
 *
 * @param $form
 * @param $form_state
 * @param $node
 * @return mixed
 */
function usgs_news_ui_edit_partners_form($form, &$form_state, $node){
    // Create the form introduction
    $form['intro'] =array(
        '#markup' => theme('usgs_news_ui_partners_form_intro', array()),
    );
  global $base_url;

  // Get the list of all active partners
  $query = new EntityFieldQuery();
  $result = $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'usgs_node')
    ->entityCondition('tag', 'usgs_partner')
    ->execute();

  $result = array_keys($result['node']);
  $partnerList = taxonomy_term_load_multiple($result);
  $datalist = '<datalist id="partners">';

  foreach($partnerList as $partner){
    $datalist .= "<option data-tid='{$partner->tid}' value='{$partner->name} [{$partner->tid}]'></option>";
  }

  $datalist .= '</datalist>';
  // Generate the autocomplete textfield
  $form['add_partner'] = array(
    '#type' => 'textfield',
    '#title' => 'Add Partner',
    '#suffix' => $datalist,
      '#id' => 'add_partner',
    '#attributes' => array(
      'list' => 'partners',
      'autocomplete' => 'on',

    ),
  );

  $form['actions'] = _get_news_submit_buttons();

  // The base url used for ajax
  $form['base_url'] = array(
    '#type' => 'hidden',
    '#attributes' => array(
      'id' => 'base-url',
    ),
    '#value' => $base_url,
  );

    // The display area for the partners that are tagged to the node
    $form['partners-display'] = array(
        '#type' => 'container',
        '#attributes' => array(
            'class' => array('class-name'),
        ),
    );



    $partners_tid=array();
    if(!empty($node->field_partners['und'])){
        $current_partners = $node->field_partners['und'];
        foreach($current_partners as $t){
            $partners_tid[]=$t['target_id'];
            $form['partners-display'][] =array(
                '#type'=>'container',
                '#children'=> _get_partner_data($t['target_id']),

            );
        }
    }
    $tid_list = implode(',', $partners_tid);

    $form['partners_tid'] = array(
        '#type'=>'hidden',
        '#attributes'=>array(
            'id'=>'partners_tid',
        ),
        '#value'=>$tid_list
    );



/*
  // Loop to display the partners that are tagged to the node
  foreach($partners as $partnerTID){

    $name = $partnerTID->name;
    $tid = $partnerTID->tid;
    $url = $partnerTID->field_news_article_website['und'][0]['value'];
    $pic = file_create_url($partnerTID->field_news_article_partner_logo['und'][0]['uri']);
    $img = (!$pic) ? "" : "<img src='{$pic}'>";

    $form['partners-display']['und'][] = array(
      '#type' => 'container',
      '#prefix' => "<div class='panel panel-default'>
                      <div class='panel-heading'>
                        <h1 class='panel-title'>{$name}</h1>{$img}",
      '#suffix' => "</div>
                      <div class='panel-body'>
                      Url: {$url}<br/>
                      </div>
                    </div>",
      '#value' => $tid,
      'und' => array(
        array(
          '#type' => 'submit',
          '#value' => '&times;',
          '#id' => "{$tid}-button",
          '#name' => "{$tid}-button"
        ),
      ),
    );
  }

*/

  $form['node-id'] = array(
    '#type' => 'hidden',
    '#value' => $node->nid,
  );

  $path = drupal_get_path('module', 'usgs_news_ui');
  drupal_add_js($path.'/js/add-partners.js');
  drupal_add_css($path.'/css/usgs_news_ui.css');
  drupal_add_js(array('usgs_news_ui' => array('base_url'=>$base_url)), 'setting');


    $form['top_save'] = _create_top_save();
  return $form;
}

function usgs_news_ui_edit_partners_form_validate($form, &$form_state){
}

function usgs_news_ui_edit_partners_form_submit($form, &$form_state){
    // Get node
    $newsArticleNode = node_load(arg(1));

    // Save partner
    if($form_state['clicked_button']['#name'] == 'temp_save') {
        /*
            $contact = $form_state['values']['add_partner'];

            // Get partner id
            $matches = preg_split('/[\[\]]+/', $contact);

            $name = trim($matches[0]);
            $tid = empty($matches[1]) ? NULL : trim($matches[1]);

            // Check for existence
            if(empty($tid)) {
              form_set_error("Invalid Input",'Invalid Partner Selected.');
              return;
            }

            $query = new EntityFieldQuery();
            $result = $query->entityCondition('entity_type', 'taxonomy_term')
              ->entityCondition('bundle', 'news_article_partner')
              ->propertyCondition('name', $name, '=')
              ->propertyCondition('tid',$tid, '=')
              ->range(0, 1)
              ->execute();

            if (!$result) {
              form_set_error("Invalid Input",'Invalid Partner Selected.');
              return;
            }

            // Get term ids
            $result = array_keys($result['taxonomy_term'])[0];

            // Add to ndoe and save
            if (empty($newsArticleNode->field_news_article_partners['und']) or !_inArray($result, $newsArticleNode->field_news_article_partners['und'])) {
              $newsArticleNode->field_news_article_partners['und'][] = array('tid' => $result);
              node_save($newsArticleNode);
            }
              */
        //get tids from hidden field
        if(!empty($form_state['input']['partners_tid'])){
            $tid_group = $form_state['input']['partners_tid'];
            $tid_group = ltrim( $tid_group, ',');
            $tid_array = explode(',',$tid_group);
            $newsArticleNode->field_partners['und']= null;
            foreach($tid_array as $tid){
                $newsArticleNode->field_partners['und'][]['target_id'] = $tid;
            }

        } else{
            $newsArticleNode->field_partners['und']= null;
        }
            node_save($newsArticleNode);
    }

    // Removing one of the contacts
    else {

        /*
            //the id of the remove buton clicked
            $clickedButtonID = $form_state['clicked_button']['#name'];

            // for each contact element
            foreach($form['partners-display']['und'] as $partner){

              // If contact element's remove button id matches the clicked button's id
              if($partner['und'][0]['#name'] == $clickedButtonID){

                $newsPartners = $newsArticleNode->field_news_article_partners['und'];
                $partnerTID = $partner['#value'];

                //Find the term reference in the node and remove it, then save
                foreach($newsPartners as $key => $newsPartner){
                  if($newsPartner['tid'] == $partnerTID){
                    unset($newsArticleNode->field_news_article_partners['und'][$key]);
                    node_save($newsArticleNode);
                  }
                }
              }
            }
              */

    }
}

function _get_partner_data($target_id){

    $query2 = db_select('node', 'n');
    $query2->join('field_data_field_external_link', 'l', 'l.entity_id = n.nid');
    $query2->fields('n',array('nid', 'title'));
    $query2->fields('l',array('field_external_link_url'));
    $query2->condition('nid', $target_id, '=');
    $result = $query2->execute()->fetchAssoc();

    $shell = '<div class="partner_container">
                <div class="row" id="node_'.$target_id.'">
                <div class="col-md-2">
                <span class="close_button" data-node="'.$target_id.'">
                <a href="#">X</a></span></div>
                <div class="col-md-10">'.$result['title'].'<br>'.$result['field_external_link_url'].'</div></div></div>';

    return $shell;
}

function _get_contact_data($target_id){

    $query2 = db_select('node', 'n');
    $query2->join('field_data_body', 'b', 'b.entity_id = n.nid');
    $query2->fields('n',array('nid', 'title'));
    $query2->fields('b',array('body_value'));
    $query2->condition('nid', $target_id, '=');
    $result = $query2->execute()->fetchAssoc();


    //$data = views_embed_view('partner_data');

    $shell = '<div class="partner_container">
<div class="row" id="node_'.$target_id.'">
<div class="col-md-2">
<span class="close_button" data-node="'.$target_id.'">
<a href="#">X</a></span></div>
<div class="col-md-10">'.$result['title'].'<br>'.$result['body_value'].'</div></div></div>';

    return $shell;


   // $data = views_embed_view('contact_data');
    //$shell = '<div class="partner_container"><div class="row" id="node_'.$target_id.'"><div class="col-md-2"><span class="close_button" data-node="'.$target_id.'"><a href="#">X</a></span></div><div class="col-md-10">'.$data.'</div></div></div>';
    return $shell;
}

/**
 *
 * Submit for partners form
 *
 * @param $form
 * @param $form_state
 * @throws Exception
 */


function _create_top_save(){
  $form['temp_save'] = array(
      '#type'=>'submit',
      '#name'=>'temp_save',
      '#attributes'=>array('class'=>array('btn, btn-success')),
      '#value'=>'Save and Continue',

  );

  return $form;
}

function _get_news_submit_buttons(){
  // Create submit buttons
  $form['preview'] = array(
      '#type' => 'submit',
      '#value' => 'Preview',
      '#weight' => 100,
      '#attributes'=>array('class'=>array('btn-success'))
  );
  $form['draft'] = array(
      '#type' => 'submit',
      '#value' => 'Save Draft',
      '#weight' => 200,
      '#attributes'=>array('class'=>array('btn-success'))
  );
  $form['submit'] = array(
      '#type' => 'submit',
      '#value' => 'Submit for Publishing',
      '#weight' => 300,
      '#attributes'=>array('class'=>array('btn-success'))
  );
  $form['delete'] = array(
      '#type' => 'submit',
      '#value' => 'Delete',
      '#weight' => 400,
  );
  return $form;
}