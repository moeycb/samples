<?php

/**
 * Page callback: Form constructor for the content administration form.
 *
 * @see node_admin_nodes()
 * @see node_admin_nodes_submit()
 * @see node_admin_nodes_validate()
 * @see node_filter_form()
 * @see node_filter_form_submit()
 * @see node_menu()
 * @see node_multiple_delete_confirm()
 * @see node_multiple_delete_confirm_submit()
 * @ingroup forms
 */
function xxxusgs_news_ui_admin_content($form, $form_state) {
  // Not sure why, but we always have to add this include so that the Update Options
  // appear.
  module_load_include('inc', 'node', 'node.admin');
  if (isset($form_state['values']['operation']) && $form_state['values']['operation'] == 'delete') {
    return node_multiple_delete_confirm($form, $form_state, array_filter($form_state['values']['nodes']));
  }
 $form['filter'] = usgs_news_ui_filter_form();
 $form['#submit'][] = 'usgs_news_ui_filter_form_submit';
  $form['admin'] = usgs_news_ui_admin_nodes();

  return $form;
}

/**
 * Returns the node administration filters form array to node_admin_content().
 *
 * This is taken directly from node_filter_form() in node.admin.inc
 */
function xxxusgs_news_ui_filter_form() {
  // We want to keep the filters throughout the session so when a user comes back
  // the filters are still applied until Reset is clicked. The $_SESSION is set
  // in the submit function.
  $session = isset($_SESSION['usgs_news_ui_overview_filter']) ? $_SESSION['usgs_news_ui_overview_filter'] : array();
  $filters = usgs_news_ui_filters();

  $i = 0;
  $form['filters'] = array(
    '#type' => 'fieldset',
    '#title' => t('Show only items where'),
    '#theme' => 'exposed_filters__node',
  );
  foreach ($session as $filter) {
    list($type, $value) = $filter;
    if ($type == 'term') {
      // Load term name from DB rather than search and parse options array.
      $value = module_invoke('taxonomy', 'term_load', $value);
      $value = $value->name;
    }
    elseif ($type == 'language') {
      $value = $value == LANGUAGE_NONE ? t('Language neutral') : module_invoke('locale', 'language_name', $value);
    }
    else {
      $value = $filters[$type]['options'][$value];
    }
    $t_args = array('%property' => $filters[$type]['title'], '%value' => $value);
    if ($i++) {
      $form['filters']['current'][] = array('#markup' => t('and where %property is %value', $t_args));
    }
    else {
      $form['filters']['current'][] = array('#markup' => t('where %property is %value', $t_args));
    }
    if (in_array($type, array('type', 'language'))) {
      // Remove the option if it is already being filtered on.
      unset($filters[$type]);
    }
  }

  $form['filters']['status'] = array(
    '#type' => 'container',
    '#attributes' => array('class' => array('clearfix')),
    '#prefix' => ($i ? '<div class="additional-filters">' . t('and where') . '</div>' : ''),
  );
  $form['filters']['status']['filters'] = array(
    '#type' => 'container',
    '#attributes' => array('class' => array('filters')),
  );
  foreach ($filters as $key => $filter) {
    $form['filters']['status']['filters'][$key] = array(
      '#type' => 'select',
      '#options' => $filter['options'],
      '#title' => $filter['title'],
      '#default_value' => '[any]',
    );
  }

  $form['filters']['status']['actions'] = array(
    '#type' => 'actions',
    '#attributes' => array('class' => array('container-inline')),
  );
  $form['filters']['status']['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => count($session) ? t('Refine') : t('Filter'),
  );
  if (count($session)) {
    $form['filters']['status']['actions']['undo'] = array('#type' => 'submit', '#value' => t('Undo'));
    $form['filters']['status']['actions']['reset'] = array('#type' => 'submit', '#value' => t('Reset'));
  }
  return $form;
}

/**
 * List node administration filters that can be applied.
 * Taken directly from node_filters() from node.admin.inc
 */
