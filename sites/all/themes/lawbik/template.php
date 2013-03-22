<?php

/** 
 * Implement hook_theme().
 */
function lawbik_theme() {
  $items = array();

  // Copy of rubik_theme()'s 'node_form' with the addition of our preprocess function.
  $items['node_form'] = array(
    'render element' => 'form',
    'path' => drupal_get_path('theme', 'rubik') .'/templates',
    'template' => 'form-default',
    'preprocess functions' => array(
      'rubik_preprocess_form_buttons',
      'rubik_preprocess_form_node',
      'lawbik_preprocess_form_node',
    ),
  );

  return $items;
}

/**
 * Preprocessor for theme('node_form').
 */
function lawbik_preprocess_form_node(&$vars) {
  // Put our page right sidebar fields into the node edit/add form's right sidebar.
  if ($vars['form']['#node']->type == 'page') {
    if (isset($vars['form']['field_right_sidebar'])) {
      $right = array(
        'exclude_node_title', 
        'field_right_sidebar',
        'field_override_right_sidebar',
        'field_call_action',
        'field_inner_content',
        'field_header',
        'field_footer',
      );
      foreach ($right as $r) {
        $vars['sidebar'][$r] = $vars['form'][$r];
        unset($vars['form'][$r]);
      }
    }
  }
}
