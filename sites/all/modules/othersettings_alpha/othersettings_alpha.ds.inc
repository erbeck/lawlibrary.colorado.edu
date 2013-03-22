<?php
/**
 * @file
 * othersettings_alpha.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function othersettings_alpha_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|panel|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'panel';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_3col_stacked_equal_width';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title',
        1 => 'redirect',
        2 => 'path',
      ),
      'hidden' => array(
        3 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'redirect' => 'header',
      'path' => 'header',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|panel|form'] = $ds_layout;

  return $export;
}
