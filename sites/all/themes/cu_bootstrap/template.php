<?php

/**
 * Implements hook_css_alter().
 */
function cu_bootstrap_css_alter(&$css) {
  // Remove debug stylesheet.
  unset($css[drupal_get_path('theme', 'ninesixty') . '/styles/framework/debug.css']);
  unset($css['misc/ui/jquery.ui.theme.css']);  
  
}
 
/**
 * Implements hook_process_html().
 */
function cu_bootstrap_process_html(&$vars) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_html_alter($vars);
  }
}

/**
 * Implements hook_preprocess_html().
 */
function cu_bootstrap_preprocess_html(&$vars) {
  unset($vars['classes_array'][array_search('show-grid', $vars['classes_array'])]);
  $font_set = theme_get_setting('fonts');
  if ($font_set) {
    drupal_add_css(path_to_theme() .'/fonts/' . $font_set . '.css', array('group' => CSS_THEME, 'every_page' => TRUE));
  }
}

/**
 * Implements hook_process_page().
 */
function cu_bootstrap_process_page(&$vars) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_page_alter($vars);
  }
  // Breadcrumbs
  if (!theme_get_setting('use_breadcrumbs')) {
  	$vars['breadcrumb'] = '';  
  }
  $menu = theme('links__system_main_menu', 
    array('links' => $vars['main_menu'], 
    'attributes' => array(
      'id' => 'main-menu', 
      'class' => array(
        'main-menu', 
        'inline',
      )
    ), 
    'heading' => array(
      'text' => t('Main menu'),
      'level' => 'h2',
      'class' => array('element-invisible'),
    ),
  ));
  $vars['page']['main_menu']['menu']['content']['#markup'] = $menu;  
}

/**
 * Implements hook_preprocess_node().
 */
function cu_bootstrap_preprocess_node(&$vars) {

  if ($plugin = context_get_plugin('reaction', 'block')) {
    if ($context_content_sidebar_left_blocks = $plugin->block_get_blocks_by_region('content_sidebar_left')) {
      $vars['content_sidebar_left'] = $context_content_sidebar_left_blocks;
      $vars['content_sidebar_left']['#theme_wrappers'] = array('region');
      $vars['content_sidebar_left']['#region'] = 'content_sidebar_left';
    }
    if ($context_content_sidebar_right_blocks = $plugin->block_get_blocks_by_region('content_sidebar_right')) {
      $vars['content_sidebar_right'] = $context_content_sidebar_right_blocks;
      $vars['content_sidebar_right']['#theme_wrappers'] = array('region');
      $vars['content_sidebar_right']['#region'] = 'content_sidebar_right';
    }
  }

  if ($content_sidebar_left_blocks = block_get_blocks_by_region('content_sidebar_left')) {
    $vars['content_sidebar_left'] = $content_sidebar_left_blocks;
    $vars['content_sidebar_left']['#theme_wrappers'] = array('region');
    $vars['content_sidebar_left']['#region'] = 'content_sidebar_left';
  }
 
  if ($content_sidebar_right_blocks = block_get_blocks_by_region('content_sidebar_right')) {
    $vars['content_sidebar_right'] = $content_sidebar_right_blocks;
    $vars['content_sidebar_right']['#theme_wrappers'] = array('region');
    $vars['content_sidebar_right']['#region'] = 'content_sidebar_right';
  }

  if (!empty($vars['content_sidebar_left']) && !empty($vars['content_sidebar_right'])) {
    $vars['content_sidebar_left']['#region'] = 'content_sidebars';
    $vars['content_sidebar_right']['#region'] = 'content_sidebars';
  }

  switch ($vars['type']) {
    case 'slider':
      unset($vars['content_sidebar_left']);
      unset($vars['content_sidebar_right']);
      break;

    case 'file':
      unset($vars['content_sidebar_left']);
      unset($vars['content_sidebar_right']);
      break;

    case 'video':
      unset($vars['content_sidebar_left']);
      unset($vars['content_sidebar_right']);
      break;
 
    case 'person':
      unset($vars['content_sidebar_left']);
      unset($vars['content_sidebar_right']);
      break;
  }
}

