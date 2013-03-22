<?php
/**
 * @file
 * content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_types_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'image' => array(
      'name' => t('Image'),
      'base' => 'node_content',
      'description' => t('node type to contain an uploaded image file.  Mostly to be used for the background image.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news_event' => array(
      'name' => t('News Event'),
      'base' => 'node_content',
      'description' => t('News events will appear on the front page News & Events panel.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'session_law' => array(
      'name' => t('Session Law'),
      'base' => 'node_content',
      'description' => t('Content type for all Colorado Session Law items (acts, front matter, ect.)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
