<?php
/**
 * @file
 * othersettings_alpha.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function othersettings_alpha_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'backgroundwinter';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'image' => 'image',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'backstretch' => array(
      'source' => array(
        'type' => 'path',
        'entity' => array(
          'entity_type' => '',
          'field' => 'field_image',
          'ids' => '',
        ),
        'path' => 'http://localhost/lawlibrary.colorado.edu/sites/all/themes/law/images/backgroundwinter.jpg',
      ),
      'image_style' => '',
      'element' => '',
      'element_other' => '',
      'duration' => '5000',
      'fade' => '0',
      'center_x' => 1,
      'center_y' => 1,
    ),
  );
  $context->condition_mode = 0;
  $export['backgroundwinter'] = $context;

  return $export;
}
