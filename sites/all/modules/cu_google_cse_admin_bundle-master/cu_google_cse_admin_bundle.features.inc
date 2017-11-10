<?php
/**
 * @file
 * cu_google_cse_admin_bundle.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cu_google_cse_admin_bundle_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cu_google_cse_admin_bundle_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function cu_google_cse_admin_bundle_node_info() {
  $items = array(
    'cu_google_cse' => array(
      'name' => t('Google CSE'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Use path for title'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
