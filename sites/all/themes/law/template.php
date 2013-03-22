<?php

/**
 * Implements hook_css_alter().
 */
function law_css_alter(&$css) {
  // Remove debug stylesheet.
  unset($css[drupal_get_path('theme', 'cu_bootstrap') . '/styles/common.css']);
  
}

/**
 * Implements hook_preprocess_html().
 */
function law_preprocess_html(&$vars) {
  unset($vars['classes_array'][array_search('show-grid', $vars['classes_array'])]);
  $logo = theme_get_setting('logo');
  $logo_css = "#branding h1 a, #branding #logo a { background-image:url(" . check_url($logo) . "); }";
  $options = array(
    'type' => 'inline',
    'group' => CSS_THEME,
	);
  drupal_add_css($logo_css , $options);
  $vars['head_title'] = $vars['head_title'] . ' | CU-Boulder'; 
  $vars['classes_array'][]='banner-black';
  $font_set = theme_get_setting('fonts');
  $font_path = drupal_get_path('theme','cu_bootstrap');
  if($font_set) {
    drupal_add_css($font_path .'/fonts/' . $font_set . '.css', array('group' => CSS_THEME, 'every_page' => TRUE));
  }
}