function xxxusgs_news_ui_filters() {
  // Regular filters
  $filters['status'] = array(
    'title' => t('status'),
    'options' => array(
      '[any]' => t('any'),
      'status-1' => t('published'),
      'status-0' => t('not published'),
    ),
  );

  // Filter the nodes by the news type taxonomy term.
  $filters['type'] = array(
    'title' => t('type'),
    'options' => array(
        '[any]' => t('any'),
      ) + usgs_news_ui_news_get_types(),
  );

  $filters['year'] = array(
    'title' => t('year'),
    'options' => array(
        '[any]' => t('any'),
      ) + usgs_news_ui_get_year_range(),
  );

  $filters['state'] = array(
    'title' => t('state'),
    'options' => array(
        '[any]' => t('any'),
      ) + usgs_news_ui_get_states(),
  );
  return $filters;
}

/**
 * Applies filters for node administration filters based on session.
 *
 * @param $query
 *   A SelectQuery to which the filters should be applied.
 */
function xxxusgs_news_ui_build_filter_query(SelectQueryInterface $query) {
  // Build query
  /*
  $filter_data = isset($_SESSION['usgs_news_ui_overview_filter']) ? $_SESSION['usgs_news_ui_overview_filter'] : array();
  foreach ($filter_data as $index => $filter) {
    list($key, $value) = $filter;
    switch ($key) {
      case 'status':
        // Note: no exploitable hole as $key/$value have already been checked when submitted
        list($key, $value) = explode('-', $value, 2);
        $query->condition('n.status', $value, '=');
        break;
      case 'type':
        $query->condition('t.field_news_article_type_tid', $value, '=');
        break;
      case 'year':
        $year = array (
          strtotime("01/01/$value"),
          strtotime("12/31/$value"),
        );
        $query->join('field_data_field_news_article_release_date', 'y', 'n.nid = y.entity_id');
        $query->condition('y.field_news_article_release_date_value', $year, 'BETWEEN');
        break;
    }
  }
  */
}

/**
 * Form submission handler for node_filter_form().
 *
 * @see node_admin_content()
 * @see node_admin_nodes()
 * @see node_admin_nodes_submit()
 * @see node_admin_nodes_validate()
 * @see node_filter_form()
 * @see node_multiple_delete_confirm()
 * @see node_multiple_delete_confirm_submit()
 */
function xxxusgs_news_ui_filter_form_submit($form, &$form_state) {
  $filters = usgs_news_ui_filters();
  switch ($form_state['values']['op']) {
    case t('Filter'):
    case t('Refine'):
      // Apply every filter that has a choice selected other than 'any'.
      foreach ($filters as $filter => $options) {
        if (isset($form_state['values'][$filter]) && $form_state['values'][$filter] != '[any]') {
          // Flatten the options array to accommodate hierarchical/nested options.
          $flat_options = form_options_flatten($filters[$filter]['options']);
          // Only accept valid selections offered on the dropdown, block bad input.
          if (isset($flat_options[$form_state['values'][$filter]])) {
            $_SESSION['usgs_news_ui_overview_filter'][] = array($filter, $form_state['values'][$filter]);
          }
        }
      }
      break;
    case t('Undo'):
      array_pop($_SESSION['usgs_news_ui_overview_filter']);
      break;
    case t('Reset'):
      $_SESSION['usgs_news_ui_overview_filter'] = array();
      break;
  }
}

/**
 * Form builder: Builds the node administration overview.
 *
 * @see node_admin_nodes_submit()
 * @see node_admin_nodes_validate()
 * @see node_filter_form()
 * @see node_filter_form_submit()
 * @see node_multiple_delete_confirm()
 * @see node_multiple_delete_confirm_submit()
 *
 * @ingroup forms
 */
