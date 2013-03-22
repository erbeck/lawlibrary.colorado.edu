<?php

/**
 * Override theme_menu_link().
 *
 * Need absolute links instead of relative.
 */
function law_right_menu_link($variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href'], array_merge($element['#localized_options'], array('absolute' => TRUE)));
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Override theme_link().
 *
 * Need absolute links.
 */
function law_right_link($variables) {
  $variables['options']['absolute'] = TRUE;
  return '<a href="' . check_plain(url($variables['path'], $variables['options'])) . '"' . drupal_attributes($variables['options']['attributes']) . '>' . ($variables['options']['html'] ? $variables['text'] : check_plain($variables['text'])) . '</a>';
}
