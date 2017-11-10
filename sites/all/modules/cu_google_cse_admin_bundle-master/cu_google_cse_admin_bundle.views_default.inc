<?php
/**
 * @file
 * cu_google_cse_admin_bundle.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cu_google_cse_admin_bundle_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cu_google_cse';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'google cse';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Google CSE';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div><ul class="action-links"><li><a href="/webcentral/node/add/cu-google-cse">Add Google CSE</a></li>
</ul></div>
<div>These are CSE codes created for specific Web Express sites.  Please follow these <a href="https://docs.google.com/spreadsheets/d/1zuZrk4MSSVidFLJHWf5ezi_Q5zZ3-G_N42WCSai18uQ/edit#gid=1705895017">step by step instructions for adding additional CSE configurations</a>.</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No CSE\'s found.';
  $handler->display->display_options['empty']['area']['format'] = 'wysiwyg';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Creator */
  $handler->display->display_options['fields']['field_cu_google_cse_creator']['id'] = 'field_cu_google_cse_creator';
  $handler->display->display_options['fields']['field_cu_google_cse_creator']['table'] = 'field_data_field_cu_google_cse_creator';
  $handler->display->display_options['fields']['field_cu_google_cse_creator']['field'] = 'field_cu_google_cse_creator';
  $handler->display->display_options['fields']['field_cu_google_cse_creator']['element_type'] = '0';
  $handler->display->display_options['fields']['field_cu_google_cse_creator']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cu_google_cse_creator']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_cu_google_cse_creator']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cu_google_cse_creator']['field_api_classes'] = TRUE;
  /* Field: Content: id */
  $handler->display->display_options['fields']['field_cu_google_cse_id']['id'] = 'field_cu_google_cse_id';
  $handler->display->display_options['fields']['field_cu_google_cse_id']['table'] = 'field_data_field_cu_google_cse_id';
  $handler->display->display_options['fields']['field_cu_google_cse_id']['field'] = 'field_cu_google_cse_id';
  $handler->display->display_options['fields']['field_cu_google_cse_id']['label'] = 'ID';
  $handler->display->display_options['fields']['field_cu_google_cse_id']['element_type'] = '0';
  $handler->display->display_options['fields']['field_cu_google_cse_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cu_google_cse_id']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_cu_google_cse_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cu_google_cse_id']['field_api_classes'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Download';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href="/webcentral/node/[nid]/google-cse.xml">XML</a>';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cu_google_cse' => 'cu_google_cse',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/google-cse';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Google CSE';
  $handler->display->display_options['menu']['weight'] = '100';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['cu_google_cse'] = $view;

  return $export;
}