function xxxusgs_news_ui_admin_nodes() {
  $admin_access = user_access('administer nodes');

  // Build the 'Update options' form.
  $form['options'] = array(
    '#type' => 'fieldset',
    '#title' => t('Update options'),
    '#attributes' => array('class' => array('container-inline')),
    '#access' => $admin_access,
  );
  $options = array();
  foreach (module_invoke_all('node_operations') as $operation => $array) {
    $options[$operation] = $array['label'];
  }
  $form['options']['operation'] = array(
    '#type' => 'select',
    '#title' => t('Operation'),
    '#title_display' => 'invisible',
    '#options' => $options,
    '#default_value' => 'approve',
  );
  $form['options']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Update'),
    '#validate' => array('node_admin_nodes_validate'),
    '#submit' => array('node_admin_nodes_submit'),
  );

  // Build the sortable table header.
  $header = array(
    'status' => array('data' => t('Status'), 'field' => 'n.status'),
    'type' => array('data' => t('Type'), 'field' => 't.field_news_article_type_tid'),
    'image' => t('Image'),
    'title' => array('data' => t('Title'), 'field' => 'n.title'),
    'release_date' => array('data' => t('Release Date'), 'field' => 'd.field_news_article_release_date_value')
  );
  $header['operations'] = array('data' => t('Operations'));
/*
  $query = db_select('node', 'n')->extend('PagerDefault')->extend('TableSort');
  $query->join('field_data_field_news_article_release_date', 'd', 'n.nid = d.entity_id');
  $query->join('field_data_field_news_article_type', 't', 'n.nid = t.entity_id');
  $query->join('field_data_field_images', 'i', 'n.nid = i.entity_id');
  $query->condition('n.type', 'news_article', '=');
  $query->distinct();
  $query->addTag('node_admin_filter');
  //$query->addTag('debug');
  usgs_news_ui_build_filter_query($query);
*/
  /*
  if (!user_access('bypass node access')) {
    // If the user is able to view their own unpublished nodes, allow them
    // to see these in addition to published nodes. Check that they actually
    // have some unpublished nodes to view before adding the condition.
    if (user_access('view own unpublished content') && $own_unpublished = db_query('SELECT nid FROM {node} WHERE uid = :uid AND status = :status', array(':uid' => $GLOBALS['user']->uid, ':status' => 0))->fetchCol()) {
      $query->condition(db_or()
        ->condition('n.status', 1)
        ->condition('n.nid', $own_unpublished, 'IN')
      );
    }
    else {
      // If not, restrict the query to published nodes.
      $query->condition('n.status', 1);
    }
  }
  $nids = $query
    ->fields('n',array('nid'))
    ->limit(50)
    ->orderByHeader($header)
    ->addTag('node_access')
    ->execute()
    ->fetchCol();
  $nodes = node_load_multiple($nids);

  // Prepare the list of nodes.
  $destination = drupal_get_destination();
  $options = array();
  foreach ($nodes as $node) {
    $langcode = entity_language('node', $node);
    $l_options = $langcode != LANGUAGE_NONE && isset($languages[$langcode]) ? array('language' => $languages[$langcode]) : array();
    //We want to display the type of news article based on the taxonomy tag
    $article_types = array();
    foreach($node->field_news_article_type['und'] as $data) {
      $article_type = taxonomy_term_load($data['tid'])->name;
      $article_types[] = $article_type;
    }

    // We want to display a thumbnail of the image associated with the news item
    $image_file = file_load($node->field_images['und'][0]['fid']);
    $html_image = theme('image_style', array('style_name' => 'thumbnail', 'path' => $image_file->uri));
    // When developing, we won't have all the image files, so we simply replace it with this one
    // to see how it renders
    if(!file_exists(image_style_path('thumbnail', $image_file->uri))) {
      $image_file = file_load(24426);
    }
    $options[$node->nid] = array(
      'status' => $node->status ? t('published') : t('not published'),
      'type' => check_plain(implode(', ', $article_types)),
      'image' => theme('image_style', array('style_name' => 'thumbnail', 'path' => $image_file->uri)),
      'title' => array(
        'data' => array(
          '#type' => 'link',
          '#title' => $node->title,
          '#href' => 'node/' . $node->nid,
          '#options' => $l_options,
          '#suffix' => ' ' . theme('mark', array('type' => node_mark($node->nid, $node->changed))),
        ),
      ),
      'release_date' => format_date($node->field_news_article_release_date['und'][0]['value'], 'custom', 'M j, Y g:ia'),
    );

    // Build a list of all the accessible operations for the current node.
    $operations = array();
    if (node_access('update', $node)) {
      $operations['edit'] = array(
        'title' => t('edit'),
        'href' => 'node/' . $node->nid . '/edit',
        'query' => $destination,
      );
    }
    if (node_access('delete', $node)) {
      $operations['delete'] = array(
        'title' => t('delete'),
        'href' => 'node/' . $node->nid . '/delete',
        'query' => $destination,
      );
    }
    $options[$node->nid]['operations'] = array();
    if (count($operations) > 1) {
      // Render an unordered list of operations links.
      $options[$node->nid]['operations'] = array(
        'data' => array(
          '#theme' => 'links__node_operations',
          '#links' => $operations,
          '#attributes' => array('class' => array('links', 'inline')),
        ),
      );
    }
    elseif (!empty($operations)) {
      // Render the first and only operation as a link.
      $link = reset($operations);
      $options[$node->nid]['operations'] = array(
        'data' => array(
          '#type' => 'link',
          '#title' => $link['title'],
          '#href' => $link['href'],
          '#options' => array('query' => $link['query']),
        ),
      );
    }
  }

  // Only use a tableselect when the current user is able to perform any
  // operations.
  if ($admin_access) {
    $form['nodes'] = array(
      '#type' => 'tableselect',
      '#header' => $header,
      '#options' => $options,
      '#empty' => t('No content available.'),
    );
  }
  // Otherwise, use a simple table.
  else {
    $form['nodes'] = array(
      '#theme' => 'table',
      '#header' => $header,
      '#rows' => $options,
      '#empty' => t('No content available.'),
    );
  }

  $form['pager'] = array('#markup' => theme('pager'));
  return $form;
  */
}