/**
 * Implements hook_preprocess_block().
 */
function cu_bootstrap_preprocess_block(&$vars) {
  if (theme_get_setting('after_content_columns')) {
    $after_content_columns = theme_get_setting('after_content_columns');
  }
  else {
    $after_content_columns = 1;
  }
  
  if (theme_get_setting('lower_columns')) {
    $lower_columns = theme_get_setting('lower_columns');
  }
  else {
    $footer_columns = 1;
  }
  
  if (theme_get_setting('footer_columns')) {
    $footer_columns = theme_get_setting('footer_columns');
  }
  else {
    $footer_columns = 1;
  }
  
  $block_counter = &drupal_static(__FUNCTION__, array());
  $vars['block'] = $vars['elements']['#block'];
  // All blocks get an independent counter for each region.
  if (!isset($block_counter[$vars['block']->region])) {
    $block_counter[$vars['block']->region] = -1;
  }
  // Same with zebra striping.
  $vars['block_id'] = $block_counter[$vars['block']->region]++;
  
  $vars['classes_array'][] = $vars['block']->region . '-block-' . $block_counter[$vars['block']->region];

  if (empty($vars['grid_size_blocks'])) { 
    switch ($vars['block']->region) {
      case 'after_content':
        $vars['classes_array'][] = 'grid-' . 12/$after_content_columns;
        $vars['classes_array'][] = ($block_counter[$vars['block']->region] % ($after_content_columns)) ? '' : 'new-block-row';
        $vars['mycounter'] = $block_counter[$vars['block']->region];
        break;
      case 'footer':
        $vars['classes_array'][] = 'grid-' . 12/$footer_columns;
        $vars['classes_array'][] = ($block_counter[$vars['block']->region] % ($footer_columns)) ? '' : 'new-block-row';
        break;
      case 'lower':
        $vars['classes_array'][] = 'grid-' . 12/$lower_columns;
        $vars['classes_array'][] = ($block_counter[$vars['block']->region] % ($lower_columns)) ? '' : 'new-block-row';
        break;
      case 'slider':
        $vars['classes_array'][] = 'grid-12';
        break;
    }
  }
}

/**
 * Implements hook_preprocess_field().
 */
function cu_bootstrap_preprocess_field(&$variables) {
  // Add a unique ID to each item within a field_collection. 
  if ($variables['element']['#field_type'] == 'field_collection') {
    foreach (element_children($variables['items']) as $key => $item) {
      //$item_id = array_keys($variables['items'][$key]['entity']['field_collection_item']);
      $delta = $key + 1; 
      // @todo: This was changed from using item_id to using delta in order to solve a numeric id
      // issue. This technically will create invalid html if we have more than one field_collection
      // on a single page, however, I dont believe that is possible today, so this will work for now.
      $variables['items'][$key]['#attributes']['id'] = 'item-' . $delta;
    }
  }
}

/**
 * Implements theme_image_style().
 */
function cu_bootstrap_image_style(&$vars) {
  // Determine the dimensions of the styled image.
  $dimensions = array(
    'width' => $vars['width'], 
    'height' => $vars['height'],
  );

  image_style_transform_dimensions($vars['style_name'], $dimensions);

  $vars['width'] = $dimensions['width'];
  $vars['height'] = $dimensions['height'];

  // Determine the url for the styled image.
  $vars['path'] = image_style_url($vars['style_name'], $vars['path']);
  $vars['attributes']['class'] = array('image-' . $vars['style_name']);
  return theme('image', $vars);
}

/**
 * Implements theme_breadcrumb().
 */
function cu_bootstrap_breadcrumb(&$vars) {
  $breadcrumb = $vars['breadcrumb'];

  if (!empty($breadcrumb) && (count($breadcrumb) > 1)) {
    // Adding the title of the current page to the breadcrumb.
    $breadcrumb[] = drupal_get_title();
	
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

    $output .= '<div class="breadcrumb">' . implode(' › ', $breadcrumb) . '</div>';
    return $output;
  }
}

