<?php
/**
 * @file
 * usgs_faq_taxonomy.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function usgs_faq_taxonomy_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-faq_categories-field_creation_date'
  $field_instances['taxonomy_term-faq_categories-field_creation_date'] = array(
    'bundle' => 'faq_categories',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_creation_date',
    'label' => 'Creation Date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'taxonomy_term-faq_categories-field_legacy_id'
  $field_instances['taxonomy_term-faq_categories-field_legacy_id'] = array(
    'bundle' => 'faq_categories',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_legacy_id',
    'label' => 'Legacy ID',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-faq_tags-field_legacy_tag_id'
  $field_instances['taxonomy_term-faq_tags-field_legacy_tag_id'] = array(
    'bundle' => 'faq_tags',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Legacy Tag ID is automatically populated for Tags which were brought into Drupal from PHPMyFAQ.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_legacy_tag_id',
    'label' => 'Legacy ID',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Creation Date');
  t('Legacy ID');
  t('Legacy Tag ID is automatically populated for Tags which were brought into Drupal from PHPMyFAQ.');

  return $field_instances;
}