/**
 * Validate node_admin_nodes form submissions.
 *
 * Checks whether any nodes have been selected to perform the chosen 'Update
 * option' on.
 *
 * @see node_admin_nodes()
 * @see node_admin_nodes_submit()
 * @see node_filter_form()
 * @see node_filter_form_submit()
 * @see node_multiple_delete_confirm()
 * @see node_multiple_delete_confirm_submit()
 */
function xxxusgs_news_ui_admin_nodes_validate($form, &$form_state) {
  // Error if there are no items to select.
  if (!is_array($form_state['values']['nodes']) || !count(array_filter($form_state['values']['nodes']))) {
    form_set_error('', t('No items selected.'));
  }
}

/**
 * Process node_admin_nodes form submissions.
 *
 * Executes the chosen 'Update option' on the selected nodes.
 *
 * @see node_admin_nodes()
 * @see node_admin_nodes_validate()
 * @see node_filter_form()
 * @see node_filter_form_submit()
 * @see node_multiple_delete_confirm()
 * @see node_multiple_delete_confirm_submit()
 */
function xxxusgs_news_ui_admin_nodes_submit($form, &$form_state) {
  $operations = module_invoke_all('node_operations');
  $operation = $operations[$form_state['values']['operation']];
  // Filter out unchecked nodes
  $nodes = array_filter($form_state['values']['nodes']);
  if ($function = $operation['callback']) {
    // Add in callback arguments if present.
    if (isset($operation['callback arguments'])) {
      $args = array_merge(array($nodes), $operation['callback arguments']);
    }
    else {
      $args = array($nodes);
    }
    call_user_func_array($function, $args);

    cache_clear_all();
  }
  else {
    // We need to rebuild the form to go to a second step. For example, to
    // show the confirmation form for the deletion of nodes.
    $form_state['rebuild'] = TRUE;
  }
}

/**
 * Menu callback for admin/config/content/usgs-ui.
 */