/**
 * Implements hook_preprocess_page().
 */
function cu_bootstrap_preprocess_page(&$vars) {
  foreach ($vars['main_menu'] as $key => $value) {
    if($vars['main_menu'][$key]['href'] == '<front>') {
      $vars['main_menu'][$key]['attributes']['id'] = 'home-link';
    }
  }
  drupal_add_css(drupal_get_path('theme','cu_bootstrap') . '/jquery-ui/css/jquery.theme.css', array('group' => CSS_THEME, 'every_page' => TRUE));
}

/**
 * Overrides theme_menu_local_tasks().
 *
 * Added first/last classes and moved active class from
 * theme_menu_local_task to this function.
 */
function cu_bootstrap_menu_local_tasks(&$variables) {
  $output = '';
  
  $variables['primary'][0]['#attributes']['class'][] = 'first';
  if (!empty($variables['primary'])) {
    foreach($variables['primary'] as $key => $prim) {
      $attributes = array();
      if ($key == 0) {
        $attributes['class'][] = 'first';
      }
      elseif ($key == count($variables['primary']) -1) {
        $attributes['class'][] = 'last';
      }
      if (isset($variables['primary'][$key]['#active'])) {
        $attributes['class'][] = 'active';
      }
      $variables['primary'][$key]['#attributes'] = $attributes;
    }

    $variables['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';
    $variables['primary']['#prefix'] .= '<ul class="tabs primary clearfix">';
    $variables['primary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['primary']);
  }
  if (!empty($variables['secondary'])) {
    foreach($variables['secondary'] as $key => $sec) {
      $attributes = array();
      if ($key == 0) {
        $attributes['class'][] = 'first';
      }
      elseif ($key == count($variables['secondary']) -1) {
        $attributes['class'][] = 'last';
      }
      if (isset($variables['secondary'][$key]['#active'])) {
        $attributes['class'][] = 'active';
      }
      $variables['secondary'][$key]['#attributes'] = $attributes;
    }
    $variables['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $variables['secondary']['#prefix'] .= '<ul class="tabs secondary clearfix">';
    $variables['secondary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['secondary']);
  }
  return $output;
}

/**
 * Override theme_menu_local_task().
 *
 * Allows the passing of #attributes to the <li>.
 * Removed the addition of active class here because it's now added in
 * theme_menu_local_tasks().
 */
function cu_bootstrap_menu_local_task($variables) {
  $link = $variables['element']['#link'];
  $link_text = $link['title'];

  if (!empty($variables['element']['#active'])) {
    // Add text to indicate active tab for non-visual users.
    $active = '<span class="element-invisible">' . t('(active tab)') . '</span>';

    // If the link does not contain HTML already, check_plain() it now.
    // After we set 'html'=TRUE the link will not be sanitized by l().
    if (empty($link['localized_options']['html'])) {
      $link['title'] = check_plain($link['title']);
    }
    $link['localized_options']['html'] = TRUE;
    $link_text = t('!local-task-title!active', array('!local-task-title' => $link['title'], '!active' => $active));
  }

  return '<li' . drupal_attributes($variables['element']['#attributes']) . '>' . l($link_text, $link['href'], $link['localized_options']) . "</li>\n";
}

function cu_bootstrap_menu_link($variables) {
  $element = $variables['element'];
  $sub_menu = ''; 
  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $element['#localized_options']['html'] = TRUE;
  $element['#title'] = '<span>' . $element['#title'] . '</span>';
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  if (isset($element['#localized_options']['menu_icon'])) {
    if ($element['#localized_options']['menu_icon']['enable'] == 0) {
      $element['#attributes']['title'] = '<span>' . $element['#title'] . '</span>';
      $output = l('', $element['#href'], $element['#localized_options']);
    }
  }
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}



