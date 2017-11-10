<?php
/**
 * @file
 * cu_google_cse_admin_bundle.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function cu_google_cse_admin_bundle_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_cu_google_cse_creator'.
  $field_bases['field_cu_google_cse_creator'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_cu_google_cse_creator',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_cu_google_cse_id'.
  $field_bases['field_cu_google_cse_id'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_cu_google_cse_id',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 11,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_cu_google_cse_path'.
  $field_bases['field_cu_google_cse_path'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_cu_google_cse_path',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