function usgs_news_ui_admin_settings() {
  // We want to provide an easy way to enable/disable the tabs based on
  // content type
  $form['intro'] = array(
    '#markup' => '<p>Select only those content types that you wish to have the USGS News UI tabs appear.</p>',
  );
  $form['types'] = array('#tree' => TRUE);
  $types = usgs_news_ui_get_types();
  foreach ($types as $key => $type) {
    $form['types'][$key] = array(
      '#title' => $type['label'],
      '#description' => $type['description'],
      '#type' => 'checkbox',
      '#return_value' => 1,
      '#default_value' => $type['enabled'],
    );
  }

  $form = system_settings_form($form);
  $form['#theme'] = 'usgs_news_ui_admin_settings';
  array_unshift($form['#submit'], 'usgs_news_ui_admin_settings_submit');

  return $form;
}

/**
 * Submit handler for the webform_admin_settings() form.
 */
function usgs_news_ui_admin_settings_submit($form, &$form_state) {
  $enabled_types = array();
  foreach ($form_state['values']['types'] as $name => $enabled) {
    if ($enabled) {
      $enabled_types[] = $name;
    }
  }
  // Update $form_state and let system_settings_form_submit() handle saving.
  $form_state['values']['usgs_news_ui_enabled_types'] = $enabled_types;
  unset($form_state['values']['types']);
}

/**
 * Theme the output of the webform_admin_settings() form.
 */
function xxxtheme_usgs_news_ui_admin_settings($variables) {
  $form = $variables['form'];

  // Format the components into a table.
  foreach (element_children($form['types']) as $key) {
    $row = array();
    $row[] = $form['types'][$key]['#title'];
    $row[] = $form['types'][$key]['#description'];
    $form['types'][$key]['#title'] = NULL;
    $form['types'][$key]['#description'] = NULL;
    $row[] = array('data' => drupal_render($form['types'][$key]), 'align' => 'center');
    $rows[] = $row;
  }
  $header = array(t('Name'), t('Description'), array('data' => t('Enabled'), 'class' => array('checkbox')));

  // Create the table inside the form.
  $form['types']['table'] = array(
    '#theme' => 'table',
    '#header' => $header,
    '#rows' => $rows,
  );

  return drupal_render_children($form);
}

function usgs_news_ui_dashboard($args){
    $view = views_embed_view('my_news_products', 'default', $args);
    return $view;
}

function usgs_news_ui_preprocess($hook, $hook2){
    //dsm($hook2);
}

function usgs_news_ui_preprocess_views_view_unformatted(&$vars){

}

function usgs_news_ui_preprocess_views_view(&$vars){
    if($vars['theme_hook_original']=='views_view__my_news_products'){
        $vars['show_owner'] = $vars['view']->args[0] =='myNews'?0:1;
        $vars['type_width'] = $vars['image_width'] = $vars['view']->args[0] =='myNews'?2:1;
    }
}


function usgs_news_ui_preprocess_views_view_fields(&$vars){

    if($vars['theme_hook_original']=='views_view_fields__my_news_products'){
        $vars['show_owner'] = $vars['view']->args[0] =='myNews'?0:1;
        $vars['type_width'] = $vars['image_width'] = $vars['view']->args[0] =='myNews'?2:1;
    }

      if($vars['theme_hook_original']=='views_view_fields__my_news_products') {
        $vars['status'] = $vars['fields']['field_news_article_pub_status']->content;
        $vars['article_type'] = $vars['fields']['field_news_article_type']->content;
        $vars['field_image'] = $vars['fields']['field_images']->content;
        $vars['title'] = $vars['fields']['title']->content;
        $vars['release_date'] = $vars['fields']['field_release_date']->content;
        $vars['nid'] = $vars['fields']['nid']->raw;
        $vars['content_owner'] = $vars['fields']['name']->raw;
    }
    $path = drupal_get_path('module', 'usgs_news_ui');
    drupal_add_css($path.'/css/usgs_news_ui.css');
}

function usgs_news_ui_scald_prerender($atom, $context, $options=array()){
    dsm($atom);
    dsm($context);
    dsm($options);
}