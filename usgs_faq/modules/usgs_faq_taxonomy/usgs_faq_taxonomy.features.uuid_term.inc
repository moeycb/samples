<?php
/**
 * @file
 * usgs_faq_taxonomy.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function usgs_faq_taxonomy_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Flows',
    'description' => 1005,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '001d7a00-261b-4d75-bc7f-8893f08e0e29',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 868,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Polar',
    'description' => 290,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '01e80672-9fcd-4d32-9fa1-b495502de839',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1037,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Public Land Survey System',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 9,
    'uuid' => '02d5a3be-cfc9-4df4-a0d8-62b37b3425b1',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 209,
        ),
      ),
    ),
    'parent' => array(
      0 => '1abc4fdd-b28c-4a69-8669-b7217f02e65f',
    ),
  );
  $terms[] = array(
    'name' => 'Paleontology',
    'description' => 503,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '043c0295-97df-49a2-a62f-2a37df72ff14',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 27,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bats White-Nose Syndrome',
    'description' => '<p>This category is about white-nose syndrome&nbsp; a disease affecting hibernating bats.</p>',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '04afab5f-2b23-436c-a402-a3886919d269',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2014-06-16T18:15:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(),
    'parent' => array(
      0 => '9aaf4f4f-62a0-428d-b268-c8ae171989f9',
    ),
  );
  $terms[] = array(
    'name' => 'Atlases',
    'description' => 390,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '05056596-376c-4f9a-8f7c-a9b98c5cd77a',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 918,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Sampling',
    'description' => 64,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0615d8f2-f043-4bb9-a450-897423237e0f',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 852,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Banding',
    'description' => 111,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '06929bd8-1c23-41cd-9149-0615d0d1dcde',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 968,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Drainage',
    'description' => 324,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '06c26988-e50c-41ec-a5cb-6f842515d94d',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 807,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Sinkholes',
    'description' => 86,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '080c6d6f-76d4-45c2-8976-0fd77deec0a2',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 854,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Magma',
    'description' => 658,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '090e7ea3-bdf9-485d-8b11-25d803af330a',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 625,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Education',
    'description' => 56,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '091c916b-0de8-4a63-976a-fbc738506dbe',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 706,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Scale',
    'description' => 539,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '09a5f659-f50a-4bf6-883c-472f1b8edcd5',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 972,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Conservation',
    'description' => 1949,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0a4d82bd-688a-428b-ba24-39f8a709b82f',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1116,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Earthquakes & Volcanoes',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 8,
    'uuid' => '0ae63e61-0d20-49c9-90c0-ee8b6e8172f4',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 164,
        ),
      ),
    ),
    'parent' => array(
      0 => '70bba52f-a397-4f6c-b11c-bf9573575394',
    ),
  );
  $terms[] = array(
    'name' => 'Reefs',
    'description' => 706,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0afffc30-4fba-4568-abd9-77c559bd18aa',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 860,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Accessibility',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0b0b4072-08da-4ca1-89e1-84e28905c05d',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 192,
        ),
      ),
    ),
    'parent' => array(
      0 => 'c8357956-db10-4e95-ae73-a687e5d859cd',
    ),
  );
  $terms[] = array(
    'name' => 'Hawaii Lava Flow Hazard Zone Maps',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0bb3f5c2-57a8-4464-9d2c-b42e226090f0',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 226,
        ),
      ),
    ),
    'parent' => array(
      0 => 'e4be3ce8-832d-46ea-a01b-30ed5540fd45',
    ),
  );
  $terms[] = array(
    'name' => 'Energy',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 49,
    'uuid' => '0d0e2fb4-27f4-4ef9-a730-2a4be077b537',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 8,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Cascades',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '0de6b95c-bf5e-4561-98dc-a4c9e0511f2e',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 220,
        ),
      ),
    ),
    'parent' => array(
      0 => '85f95184-e8dd-42ef-9237-43fe1ccd5c2b',
    ),
  );
  $terms[] = array(
    'name' => 'Landsat 8',
    'description' => '<p>formerly called &quot;Landsat Data Continuity Mission (LDCM)&quot;</p>',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0e87da86-18c7-46a2-a6d8-ffb02c83b867',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 239,
        ),
      ),
    ),
    'parent' => array(
      0 => '82440574-27b6-4605-8fc3-0c3720b62cf4',
    ),
  );
  $terms[] = array(
    'name' => 'Floods and Droughts',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '0f9b2aa6-9d2d-4e9e-801a-1416c7329bf9',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 4,
        ),
      ),
    ),
    'parent' => array(
      0 => '66bc8b9b-a78f-40db-b46f-374f601a4d4c',
    ),
  );
  $terms[] = array(
    'name' => 'Refining',
    'description' => 88,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '10052357-b3fc-4dd6-86e3-4d6449840c60',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1051,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Radioactivity',
    'description' => 1189,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '111e286b-23ea-4740-bb88-61473f508993',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1131,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Landsat',
    'description' => 247,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1122963d-a2d3-4bd7-9fc0-4cfe301f3afe',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 641,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Mount St. Helens',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '11b33257-39bd-4f5a-89e2-373faa52685f',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 228,
        ),
      ),
    ),
    'parent' => array(
      0 => '0de6b95c-bf5e-4561-98dc-a4c9e0511f2e',
    ),
  );
  $terms[] = array(
    'name' => 'White-nose Syndrome (WNS)',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '11e48ab1-2d92-4d42-affc-1e9fac946b37',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(),
  );
  $terms[] = array(
    'name' => 'Climate Change',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1230c30b-e50e-46b8-82d6-8fd07ddb2d5a',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(),
  );
  $terms[] = array(
    'name' => 'Environmental Health',
    'description' => 'Environmental health description',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '12ccfa23-8b07-46bc-8988-790f9d3f2519',
    'vocabulary_machine_name' => 'topics',
  );
  $terms[] = array(
    'name' => 'Interns',
    'description' => 617,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1434c1f2-5159-403d-a7eb-34ef5d8215ce',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 838,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Gas Hydrate',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '1511602e-4f35-498a-84f7-31f5089e0770',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 98,
        ),
      ),
    ),
    'parent' => array(
      0 => '0d0e2fb4-27f4-4ef9-a730-2a4be077b537',
    ),
  );
  $terms[] = array(
    'name' => 'Electric Power',
    'description' => 2344,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '152f99ee-8869-45fd-b3ab-84d1f58cb6dd',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1167,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Precipitation',
    'description' => 136,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '15c0ddda-f897-4886-a0a8-566b7a59e3dd',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1003,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Contours',
    'description' => 1995,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1663eb65-a6c5-4c14-a275-af0823dea9a9',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1157,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Historical',
    'description' => 321,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '16d74a7e-2e43-44f5-8d99-35ea09880e84',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 786,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'The National Map Viewer',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '171ee24e-8a00-4d58-947d-524565cde4b4',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 169,
        ),
      ),
    ),
    'parent' => array(
      0 => '261754f9-95e1-4eb5-b578-dd0fc32a4d88',
    ),
  );
  $terms[] = array(
    'name' => 'Seafloor',
    'description' => 706,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '17568dcf-bea9-458a-b23b-33f62214fb19',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 851,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Measurement',
    'description' => 56,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '17c5e22d-d0a7-4050-8b26-3fc376aacb81',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 864,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Minerals',
    'description' => 78,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '17d0a5b6-63e4-48e9-8beb-82d51d73961f',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 656,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Warming',
    'description' => 1167,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '17e1a916-efa9-412b-8920-7515270c1350',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1084,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bats General',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '19fb412b-ec70-416e-8f8e-d3ef82f0a557',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2014-06-27T18:15:15',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(),
    'parent' => array(
      0 => '9aaf4f4f-62a0-428d-b268-c8ae171989f9',
    ),
  );
  $terms[] = array(
    'name' => 'Services & Product Information',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '1abc4fdd-b28c-4a69-8669-b7217f02e65f',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 194,
        ),
      ),
    ),
    'parent' => array(
      0 => '171ee24e-8a00-4d58-947d-524565cde4b4',
    ),
  );
  $terms[] = array(
    'name' => 'Faults',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '1e19dded-3341-4dfd-b651-769824f4372b',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 132,
        ),
      ),
    ),
    'parent' => array(
      0 => '70bba52f-a397-4f6c-b11c-bf9573575394',
    ),
  );
  $terms[] = array(
    'name' => 'Classification',
    'description' => 118,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1e1f689d-1c2e-4ac2-821e-801d2aa94ff7',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 798,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'National Atlas',
    'description' => 387,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1e22dd90-1a53-4567-a0f0-48d0ea039af0',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 619,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Reptiles',
    'description' => 700,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1eda221c-c268-49ca-a1dc-205b2f147cfe',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 608,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Floods',
    'description' => 60,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1fc61ed4-e012-4761-92fc-006720aac3fb',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 570,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Geographic Names Information System',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '208fcd5c-63d9-4c34-bb66-217314e34059',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 184,
        ),
      ),
    ),
    'parent' => array(
      0 => '261754f9-95e1-4eb5-b578-dd0fc32a4d88',
    ),
  );
  $terms[] = array(
    'name' => 'Wildlife General',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '210093c8-9e7e-4111-bfd5-20218a86cd24',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 173,
        ),
      ),
    ),
    'parent' => array(
      0 => '824bfc4f-a89c-4045-a21f-3e6bccb328ec',
    ),
  );
  $terms[] = array(
    'name' => 'Fish General',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '21204a0c-ecd7-4fc0-b307-64720d4d6b4d',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 183,
        ),
      ),
    ),
    'parent' => array(
      0 => '824bfc4f-a89c-4045-a21f-3e6bccb328ec',
    ),
  );
  $terms[] = array(
    'name' => 'Agriculture',
    'description' => 987,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '21cbf486-4acf-4886-982c-7efcb52e8b34',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 954,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Print',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '2243514f-0aae-4aa0-9fd3-b5c1a82dff1e',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 193,
        ),
      ),
    ),
    'parent' => array(
      0 => 'c8357956-db10-4e95-ae73-a687e5d859cd',
    ),
  );
  $terms[] = array(
    'name' => 'Boundaries',
    'description' => 794,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2345817f-55ea-4b56-97ed-0529625e7750',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 772,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Streamgages',
    'description' => 60,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '23b99c31-1aab-447c-9a24-59897ceea9a1',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1004,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Global Vs30 Map Server',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 14,
    'uuid' => '23e8c944-7616-4e6c-a807-8fa93f75bdb4',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 134,
        ),
      ),
    ),
    'parent' => array(
      0 => '70bba52f-a397-4f6c-b11c-bf9573575394',
    ),
  );
  $terms[] = array(
    'name' => 'PAGER',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '2453f135-8db2-47fe-8cda-07fb851160f3',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 130,
        ),
      ),
    ),
    'parent' => array(
      0 => '70bba52f-a397-4f6c-b11c-bf9573575394',
    ),
  );
  $terms[] = array(
    'name' => 'Hydraulic Fracturing',
    'description' => 2281,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '24958871-3fd5-4f06-ba2b-feb5b779c42c',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1161,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Acid Rain',
    'description' => 766,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '24d42ec2-1909-4a23-914a-5a914cc0b973',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 616,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Continuous Oil',
    'description' => 1026,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '256c200e-d327-4334-b677-e5792a5d103a',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1088,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Oceans',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 132,
    'uuid' => '25d913ae-2fa5-4ad3-89ff-4ee72646c3d8',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 241,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Maps and Mapping',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 131,
    'uuid' => '261754f9-95e1-4eb5-b578-dd0fc32a4d88',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 19,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Elevation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '27448b26-4c7f-4cef-bbb0-a58850b3a4df',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 200,
        ),
      ),
    ),
    'parent' => array(
      0 => '1abc4fdd-b28c-4a69-8669-b7217f02e65f',
    ),
  );
  $terms[] = array(
    'name' => 'Data, Tools, and Technology',
    'description' => 'Data, Tools, and Technology description',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '275609d4-0cbd-4c59-87df-351e26aad4e9',
    'vocabulary_machine_name' => 'topics',
  );
  $terms[] = array(
    'name' => 'Birds',
    'description' => 84,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '27c6e77f-b937-4719-979f-cda9ef3e939f',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 495,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Historical Earthquakes & Statistics',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 10,
    'uuid' => '289ac2dd-3350-4647-b4f1-107e5e54f353',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 123,
        ),
      ),
    ),
    'parent' => array(
      0 => '70bba52f-a397-4f6c-b11c-bf9573575394',
    ),
  );
  $terms[] = array(
    'name' => 'Lakes',
    'description' => 56,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '29c73b09-8cda-41ac-8c7e-f2080576459e',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 875,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Seismology',
    'description' => 47,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '29f1f8b1-8494-4d57-9452-55c1581d403f',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 34,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Digital Orthophoto Quadrangles (DOQ)',
    'description' => 363,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '29f5d3d5-9682-4456-ad95-c860c2f9f7ad',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 653,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Energy',
    'description' => 'Energy description',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2cc33699-69dc-4d0a-abf9-654d28bf19bd',
    'vocabulary_machine_name' => 'topics',
  );
  $terms[] = array(
    'name' => 'Pollinators',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2d06135d-252e-4a61-b4f0-fec6ca71961e',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(),
  );
  $terms[] = array(
    'name' => 'Ecology',
    'description' => 56,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2d6400f7-dab9-448e-9861-92dab06caff1',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 843,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Earthquake Myths',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '2d846368-7491-4545-a2a3-0f9be4b13cd7',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 120,
        ),
      ),
    ),
    'parent' => array(
      0 => '70bba52f-a397-4f6c-b11c-bf9573575394',
    ),
  );
  $terms[] = array(
    'name' => 'Wind',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2e1fa601-bd88-4441-aab1-1d91bda4bd5c',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(),
  );
  $terms[] = array(
    'name' => 'Satellites',
    'description' => 247,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2e98eeec-e62c-42bb-a268-f6a03f8796bc',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 642,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Geographic Information Systems (GIS)',
    'description' => 376,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '32e49d4f-9afe-4517-ab9a-3bd8fc3ee35a',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 118,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Testing',
    'description' => 286,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '33967206-3f56-42c3-b92e-0be85a231786',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 920,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Preparedness',
    'description' => 1722,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '34b349e4-0d09-4124-ad70-ac99359e730c',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1155,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Desert',
    'description' => 135,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '34e5ff32-5fde-4ffb-b635-bf476fdcb50a',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1099,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Volcano Hazards',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '350a6c7c-531d-45ca-b3c8-e6049718b15a',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 217,
        ),
      ),
    ),
    'parent' => array(
      0 => '85f95184-e8dd-42ef-9237-43fe1ccd5c2b',
    ),
  );
  $terms[] = array(
    'name' => 'Fracking',
    'description' => 2281,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '35367059-74c0-4207-87c7-2123ac3db4fe',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1160,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Sensors',
    'description' => 247,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '35a13f3d-a7c0-4cce-946e-62a55f9f2424',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 846,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Wildfires',
    'description' => '<p>This category was developed for the 2013 fire season</p>',
    'format' => 'filtered_html',
    'weight' => 140,
    'uuid' => '35f25605-966b-4b76-a0ef-bf441606df42',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-08-30T15:45:30',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(),
  );
  $terms[] = array(
    'name' => 'Uranium',
    'description' => 1189,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '35f9eae5-b1c8-42b7-b93b-49baceba06a6',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1132,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Gold',
    'description' => 89,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '371447fd-0ddd-4b33-b668-1015115b874d',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 990,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Did You Feel It?',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '3764814a-cc6a-43d6-ba05-c7ceb906d514',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 129,
        ),
      ),
    ),
    'parent' => array(
      0 => '70bba52f-a397-4f6c-b11c-bf9573575394',
    ),
  );
  $terms[] = array(
    'name' => 'Mines',
    'description' => 85,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '37e9b3c5-0dfe-471e-ba9b-e1a363642b51',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 643,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Geospatial',
    'description' => 58,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '38c9ad50-b1bf-4a6f-bf1e-29edc29f9582',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 849,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Digital',
    'description' => 320,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '38df310b-6fc9-46db-b6cf-74cf249fe66d',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 841,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Biology and Ecosystems',
    'description' => 'Biology and Ecosystems description',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '391bf29f-272a-49df-8811-b0f71bf13807',
    'vocabulary_machine_name' => 'topics',
  );
  $terms[] = array(
    'name' => 'Remote Sensing and Imagery',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 135,
    'uuid' => '39722e55-72cc-4845-92da-989d6e9a8ee3',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 24,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Missions and Sensors',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '399fa50d-c102-483c-8c84-bb274d630a59',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 236,
        ),
      ),
    ),
    'parent' => array(
      0 => '82440574-27b6-4605-8fc3-0c3720b62cf4',
    ),
  );
  $terms[] = array(
    'name' => 'Transportation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 13,
    'uuid' => '3a3ed44d-7686-405c-b6f3-51f680fa7552',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 203,
        ),
      ),
    ),
    'parent' => array(
      0 => '1abc4fdd-b28c-4a69-8669-b7217f02e65f',
    ),
  );
  $terms[] = array(
    'name' => 'Map Indices',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => '3a53423b-3670-4c51-9fc3-2563e44d969b',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 208,
        ),
      ),
    ),
    'parent' => array(
      0 => '1abc4fdd-b28c-4a69-8669-b7217f02e65f',
    ),
  );
  $terms[] = array(
    'name' => 'Ring of Fire',
    'description' => 41,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3a60410e-caf1-4928-981b-fd74223db60d',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1128,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Groundwater',
    'description' => 57,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3ac45821-caa1-44be-918b-2c931e9f645b',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 414,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Amphibians',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '3b1bd22a-de20-4d1b-8fbc-c3de8f88b8c0',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 156,
        ),
      ),
    ),
    'parent' => array(
      0 => '9aaf4f4f-62a0-428d-b268-c8ae171989f9',
    ),
  );
  $terms[] = array(
    'name' => 'Fire',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3bd9eee7-4e65-4736-904c-27de65beda3f',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(),
  );
  $terms[] = array(
    'name' => 'Search',
    'description' => 111,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3c051b2c-6895-45f6-8180-72fcab03dd9e',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1052,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Native Species',
    'description' => 125,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3c3a6c9b-3355-4947-84e2-1d1572f22ef3',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 466,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Avian Flu',
    'description' => 119,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3c68f088-5f10-4d2c-bc19-2f8f06c324b1',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 623,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Marcellus Shale',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '3d0d5576-217e-49c5-b7ba-6d448cf39fa6',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 223,
        ),
      ),
    ),
    'parent' => array(
      0 => '0d0e2fb4-27f4-4ef9-a730-2a4be077b537',
    ),
  );
  $terms[] = array(
    'name' => 'Citations',
    'description' => 1162,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3d28456b-99ab-4e61-bb49-ce30f3d5bb15',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1022,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Digital Images',
    'description' => 327,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3da86195-1366-4179-bd61-d901219a346a',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 820,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Oil and Gas',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3e451d77-1f7f-4771-8db7-bb7da60a2bc1',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(),
  );
  $terms[] = array(
    'name' => 'Pest Control',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3e580bd9-5cd0-4ca9-905a-8e8fa9f74e18',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(),
  );
  $terms[] = array(
    'name' => 'Nuclear Explosions & Seismology',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 13,
    'uuid' => '3ffcd3e3-4a07-4bf7-998a-17a8cbc3b34b',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 135,
        ),
      ),
    ),
    'parent' => array(
      0 => '70bba52f-a397-4f6c-b11c-bf9573575394',
    ),
  );
  $terms[] = array(
    'name' => 'Bakken',
    'description' => 1026,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3fffc9ef-38a2-4b73-bf9e-8732e730ad30',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 835,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Foreign Oil',
    'description' => 1027,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4043f35d-b34f-47dc-b598-c44b3e8038c1',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1089,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Sedimentary Rocks',
    'description' => 503,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4153371e-bfe0-438a-b16a-d3ffcd01b9c9',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 456,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Insects',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '4167be60-da3b-40c6-bad5-2777c4c0e48a',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 182,
        ),
      ),
    ),
    'parent' => array(
      0 => '440af437-7f12-4b12-b6e2-c3ca5009ffb6',
    ),
  );
  $terms[] = array(
    'name' => 'Threatened Species',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '41a99acd-8016-4689-a5a2-75dacdbc8661',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(),
  );
  $terms[] = array(
    'name' => 'Exploration',
    'description' => 1124,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '42718eff-743e-4966-b6e2-6e9abbd58c37',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 801,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Toxics',
    'description' => 1188,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '42f6c970-fb36-4054-9e33-584593a09b1d',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1086,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Gas',
    'description' => 1026,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '430fe85b-9608-4595-9d11-b3fe5575566d',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 769,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Biology',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '440af437-7f12-4b12-b6e2-c3ca5009ffb6',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Remote Sensing',
    'description' => 247,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '44d726f3-e267-483a-9118-deec975d3033',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 353,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Measuring Earthquakes',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '45852c0a-6bb5-4f7e-a75b-9d44bda0a016',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 118,
        ),
      ),
    ),
    'parent' => array(
      0 => '70bba52f-a397-4f6c-b11c-bf9573575394',
    ),
  );
  $terms[] = array(
    'name' => 'Yellowstone',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => '463435bf-ca95-4712-ab4d-3e8e8f15c0c0',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 214,
        ),
      ),
    ),
    'parent' => array(
      0 => '85f95184-e8dd-42ef-9237-43fe1ccd5c2b',
    ),
  );
  $terms[] = array(
    'name' => 'Water',
    'description' => 'Water description',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '46ca3976-0680-4583-a545-e0b262bf6e4c',
    'vocabulary_machine_name' => 'topics',
  );
  $terms[] = array(
    'name' => 'Shaded Relief',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 11,
    'uuid' => '476ed2df-e6bb-45b8-a3d6-91fc9bf58c76',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 197,
        ),
      ),
    ),
    'parent' => array(
      0 => '1abc4fdd-b28c-4a69-8669-b7217f02e65f',
    ),
  );
  $terms[] = array(
    'name' => 'Wildlife',
    'description' => 84,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4a2c9f29-5d87-43f0-a95d-65a65a3d6825',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 391,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Volcanoes General',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4b084f29-9fa6-4dd9-a5a3-26d31d62c306',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 216,
        ),
      ),
    ),
    'parent' => array(
      0 => '85f95184-e8dd-42ef-9237-43fe1ccd5c2b',
    ),
  );
  $terms[] = array(
    'name' => 'Animals',
    'description' => 110,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4b2a0993-9c83-46f3-9083-2d2d0ccde3e4',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 389,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Streams',
    'description' => 60,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4c2048db-a265-4439-b56b-190759dbefa2',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 865,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Landsat General',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '4c5a18c6-f8dc-46b3-b1e2-03005e8c3d1f',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 232,
        ),
      ),
    ),
    'parent' => array(
      0 => '82440574-27b6-4605-8fc3-0c3720b62cf4',
    ),
  );
  $terms[] = array(
    'name' => 'Photographs',
    'description' => 282,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4caf178d-9522-4748-be81-016e59cf15e8',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 697,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Liquefaction',
    'description' => 304,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4ccfa9b7-9756-4660-b121-e6bcc8431d9c',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 127,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Metadata',
    'description' => 378,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4d1d9c5c-f31b-461f-8d8c-83a3976c6e73',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 903,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Pythons',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => '4d288bb5-c5ac-4061-9698-e117a972281a',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 146,
        ),
      ),
    ),
    'parent' => array(
      0 => 'af6b153c-63b8-4e48-8a59-61ebeafbd18d',
    ),
  );
  $terms[] = array(
    'name' => 'Geology',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 58,
    'uuid' => '4ddc4013-8f88-4cd6-a8ad-e6534504a704',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 10,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Datum',
    'description' => 378,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4e95434a-c2e5-405a-9324-4cc880dcbf11',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 902,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Oil',
    'description' => 1026,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4fb1ab52-4b15-4a9d-9cbb-a024dc68a19f',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 774,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Hydrography',
    'description' => 356,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5168da35-d2b4-4c53-91a2-6b7b5607d7e6',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 995,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Basics About USGS',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '51ef0002-9126-4a31-b95b-7c34efba5e5c',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:30:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 170,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Catalog',
    'description' => 142,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '522c49c0-326c-475b-934c-0b5b40cbad40',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 933,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bathymetry',
    'description' => 246,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '53104112-7f52-4403-9d27-679a5bd91652',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 451,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Carbon Sequestration',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '53626104-6f4a-495e-87aa-bcc5814ca2e2',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(),
  );
  $terms[] = array(
    'name' => 'Education',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 48,
    'uuid' => '545da907-16bc-439b-ba57-3f4678a722c2',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 32,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Wind Energy',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '547e5e87-6c53-44f9-92df-6dc8b9e8a00f',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(),
  );
  $terms[] = array(
    'name' => 'Chronic Wasting Disease',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '54c23e27-48ea-41d3-acd2-ce95af21abe6',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 179,
        ),
      ),
    ),
    'parent' => array(
      0 => '824bfc4f-a89c-4045-a21f-3e6bccb328ec',
    ),
  );
  $terms[] = array(
    'name' => 'Map Coordinate Systems',
    'description' => 844,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '54f11b7d-9c39-4760-a0d1-0e4b4a83b021',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 521,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Geologic Time',
    'description' => 1189,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '55487a94-49e1-4050-95eb-505a00491447',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1137,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Constrictors',
    'description' => 1272,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5548b252-15ad-4653-87ec-eb56fd6e96d7',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1141,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Time',
    'description' => 613,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '55e3adaa-1dbb-446c-8226-64b9abb0f207',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 792,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Mussels',
    'description' => 125,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5644a348-e334-4046-87d6-697880ea663b',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 811,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Swine Flu (H1N1)',
    'description' => 949,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '56bad006-e267-44b5-9f05-b5981f6a3442',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 934,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Assessments',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '577dc0b2-250a-4426-bb61-6a4408424e86',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(),
  );
  $terms[] = array(
    'name' => 'Invasive Species General',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '57ccbecc-d362-42fa-877e-a8704ec90787',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 231,
        ),
      ),
    ),
    'parent' => array(
      0 => 'af6b153c-63b8-4e48-8a59-61ebeafbd18d',
    ),
  );
  $terms[] = array(
    'name' => 'Landslides',
    'description' => 'advisory',
    'format' => 'plain_text',
    'weight' => 69,
    'uuid' => '5a2c7e55-d528-4abd-9140-ffb7cc24b2e3',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 17,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Climate Change',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 30,
    'uuid' => '5a3cb4e8-19e9-40ed-be33-e41a8d502c1b',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 105,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Copyright',
    'description' => 555,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5b94fdde-bb86-4ec2-b588-8ee074d7e9ce',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 661,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Hydrography',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '5b962249-7b27-425c-8b21-dccee3673f04',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 201,
        ),
      ),
    ),
    'parent' => array(
      0 => '1abc4fdd-b28c-4a69-8669-b7217f02e65f',
    ),
  );
  $terms[] = array(
    'name' => 'Bacteria',
    'description' => 71,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5c22c1e9-2860-4057-b516-942fa038e4ea',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 372,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Earthquake Prediction',
    'description' => 876,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5c3a4186-b57f-4448-a1f7-2e927ca03982',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 638,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'US Topo',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5c81004d-13b3-4e91-b721-d0a85928b026',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 168,
        ),
      ),
    ),
    'parent' => array(
      0 => 'a79334eb-fdc8-46b9-b44f-0d97f317a44c',
    ),
  );
  $terms[] = array(
    'name' => 'Water Use',
    'description' => 70,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5cb391d5-0a74-4c00-914c-91f6ae75f580',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 170,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Magnetic Field',
    'description' => 473,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5da996e4-0431-4cd3-9bcf-86c56f220c8d',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 805,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'National Map',
    'description' => 332,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5e186eee-1410-4e8f-8272-f8026a0aa49f',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 636,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Disease',
    'description' => 65,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5e6b6d8d-fd41-4950-ad80-e28289cb621c',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 630,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Aerial Photography',
    'description' => 282,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5ef8c2a8-325e-47eb-8923-a650161ec655',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 351,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bats',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '60ae448f-6611-4c9e-9bd5-510f9a008451',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(),
  );
  $terms[] = array(
    'name' => 'User Guides',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '61145ee3-5a20-48b7-9cc2-6d915bf11238',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 190,
        ),
      ),
    ),
    'parent' => array(
      0 => 'c8357956-db10-4e95-ae73-a687e5d859cd',
    ),
  );
  $terms[] = array(
    'name' => 'Data Products',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '61257328-3999-473e-88c6-6027d01bf3da',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(),
  );
  $terms[] = array(
    'name' => 'Add My Service to TNM Viewer',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6251bfd0-123a-4beb-b1b2-15bfa592690f',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 211,
        ),
      ),
    ),
    'parent' => array(
      0 => '171ee24e-8a00-4d58-947d-524565cde4b4',
    ),
  );
  $terms[] = array(
    'name' => 'Chinese Tallow',
    'description' => 683,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6361dfc5-29c2-4a93-b423-0265094f2044',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1140,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Power',
    'description' => 53,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6365a081-41a5-42e8-8b30-8c22adaf502d',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1096,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Crater',
    'description' => 997,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '65643669-89d5-4a4a-8ff0-27050c60785a',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 874,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Burmese Python Human Risk Assessment',
    'description' => '<p>Burmese Python Human Risk Assessment</p>',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => '665cf043-faaa-4b0f-aa78-eb5a2ef79252',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2014-02-27T19:15:45',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(),
    'parent' => array(
      0 => 'af6b153c-63b8-4e48-8a59-61ebeafbd18d',
    ),
  );
  $terms[] = array(
    'name' => 'Water',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 139,
    'uuid' => '66bc8b9b-a78f-40db-b46f-374f601a4d4c',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 30,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Streamflow',
    'description' => 60,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '671719d7-6094-49de-b0c8-c427e77dc7bb',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 534,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Sun',
    'description' => 473,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '67aa0a29-6309-4d4b-9cb6-39aeba45ce04',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1023,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Monitoring',
    'description' => 41,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '67b2dbda-ee2f-4a36-8e18-e35adec12af6',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 813,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Global Positioning System (GPS)',
    'description' => 842,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6800497d-9162-48c2-9e37-8900ff99b256',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1163,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Amphibians',
    'description' => 121,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6840e61e-7a36-42aa-b8a3-eedcee467143',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 380,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Element',
    'description' => 1189,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '68444a39-9c13-44e6-835d-a47c91b5496a',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1125,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Contamination and Pollution',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6844548b-ac16-492b-810f-887021699deb',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 104,
        ),
      ),
    ),
    'parent' => array(
      0 => '66bc8b9b-a78f-40db-b46f-374f601a4d4c',
    ),
  );
  $terms[] = array(
    'name' => 'Grants',
    'description' => 1164,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '69e94c24-bed3-448e-8de6-ec09bb03718a',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1070,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Geospatial Data',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '69f3415c-016e-4051-9431-ca02b416ff2c',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 12,
        ),
      ),
    ),
    'parent' => array(
      0 => '261754f9-95e1-4eb5-b578-dd0fc32a4d88',
    ),
  );
  $terms[] = array(
    'name' => 'Health',
    'description' => 65,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6a2bbfe2-9a21-4a08-b4ad-373d412291f0',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 770,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Vegetation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '6aa62655-abf7-4cc4-8366-931815b1e23e',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 27,
        ),
      ),
    ),
    'parent' => array(
      0 => '440af437-7f12-4b12-b6e2-c3ca5009ffb6',
    ),
  );
  $terms[] = array(
    'name' => 'Projections',
    'description' => 377,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6b8528b1-3b9f-406f-b963-40e13a2858cc',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 966,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Aquatic',
    'description' => 125,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6c9d2737-db1b-4493-92a8-b951a46aa503',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1118,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Surface Water',
    'description' => 60,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6cd63df2-8654-4d08-8145-79c34ede1f17',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 896,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Forest Service',
    'description' => 381,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6dccc370-915e-4749-bd6b-6138294fbe6d',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 794,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Water Quality',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '6e5b9742-ceb6-4a58-9afd-a97ee4388989',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 102,
        ),
      ),
    ),
    'parent' => array(
      0 => '66bc8b9b-a78f-40db-b46f-374f601a4d4c',
    ),
  );
  $terms[] = array(
    'name' => 'Quadrangle',
    'description' => 368,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6e624770-a102-4c57-b24a-20fb8c0b243c',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 797,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Contours',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '6f10f273-1e20-44ce-bdaa-23c65622e49d',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 198,
        ),
      ),
    ),
    'parent' => array(
      0 => '1abc4fdd-b28c-4a69-8669-b7217f02e65f',
    ),
  );
  $terms[] = array(
    'name' => 'Sumatra',
    'description' => 863,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6f1442dd-5cc2-4df1-a0ed-a026e4429333',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1067,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Lava',
    'description' => 41,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6f1e3367-99b0-4f23-a77b-802e7350e38f',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 866,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Earthquakes',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 31,
    'uuid' => '70bba52f-a397-4f6c-b11c-bf9573575394',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 113,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Pollution',
    'description' => 67,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7190d4cb-aa1f-49d1-a8c5-72533bbf44a8',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 401,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Eels',
    'description' => 597,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '71db0f11-60d3-41aa-8953-739e77408ee6',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 627,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Latitude and Longitude',
    'description' => 323,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '72fc1859-1aac-4a2b-bd78-5f4ee1863ea5',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1164,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Dinosaurs',
    'description' => 659,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '73d56abf-f314-43d7-8d6a-e0be15f80050',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 607,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Data',
    'description' => 58,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '74cc0103-d3a0-45cc-b4c3-00004d27bf86',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 900,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Hydrology',
    'description' => 67,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7584b9f8-6c27-49e5-b860-b6f558af719a',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 25,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Recreation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 134,
    'uuid' => '763e354a-9576-448c-aacf-d473840b5fa6',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 38,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Using Landsat Data',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '777d864b-adda-4204-be94-64385b44c322',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 237,
        ),
      ),
    ),
    'parent' => array(
      0 => '82440574-27b6-4605-8fc3-0c3720b62cf4',
    ),
  );
  $terms[] = array(
    'name' => 'Base Map',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7886a8fa-109d-491c-b99f-78ee93ded6c1',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 195,
        ),
      ),
    ),
    'parent' => array(
      0 => '1abc4fdd-b28c-4a69-8669-b7217f02e65f',
    ),
  );
  $terms[] = array(
    'name' => 'Glaciers',
    'description' => 290,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '79624fd2-e394-4415-a319-a77bcbd18ea3',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 629,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Marine',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '799493f5-8cde-4f83-926f-4841497e0af2',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 160,
        ),
      ),
    ),
    'parent' => array(
      0 => '9aaf4f4f-62a0-428d-b268-c8ae171989f9',
    ),
  );
  $terms[] = array(
    'name' => 'Unmanned Aircraft Systems (UAS)',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '79d646f6-2537-4f42-b6bf-e86d6b753ad6',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-09-05T16:00:45',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(),
    'parent' => array(
      0 => '39722e55-72cc-4845-92da-989d6e9a8ee3',
    ),
  );
  $terms[] = array(
    'name' => 'wildlife disease',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7bb22754-6680-4c0a-92e0-2dd6d4469348',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(),
  );
  $terms[] = array(
    'name' => 'Deformities',
    'description' => 353,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7be3e0a3-1c8d-4889-b17b-012a1692fb4d',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1048,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Granite',
    'description' => 88,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '80424e55-26ad-4771-bb92-52fc01010bc7',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1050,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Groundwater and Aquifers',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '80e30fa1-5772-4d6c-9ce9-b25619f81cda',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 25,
        ),
      ),
    ),
    'parent' => array(
      0 => '66bc8b9b-a78f-40db-b46f-374f601a4d4c',
    ),
  );
  $terms[] = array(
    'name' => 'Salmon',
    'description' => 721,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8115a2fc-6fa8-4fb0-ac68-897d671e73a1',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 615,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Seismicity',
    'description' => 41,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '818ad2ef-34d2-4f33-ad7b-039bac6af959',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 940,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Limestone',
    'description' => 1130,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '81b77abd-0628-48c0-90c9-7b7292d078c2',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 855,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Landsat',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '82440574-27b6-4605-8fc3-0c3720b62cf4',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 96,
        ),
      ),
    ),
    'parent' => array(
      0 => '39722e55-72cc-4845-92da-989d6e9a8ee3',
    ),
  );
  $terms[] = array(
    'name' => 'Wildlife',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => '824bfc4f-a89c-4045-a21f-3e6bccb328ec',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 29,
        ),
      ),
    ),
    'parent' => array(
      0 => '440af437-7f12-4b12-b6e2-c3ca5009ffb6',
    ),
  );
  $terms[] = array(
    'name' => 'Paleontology',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '82a0463a-29ad-4993-8cc4-3070987f689a',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 94,
        ),
      ),
    ),
    'parent' => array(
      0 => '4ddc4013-8f88-4cd6-a8ad-e6534504a704',
    ),
  );
  $terms[] = array(
    'name' => 'Salmon',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '82c8d2aa-7648-4ac6-9933-5d350ede74d0',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 172,
        ),
      ),
    ),
    'parent' => array(
      0 => '824bfc4f-a89c-4045-a21f-3e6bccb328ec',
    ),
  );
  $terms[] = array(
    'name' => 'Zebra Mussels',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 10,
    'uuid' => '83344221-ccc9-4c02-82d6-0d17d129ba16',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 149,
        ),
      ),
    ),
    'parent' => array(
      0 => 'af6b153c-63b8-4e48-8a59-61ebeafbd18d',
    ),
  );
  $terms[] = array(
    'name' => 'Snow',
    'description' => 290,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8370720b-4b06-40cd-8de0-983ef2b53776',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 827,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Geomagnetism',
    'description' => 473,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '838579b3-5d18-423e-800a-11c803f3ead9',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 644,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Burned Area',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '84b13630-194f-4e3e-bdb7-2ef69fb87301',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(),
  );
  $terms[] = array(
    'name' => 'Jobs',
    'description' => 617,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '857c3977-cd74-41a1-b035-9ecf0eaebffc',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 637,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Latest Earthquakes',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '85d285e9-71b4-4795-9d0c-19c75434dcb3',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 114,
        ),
      ),
    ),
    'parent' => array(
      0 => '70bba52f-a397-4f6c-b11c-bf9573575394',
    ),
  );
  $terms[] = array(
    'name' => 'Volcanoes',
    'description' => 'deadliest',
    'format' => 'plain_text',
    'weight' => 138,
    'uuid' => '85f95184-e8dd-42ef-9237-43fe1ccd5c2b',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 91,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Coal',
    'description' => 2342,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '87990f86-5cf1-48f1-9562-f6c7fe07cc86',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1166,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'California Volcanoes',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '88a59d7c-50fd-46d3-a3b4-e6095a14fc4a',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 222,
        ),
      ),
    ),
    'parent' => array(
      0 => '85f95184-e8dd-42ef-9237-43fe1ccd5c2b',
    ),
  );
  $terms[] = array(
    'name' => 'Steam',
    'description' => 53,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '892a3acd-86e5-49f0-ba8f-d0655548cb19',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 892,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bioremediation',
    'description' => 622,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '89e2b2e8-3ad7-4ad4-b5ac-c1790f2845a5',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 478,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Records',
    'description' => 394,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8a152527-f9b9-4e4b-a0ac-c03bea7efad1',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 871,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Ecosystem Services',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8a52dd1b-5f27-4a39-8cee-f3f649020f12',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(),
  );
  $terms[] = array(
    'name' => 'Viruses',
    'description' => 84,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8a594c55-160c-45b2-aac4-932ad6023fda',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 252,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Insects',
    'description' => 806,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8a5e0766-3115-4445-a1d1-31bb2efd8fff',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1019,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Tsunamis',
    'description' => 172,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8a9c7394-c17c-4088-9b9a-85b210fec762',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 131,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Planetary Science',
    'description' => 'Planetary Science description',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8bf21972-2efd-4aa6-9c5b-cc3353bfa38a',
    'vocabulary_machine_name' => 'topics',
  );
  $terms[] = array(
    'name' => 'Seismic Hazards -- Maps, Probabilities, and EQ Engineering',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 12,
    'uuid' => '8c798479-8fb7-4634-827d-3349bfc663cc',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 131,
        ),
      ),
    ),
    'parent' => array(
      0 => '70bba52f-a397-4f6c-b11c-bf9573575394',
    ),
  );
  $terms[] = array(
    'name' => 'CO2',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8d08c656-210a-4448-8561-3d5c4c67e2fe',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(),
  );
  $terms[] = array(
    'name' => 'Drilling',
    'description' => 1026,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8d213332-bb3e-4905-af68-657f8bd7215c',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 848,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'West Nile Virus',
    'description' => 119,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8d9562b1-79a6-4574-acd3-db09fbff9530',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 620,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bakken Formation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8dc7f0df-a845-48c3-9e0d-f982f7f53fb4',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 21,
        ),
      ),
    ),
    'parent' => array(
      0 => '0d0e2fb4-27f4-4ef9-a730-2a4be077b537',
    ),
  );
  $terms[] = array(
    'name' => 'Earthquakes, Plate Tectonics, Earth Structure',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8e1d28ed-156a-42af-85bc-40843115fa17',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 116,
        ),
      ),
    ),
    'parent' => array(
      0 => '70bba52f-a397-4f6c-b11c-bf9573575394',
    ),
  );
  $terms[] = array(
    'name' => 'Cicadas',
    'description' => 802,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8e5b2a3f-7be3-4c27-afb6-a9128b497c44',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 635,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Gas Hydrates',
    'description' => 1123,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8e8e767a-2fe7-4bb8-b393-e56995a13307',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 842,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Marsh',
    'description' => 687,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8f8338a3-f2f9-4d24-8cec-6f772ea1f195',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 624,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Mining',
    'description' => 2342,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '906c8f05-ab68-4ed1-a461-68602c73f138',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 916,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Natural Resources',
    'description' => 1026,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '90b7df6c-8b58-4de9-beb9-ce2de58e746a',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 48,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Quality',
    'description' => 67,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9173fede-a521-499c-83bf-ab7dc8f42b8e',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 889,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Hawaii Volcanoes General',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '91da6825-5d5e-42bc-953b-48df8fb44664',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 246,
        ),
      ),
    ),
    'parent' => array(
      0 => 'e4be3ce8-832d-46ea-a01b-30ed5540fd45',
    ),
  );
  $terms[] = array(
    'name' => 'Remote Sensing General',
    'description' => 'General Remote Sensing Questions',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '92e6fb12-d355-424f-9366-55057abe1da4',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 187,
        ),
      ),
    ),
    'parent' => array(
      0 => '39722e55-72cc-4845-92da-989d6e9a8ee3',
    ),
  );
  $terms[] = array(
    'name' => 'Wetlands',
    'description' => 133,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '94895ffb-b227-4d3b-9ab0-c166eb227df6',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 673,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Datasets',
    'description' => 328,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '956aa480-019b-4d1f-b138-8f77c662466b',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 588,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Rocks',
    'description' => 86,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '966cf781-e2aa-4cb0-9249-e55f1d15f856',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 967,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Formations',
    'description' => 283,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9725b266-715f-4d31-ad4d-a0ad6c4f6d0b',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 952,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Snakes',
    'description' => 351,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '97a14ad1-a5ff-426d-adb7-110330498573',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 834,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Meteorite',
    'description' => 997,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '97bbbbae-bb70-4c23-977f-d3f4573d20fb',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 872,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Aquifers',
    'description' => 82,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '980a35a5-258a-4d42-bfa4-26bc7454be21',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 906,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Jobs',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 68,
    'uuid' => '980bfcf3-2412-4e7c-a28d-f3d9b3a1e593',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 16,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Ice',
    'description' => 83,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '98589525-4224-458f-a2b2-5cf740010524',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 919,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Predator',
    'description' => 125,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '986de6e4-a9dd-4de8-9b0b-47423b1eba46',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 925,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Carp',
    'description' => 1141,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '98dd826b-c9be-4fe7-8403-045cafa35f67',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 950,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Species',
    'description' => 352,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '98ffda40-e379-4c99-ae99-6668552726fc',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 928,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Endangered Species',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '9aaf4f4f-62a0-428d-b268-c8ae171989f9',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 6,
        ),
      ),
    ),
    'parent' => array(
      0 => '440af437-7f12-4b12-b6e2-c3ca5009ffb6',
    ),
  );
  $terms[] = array(
    'name' => 'National Hydrography Dataset (NHD)',
    'description' => 710,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9c9db390-8c0d-460b-b6c2-e7d812cf80bd',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 645,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Imagery',
    'description' => 247,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9cb4e241-daf4-421b-baaf-119cd7f1b0fc',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 791,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Biological And Physical Processes',
    'description' => 572,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9dfc71e7-d40e-40d3-9bfb-bb300e7ed49e',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 324,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Tsunamis',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 137,
    'uuid' => '9ee31223-ffd0-47d8-9e86-043cafe6d2ec',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 28,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Hydraulic Fracturing ("Fracking")',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '9f7180a9-bf73-4cc4-a533-a091953da442',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 229,
        ),
      ),
    ),
    'parent' => array(
      0 => '0d0e2fb4-27f4-4ef9-a730-2a4be077b537',
    ),
  );
  $terms[] = array(
    'name' => 'Coasts',
    'description' => 687,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9fc85dd7-6bc2-4218-88a0-4aa74d5c86cd',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 818,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Topographic',
    'description' => 58,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9fcca7e8-6b10-46d3-bb63-44fc698d253c',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 667,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Stereoscope',
    'description' => 366,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9fcfb388-817e-4ecc-a627-4558a2cbc9f1',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1041,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Earthquake Search',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a077a8d4-3d6d-4efd-a0fe-a43bc6674add',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(),
  );
  $terms[] = array(
    'name' => 'Coordinates',
    'description' => 323,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a19bffc7-afe3-4c1e-9cd5-da2dfb8ffe87',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 633,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Analysis',
    'description' => 110,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a338ed48-d0ae-4906-a9cc-627b1131781a',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1047,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Maps',
    'description' => 58,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a339ad6d-4a04-4856-8d98-6873ad1e8bb2',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 617,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Prediction',
    'description' => 206,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a55a09c4-46c1-4ba4-893e-b690138f57f9',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 888,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Fish',
    'description' => 121,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a5a78a43-18fb-4649-9491-c945119fae4e',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 90,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'National Atlas',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'a65ca71a-cf8f-485a-8531-c0306f3d0ff8',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 37,
        ),
      ),
    ),
    'parent' => array(
      0 => '261754f9-95e1-4eb5-b578-dd0fc32a4d88',
    ),
  );
  $terms[] = array(
    'name' => 'Moths',
    'description' => 116,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a669a972-e89e-4e18-a6c1-a8b697c6ac46',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1057,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Wells',
    'description' => 63,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a772e364-50ce-4e0f-a1d2-9f2ea1482b31',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 787,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Topographic Maps',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => 'a79334eb-fdc8-46b9-b44f-0d97f317a44c',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 186,
        ),
      ),
    ),
    'parent' => array(
      0 => '261754f9-95e1-4eb5-b578-dd0fc32a4d88',
    ),
  );
  $terms[] = array(
    'name' => 'Water Resources',
    'description' => 273,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a88ef4c7-63ab-4166-a4eb-fe1efca86ccd',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 150,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Ecosystems',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 47,
    'uuid' => 'a8d0943c-afd5-4362-9105-a7a4350f1850',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 9,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Geology',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a9e18354-3aed-476b-9a0a-4ad5b806d651',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(),
  );
  $terms[] = array(
    'name' => 'Hawaii Volcanic Gases and Ash',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'aa09760e-d59e-4776-983a-1b6f23477c28',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 227,
        ),
      ),
    ),
    'parent' => array(
      0 => 'e4be3ce8-832d-46ea-a01b-30ed5540fd45',
    ),
  );
  $terms[] = array(
    'name' => 'Algae',
    'description' => 79,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'aa13b6ac-8a9f-4411-bb2c-4b0ea494cf68',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 366,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Experiment',
    'description' => 1083,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'aa8ce7b7-0848-45c1-86ee-e785467c9d87',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 844,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Oil and Gas Drilling',
    'description' => 2281,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'aae306be-7ddf-4ca1-8433-64e25860cd82',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1162,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Hardness',
    'description' => 76,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ab798709-59b8-4184-b793-cbd2243b10e8',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 994,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Climate and Land Use Change',
    'description' => 'Climate and Land Use Change description',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'acda5541-224c-4de3-bed2-cee6006480c7',
    'vocabulary_machine_name' => 'topics',
  );
  $terms[] = array(
    'name' => 'Earth',
    'description' => 137,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ad37c6a6-68c4-4f5f-9ac9-c86a08b346f2',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 993,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Library',
    'description' => 322,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ae4adc6c-61e8-434e-9480-db06a5213694',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 766,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Invasive Species',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'af6b153c-63b8-4e48-8a59-61ebeafbd18d',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 15,
        ),
      ),
    ),
    'parent' => array(
      0 => '440af437-7f12-4b12-b6e2-c3ca5009ffb6',
    ),
  );
  $terms[] = array(
    'name' => 'Using TNM Services',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'afddc06a-274d-46c2-835f-f9c613d912f7',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 212,
        ),
      ),
    ),
    'parent' => array(
      0 => '171ee24e-8a00-4d58-947d-524565cde4b4',
    ),
  );
  $terms[] = array(
    'name' => 'Tectonics',
    'description' => 41,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'afe2ceaa-f79f-40ae-a05f-c6031b072691',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 664,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Climate',
    'description' => 272,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b137c023-a7a4-4b43-8bfc-79b5983d330e',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 677,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Geysers',
    'description' => 658,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b13ead2e-10f2-4e85-ad0b-4f71f146a033',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 891,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Structures',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 12,
    'uuid' => 'b1549701-4055-4b13-9f7a-621a0f40d1a2',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 204,
        ),
      ),
    ),
    'parent' => array(
      0 => '1abc4fdd-b28c-4a69-8669-b7217f02e65f',
    ),
  );
  $terms[] = array(
    'name' => 'Snakeheads',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 8,
    'uuid' => 'b2bf01bd-86ef-4451-9880-a201c459266c',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 148,
        ),
      ),
    ),
    'parent' => array(
      0 => 'af6b153c-63b8-4e48-8a59-61ebeafbd18d',
    ),
  );
  $terms[] = array(
    'name' => 'Land Cover',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => 'b2d8f913-a8cf-4184-ae7d-797073aa6434',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 206,
        ),
      ),
    ),
    'parent' => array(
      0 => '1abc4fdd-b28c-4a69-8669-b7217f02e65f',
    ),
  );
  $terms[] = array(
    'name' => 'Wind Energy',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => 'b35628d8-1d5d-408a-a711-308669924cc4',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 224,
        ),
      ),
    ),
    'parent' => array(
      0 => '0d0e2fb4-27f4-4ef9-a730-2a4be077b537',
    ),
  );
  $terms[] = array(
    'name' => 'Avian Influenza',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b37a1172-52fe-444c-9cc2-7ecb21f1de8a',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 177,
        ),
      ),
    ),
    'parent' => array(
      0 => 'e5adeb2a-8151-4641-97c0-7eeff1fa9cda',
    ),
  );
  $terms[] = array(
    'name' => 'Publications',
    'description' => 251,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b3d7b75e-d70e-4ce8-bd7a-51bbe44ac182',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 655,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Snakeheads',
    'description' => 825,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b460e7b2-ef2a-4a94-951d-1d75afea5b09',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 631,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Download',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'b536eb8d-9ae5-4b78-a4d8-5f92ab2c2766',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 210,
        ),
      ),
    ),
    'parent' => array(
      0 => '171ee24e-8a00-4d58-947d-524565cde4b4',
    ),
  );
  $terms[] = array(
    'name' => 'Ecosystems',
    'description' => 53,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b5fc4c48-5e55-4690-90f6-5085a96193ef',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 408,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Metals',
    'description' => 88,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b7a178bc-1949-47ec-96db-fdb6e36e6119',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 808,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Frogs',
    'description' => 121,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b8a91e3c-6103-4a54-b132-6d54b0161ad3',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 914,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Weathering',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b97cbf99-ad7a-43f9-ad65-e22763d6af13',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(),
  );
  $terms[] = array(
    'name' => 'Real Time',
    'description' => 1005,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ba7b1fb5-cee9-4877-99a8-0b9cbf1c2015',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1015,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Anatomy',
    'description' => 349,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ba9b0ab1-8cb7-4cb8-b1b9-3fcb47117b58',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 913,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Decay',
    'description' => 1189,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'babe4a63-340b-4138-9c3a-8b64ee40164a',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1124,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Global Change',
    'description' => 285,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'bcf81e98-1cc6-4399-bc96-54e941ebf782',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 538,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'West Nile Virus',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'be81defa-273a-4434-aed3-6e56fa12312d',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 178,
        ),
      ),
    ),
    'parent' => array(
      0 => 'e5adeb2a-8151-4641-97c0-7eeff1fa9cda',
    ),
  );
  $terms[] = array(
    'name' => 'Natural Hazards',
    'description' => 'Natural Hazards description',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'bef0a3fe-febb-4d3e-91e4-a35c9c043bdc',
    'vocabulary_machine_name' => 'topics',
  );
  $terms[] = array(
    'name' => 'Grid',
    'description' => 388,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'bf36bcbd-1abb-4fb4-801f-de6120232e9f',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 796,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Brown Treesnakes',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'bfdbdf14-3c15-49a9-b37e-65c5f6353499',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 155,
        ),
      ),
    ),
    'parent' => array(
      0 => 'af6b153c-63b8-4e48-8a59-61ebeafbd18d',
    ),
  );
  $terms[] = array(
    'name' => 'Biodiversity',
    'description' => 110,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c0578481-a93a-49b6-b176-976c82877418',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 463,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Charts',
    'description' => 246,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c0794059-80a2-438f-9a25-2cc458293223',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 988,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Evaporation',
    'description' => 1188,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c0de9f77-a77e-4b57-a12e-38286a1db55d',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1134,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Energy',
    'description' => 53,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c215943c-8586-4a72-a09f-0ea3ceb109e3',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 634,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Geographic Names',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'c2933383-96fe-4a90-8ce7-31cadb479dc7',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 202,
        ),
      ),
    ),
    'parent' => array(
      0 => '1abc4fdd-b28c-4a69-8669-b7217f02e65f',
    ),
  );
  $terms[] = array(
    'name' => 'Marine Geology',
    'description' => 989,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c37c3dd0-9fb4-4d89-93b6-b4881e8117b4',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 137,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Birds',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'c44481cc-56c0-4c91-a065-cfbc4085a3de',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 175,
        ),
      ),
    ),
    'parent' => array(
      0 => '824bfc4f-a89c-4045-a21f-3e6bccb328ec',
    ),
  );
  $terms[] = array(
    'name' => 'GeoTIFF',
    'description' => 2134,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c4910eb4-9127-4140-8fa7-d3ae674381eb',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1165,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Marcellus Shale',
    'description' => 2213,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c4e5423c-6354-4386-9245-8e29564602b1',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1159,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Rivers',
    'description' => 56,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c4e6da4d-ae40-42d5-8fc9-511301c9b48e',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 699,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Biology',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c4ef574e-cc03-4881-b366-942839c815d2',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(),
  );
  $terms[] = array(
    'name' => 'Recreation',
    'description' => 539,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c649c993-16e3-4957-ae29-7172b25b00a9',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 674,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Maps, Remote Sensing, and Geospatial Data',
    'description' => 'Maps, Remote Sensing, and Geospatial Data description',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c7034a65-ace2-4f9d-8f13-bf557b95cf01',
    'vocabulary_machine_name' => 'topics',
  );
  $terms[] = array(
    'name' => 'Endangered Species',
    'description' => 117,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c72e6708-3f86-433a-bc4b-c81d05325f01',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 465,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Topographic Maps General',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'c75e9ace-a49c-4278-bdcd-06de15e6a304',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-06-24T21:00:15',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(),
    'parent' => array(
      0 => 'a79334eb-fdc8-46b9-b44f-0d97f317a44c',
    ),
  );
  $terms[] = array(
    'name' => 'Viewer',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'c8357956-db10-4e95-ae73-a687e5d859cd',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 189,
        ),
      ),
    ),
    'parent' => array(
      0 => '171ee24e-8a00-4d58-947d-524565cde4b4',
    ),
  );
  $terms[] = array(
    'name' => 'Minerals',
    'description' => 'Minerals description',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c8bdb697-9bb9-4f01-9aa4-dc516a8f7cac',
    'vocabulary_machine_name' => 'topics',
  );
  $terms[] = array(
    'name' => 'Severe Storms',
    'description' => '<p>This category is for hurricane and storm related FAQs.</p>',
    'format' => 'filtered_html',
    'weight' => 136,
    'uuid' => 'c8d4736f-bfdd-407b-a046-c214438ce79a',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2014-08-21T23:15:30',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(),
  );
  $terms[] = array(
    'name' => 'Vegetation',
    'description' => 384,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c99b878f-73ec-47f8-89ae-2d564e974795',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 251,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Marine Biology',
    'description' => 706,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'cb53c606-f16f-4719-98d3-2fb0f9b73fc3',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 859,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Other Cascades Volcanoes',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'cba4c54a-379a-4434-9edd-2b57def0074b',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 245,
        ),
      ),
    ),
    'parent' => array(
      0 => '0de6b95c-bf5e-4561-98dc-a4c9e0511f2e',
    ),
  );
  $terms[] = array(
    'name' => 'Weather',
    'description' => 1166,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'cc5db31c-39ae-424f-896d-b355e18d226e',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1007,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Data Products and Browse Images',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => 'cd26867a-4b5a-49c3-8963-5d62bff911a6',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 233,
        ),
      ),
    ),
    'parent' => array(
      0 => '82440574-27b6-4605-8fc3-0c3720b62cf4',
    ),
  );
  $terms[] = array(
    'name' => 'Faults',
    'description' => 142,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'cd7c7a29-bd35-4e81-bba7-5c6e0971e97d',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 663,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Wildfires',
    'description' => 1943,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'cdc7c76e-e452-4877-a370-ca8999545d02',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1110,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Polonium',
    'description' => 1189,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ce8a54d2-db7c-4eb0-b486-080cff2e6f46',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1126,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Temperature',
    'description' => 286,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'cf14f438-3feb-4965-b0f1-041e6a8b3c93',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 780,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Formats',
    'description' => 368,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd0494b26-46c7-43a7-9b44-77e127979388',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1028,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Fossils',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 57,
    'uuid' => 'd08e1c5c-f2cc-4e27-bb4c-3b8a964b1956',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 242,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Invasive Species',
    'description' => 749,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd1bb47c9-04d2-45b9-8799-92368b2d3dcd',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 161,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'NBII (National Biological Information Infrastructure)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => 'd2873639-979d-4e15-bc02-5c8cc6edd5c9',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 225,
        ),
      ),
    ),
    'parent' => array(
      0 => '440af437-7f12-4b12-b6e2-c3ca5009ffb6',
    ),
  );
  $terms[] = array(
    'name' => 'Pythons',
    'description' => 1274,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd2ebb47a-c6e4-4335-945b-e3f5764ed23f',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1142,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Core',
    'description' => 473,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd43d6537-a68e-4efc-bdb2-70dd09ac0da7',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1054,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Updates',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'd613841a-b02e-43ce-aafa-e0fffe09ee21',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 191,
        ),
      ),
    ),
    'parent' => array(
      0 => 'c8357956-db10-4e95-ae73-a687e5d859cd',
    ),
  );
  $terms[] = array(
    'name' => 'Historical Topographic Maps',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'd661707c-29e5-4ba6-8570-97e3742ee273',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 167,
        ),
      ),
    ),
    'parent' => array(
      0 => 'a79334eb-fdc8-46b9-b44f-0d97f317a44c',
    ),
  );
  $terms[] = array(
    'name' => 'Scanned Topo Maps (Digital Raster Graphics)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 10,
    'uuid' => 'd7196187-1ca3-421e-bfe8-d8025d9600d5',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 207,
        ),
      ),
    ),
    'parent' => array(
      0 => '1abc4fdd-b28c-4a69-8669-b7217f02e65f',
    ),
  );
  $terms[] = array(
    'name' => 'Universal Transverse Mercator (UTM)',
    'description' => 844,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd721239a-3b73-412f-8769-e4120bb14ef2',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1104,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'California',
    'description' => 206,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd76de2f4-a96d-401a-a6e1-1cdae79cc91a',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 908,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Chronic Wasting Disease (CWD)',
    'description' => 533,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd7777511-10e9-47fc-b625-8d6739e2e22d',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 646,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Stage',
    'description' => 61,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd8263cc3-5eb7-49e0-b833-7aa89a725e22',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 878,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Earthquakes',
    'description' => 41,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd879a13b-601b-4377-be92-e8bbec0294a5',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 628,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Earthquake Effects & Experiences',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 9,
    'uuid' => 'd906140b-b0e0-49b1-853a-5ff83b215a51',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 119,
        ),
      ),
    ),
    'parent' => array(
      0 => '70bba52f-a397-4f6c-b11c-bf9573575394',
    ),
  );
  $terms[] = array(
    'name' => 'Water Use',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => 'd93af097-9f14-476d-a7b5-b80041eed16a',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 103,
        ),
      ),
    ),
    'parent' => array(
      0 => '66bc8b9b-a78f-40db-b46f-374f601a4d4c',
    ),
  );
  $terms[] = array(
    'name' => 'Chinese Tallow',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => 'da17e899-cd55-4f73-b822-69e51474f3e9',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 151,
        ),
      ),
    ),
    'parent' => array(
      0 => 'af6b153c-63b8-4e48-8a59-61ebeafbd18d',
    ),
  );
  $terms[] = array(
    'name' => 'Employment',
    'description' => 617,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'da1b5081-7498-49e4-9a4b-4df9fb383724',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 837,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Features',
    'description' => 772,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'daaa9429-6ad1-48ea-91d3-0b81ca880730',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 931,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Geomagnetism',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'db8ffe0e-c76e-41d2-a918-b11cadc200b1',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 11,
        ),
      ),
    ),
    'parent' => array(
      0 => '4ddc4013-8f88-4cd6-a8ad-e6534504a704',
    ),
  );
  $terms[] = array(
    'name' => 'Buffelgrass',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'dc0bad74-c756-4e41-82b3-983904d623f3',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 154,
        ),
      ),
    ),
    'parent' => array(
      0 => 'af6b153c-63b8-4e48-8a59-61ebeafbd18d',
    ),
  );
  $terms[] = array(
    'name' => 'GeoPDF',
    'description' => 539,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'dce7bb55-1991-47d1-94f3-4a82b2a41304',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 939,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Land Use And Land Cover',
    'description' => 247,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'dcfdef3d-8584-4540-a147-917e6bb6310e',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 316,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Orthoimagery',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 8,
    'uuid' => 'de55cdc5-b4a4-4a10-b131-d2de0a8cef98',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 196,
        ),
      ),
    ),
    'parent' => array(
      0 => '1abc4fdd-b28c-4a69-8669-b7217f02e65f',
    ),
  );
  $terms[] = array(
    'name' => 'Forest Service Maps',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'df0244bb-2c5d-405c-aba9-756b6b085e01',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 188,
        ),
      ),
    ),
    'parent' => array(
      0 => '261754f9-95e1-4eb5-b578-dd0fc32a4d88',
    ),
  );
  $terms[] = array(
    'name' => 'Biology General',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'df076ec2-bad8-4607-af13-e06fc25a075c',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 163,
        ),
      ),
    ),
    'parent' => array(
      0 => '440af437-7f12-4b12-b6e2-c3ca5009ffb6',
    ),
  );
  $terms[] = array(
    'name' => 'Volcanoes',
    'description' => 41,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'df2e91ff-ca8b-4e53-bc61-2afd826009b7',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 821,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Radon',
    'description' => 252,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'dfc3b1fb-95cc-440d-b75f-1611cb65d02e',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 669,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Droughts',
    'description' => 64,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'dffaa7ed-2db8-42c5-8cff-4cfb4ba2e7f2',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 429,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Earthquake Preparedness',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => 'e078e223-f246-401d-93a3-15b9845306fc',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 126,
        ),
      ),
    ),
    'parent' => array(
      0 => '70bba52f-a397-4f6c-b11c-bf9573575394',
    ),
  );
  $terms[] = array(
    'name' => 'Landslides',
    'description' => 172,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e2ca9c3f-d921-4a88-8da6-79eaa9bf3047',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 126,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Monitoring and Studying Volcanoes',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => 'e2eb0790-e49c-4073-aa61-6508a5c4c6d7',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 215,
        ),
      ),
    ),
    'parent' => array(
      0 => '85f95184-e8dd-42ef-9237-43fe1ccd5c2b',
    ),
  );
  $terms[] = array(
    'name' => 'Biological Resources',
    'description' => 663,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e381b76f-963f-4b46-bcd5-087a1d949369',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 657,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Polarity',
    'description' => 473,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e3a0248f-1ea6-461f-b052-cadd854199e2',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1073,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Lidar',
    'description' => 681,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e4982054-82eb-40e4-84a6-76c00ace304a',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 809,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Hawaii Volcanoes',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'e4be3ce8-832d-46ea-a01b-30ed5540fd45',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 219,
        ),
      ),
    ),
    'parent' => array(
      0 => '85f95184-e8dd-42ef-9237-43fe1ccd5c2b',
    ),
  );
  $terms[] = array(
    'name' => 'Alaska Volcanoes',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'e536cbe2-ced7-4a80-8ccc-d84bb7cba3a9',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 218,
        ),
      ),
    ),
    'parent' => array(
      0 => '85f95184-e8dd-42ef-9237-43fe1ccd5c2b',
    ),
  );
  $terms[] = array(
    'name' => 'Radon',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'e53beba8-97ad-41b0-b150-04c5ad440c55',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 230,
        ),
      ),
    ),
    'parent' => array(
      0 => 'e5adeb2a-8151-4641-97c0-7eeff1fa9cda',
    ),
  );
  $terms[] = array(
    'name' => 'Contamination',
    'description' => 56,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e55572c3-d679-4a0f-b86e-82b54c485516',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 621,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Rivers and Streams',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'e55a0a4b-7972-4f17-bd1a-20ebae8b55d8',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 99,
        ),
      ),
    ),
    'parent' => array(
      0 => '66bc8b9b-a78f-40db-b46f-374f601a4d4c',
    ),
  );
  $terms[] = array(
    'name' => 'Health and Disease',
    'description' => 'Items related to health and disease within the environment',
    'format' => 'plain_text',
    'weight' => 64,
    'uuid' => 'e5adeb2a-8151-4641-97c0-7eeff1fa9cda',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 97,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Asian Carp',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'e65df81a-cc4f-474c-ab44-1addb96c2b9b',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 150,
        ),
      ),
    ),
    'parent' => array(
      0 => 'af6b153c-63b8-4e48-8a59-61ebeafbd18d',
    ),
  );
  $terms[] = array(
    'name' => 'LIDAR',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'e66f2d08-ae07-488d-9823-e66c36a05c2f',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 185,
        ),
      ),
    ),
    'parent' => array(
      0 => '39722e55-72cc-4845-92da-989d6e9a8ee3',
    ),
  );
  $terms[] = array(
    'name' => 'Magnitude',
    'description' => 1653,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e711d638-9919-4b32-a8cc-e522ba4b8df6',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 881,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Water',
    'description' => 53,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e82cd32d-dfa3-4b83-a9c0-d906d64997c2',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 704,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Geomorphology',
    'description' => 511,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e955aebc-2cc0-4773-be14-5a6fcf703313',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 138,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Standards',
    'description' => 391,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e9e251bf-90ba-405e-916b-034060ad2f5f',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1020,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Asian Swamp Eels',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'ea9ff493-f054-4db4-8ba3-d86b0cb591e0',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 147,
        ),
      ),
    ),
    'parent' => array(
      0 => 'af6b153c-63b8-4e48-8a59-61ebeafbd18d',
    ),
  );
  $terms[] = array(
    'name' => 'Declination',
    'description' => 473,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'eb27c60a-d6cc-4799-8fe9-b72f61e67ecd',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1072,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Publications and Photographs',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 133,
    'uuid' => 'eb561dcf-949e-4854-a19c-1ca1df4de406',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 101,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Tamarisks',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 9,
    'uuid' => 'eba9b1d1-97b2-4e2a-9bee-b821423da5a4',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 153,
        ),
      ),
    ),
    'parent' => array(
      0 => 'af6b153c-63b8-4e48-8a59-61ebeafbd18d',
    ),
  );
  $terms[] = array(
    'name' => 'Glaciers',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 63,
    'uuid' => 'ec24fe7e-dbb9-4e49-b43c-5c674a44b4be',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 13,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Butterflies',
    'description' => 116,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'eca6efe9-0c71-4b41-a0cc-f6f85a3a357e',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1056,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Coal',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'ede77525-e92f-4ad9-81de-0278d40d4845',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 240,
        ),
      ),
    ),
    'parent' => array(
      0 => '0d0e2fb4-27f4-4ef9-a730-2a4be077b537',
    ),
  );
  $terms[] = array(
    'name' => 'Minerals',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'ee084fd9-bda7-4fc2-bb93-cfddf6b4cbbf',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 18,
        ),
      ),
    ),
    'parent' => array(
      0 => '4ddc4013-8f88-4cd6-a8ad-e6534504a704',
    ),
  );
  $terms[] = array(
    'name' => 'Carbon Sequestration',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => 'ee3c8742-e162-4eed-bed5-890faae53614',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-06-26T03:00:30',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(),
    'parent' => array(
      0 => '0d0e2fb4-27f4-4ef9-a730-2a4be077b537',
    ),
  );
  $terms[] = array(
    'name' => 'Geology',
    'description' => 'Geology description',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'efc9e247-c0ab-4e18-bcd0-089070c0f395',
    'vocabulary_machine_name' => 'topics',
  );
  $terms[] = array(
    'name' => 'Geology General',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f03af893-1833-4b03-b1f4-34e25bbf1eb1',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 238,
        ),
      ),
    ),
    'parent' => array(
      0 => '4ddc4013-8f88-4cd6-a8ad-e6534504a704',
    ),
  );
  $terms[] = array(
    'name' => 'Earthquakes Induced by Fluid Injection',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 11,
    'uuid' => 'f0f09beb-b69e-40d3-be8e-e8abb52dc090',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 125,
        ),
      ),
    ),
    'parent' => array(
      0 => '70bba52f-a397-4f6c-b11c-bf9573575394',
    ),
  );
  $terms[] = array(
    'name' => 'Soils',
    'description' => 304,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f0f13ef6-8405-462a-86ad-c972926a7267',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1109,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Birds  Avian Flu  Disease  Health',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f6254167-2205-48ae-8bae-b409b3612271',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(),
  );
  $terms[] = array(
    'name' => 'Governmental Unit Boundaries',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'f7e2a178-f107-4793-9122-4f593ee61850',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 205,
        ),
      ),
    ),
    'parent' => array(
      0 => '1abc4fdd-b28c-4a69-8669-b7217f02e65f',
    ),
  );
  $terms[] = array(
    'name' => 'Chemistry',
    'description' => 56,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f936b1c8-e8f1-4476-96e4-14effcb61083',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 905,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Properties',
    'description' => 540,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f990b391-18f3-43af-b733-728bf02c86c2',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 904,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Geographic Names Information System (GNIS)',
    'description' => 770,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'fa6d39ea-8b33-4d0b-918e-f76e025cf83f',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 1139,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Geothermal Resources',
    'description' => 41,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'fa6eb751-ec60-413f-bc35-bf84e1e65e13',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 59,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Microbiology',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'fbd166d6-5a2f-4330-8d29-31bc3b23ef29',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 162,
        ),
      ),
    ),
    'parent' => array(
      0 => '440af437-7f12-4b12-b6e2-c3ca5009ffb6',
    ),
  );
  $terms[] = array(
    'name' => 'Aerial Photography',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'fc62c325-ba15-4af9-8a3d-e569092b0640',
    'vocabulary_machine_name' => 'faq_categories',
    'field_creation_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-19T17:45:00',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_legacy_id' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'parent' => array(
      0 => '39722e55-72cc-4845-92da-989d6e9a8ee3',
    ),
  );
  $terms[] = array(
    'name' => 'Alternative Energy',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fcfec29f-8b16-4333-a088-f2c78c0b69e8',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(),
  );
  $terms[] = array(
    'name' => 'Shakeout',
    'description' => 139,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'fee51c84-f6ca-421f-8b2c-72a864790b8f',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 894,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Oceans',
    'description' => 246,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'feedd944-76a0-401c-a2b9-9a3ec7901fbc',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 666,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Seismic',
    'description' => 47,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ff8ac92f-f2ae-4496-96cf-23bad1d39fbd',
    'vocabulary_machine_name' => 'faq_tags',
    'field_legacy_tag_id' => array(
      'und' => array(
        0 => array(
          'value' => 828,
        ),
      ),
    ),
  );
  return $terms;
}
