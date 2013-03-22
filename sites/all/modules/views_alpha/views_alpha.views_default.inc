<?php
/**
 * @file
 * views_alpha.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_alpha_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'colorado_session_laws';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Colorado Session Laws';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Colorado Session Laws';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = '';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_session_year' => 'field_session_year',
    'field_session_subject' => 'field_session_subject',
    'field_session_page_numbers' => 'field_session_page_numbers',
    'field_session_document_type' => 'field_session_document_type',
    'field_session_upload_file' => 'field_session_upload_file',
  );
  $handler->display->display_options['style_options']['default'] = 'field_session_subject';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_subject' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_page_numbers' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_document_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_upload_file' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_session_year']['id'] = 'field_session_year';
  $handler->display->display_options['fields']['field_session_year']['table'] = 'field_data_field_session_year';
  $handler->display->display_options['fields']['field_session_year']['field'] = 'field_session_year';
  $handler->display->display_options['fields']['field_session_year']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_session_year']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Subject */
  $handler->display->display_options['fields']['field_session_subject']['id'] = 'field_session_subject';
  $handler->display->display_options['fields']['field_session_subject']['table'] = 'field_data_field_session_subject';
  $handler->display->display_options['fields']['field_session_subject']['field'] = 'field_session_subject';
  $handler->display->display_options['fields']['field_session_subject']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_session_subject']['element_default_classes'] = FALSE;
  /* Field: Content: Page Numbers */
  $handler->display->display_options['fields']['field_session_page_numbers']['id'] = 'field_session_page_numbers';
  $handler->display->display_options['fields']['field_session_page_numbers']['table'] = 'field_data_field_session_page_numbers';
  $handler->display->display_options['fields']['field_session_page_numbers']['field'] = 'field_session_page_numbers';
  $handler->display->display_options['fields']['field_session_page_numbers']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_session_page_numbers']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_session_page_numbers']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_session_page_numbers']['delta_offset'] = '0';
  /* Field: Content: Document Type */
  $handler->display->display_options['fields']['field_session_document_type']['id'] = 'field_session_document_type';
  $handler->display->display_options['fields']['field_session_document_type']['table'] = 'field_data_field_session_document_type';
  $handler->display->display_options['fields']['field_session_document_type']['field'] = 'field_session_document_type';
  $handler->display->display_options['fields']['field_session_document_type']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_session_document_type']['element_default_classes'] = FALSE;
  /* Field: Content: Upload File */
  $handler->display->display_options['fields']['field_session_upload_file']['id'] = 'field_session_upload_file';
  $handler->display->display_options['fields']['field_session_upload_file']['table'] = 'field_data_field_session_upload_file';
  $handler->display->display_options['fields']['field_session_upload_file']['field'] = 'field_session_upload_file';
  $handler->display->display_options['fields']['field_session_upload_file']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_session_upload_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_session_upload_file']['click_sort_column'] = 'fid';
  /* Filter criterion: Content: Year (field_session_year) */
  $handler->display->display_options['filters']['field_session_year_value']['id'] = 'field_session_year_value';
  $handler->display->display_options['filters']['field_session_year_value']['table'] = 'field_data_field_session_year';
  $handler->display->display_options['filters']['field_session_year_value']['field'] = 'field_session_year_value';
  $handler->display->display_options['filters']['field_session_year_value']['group'] = 1;
  $handler->display->display_options['filters']['field_session_year_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_session_year_value']['expose']['operator_id'] = 'field_session_year_value_op';
  $handler->display->display_options['filters']['field_session_year_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_session_year_value']['expose']['operator'] = 'field_session_year_value_op';
  $handler->display->display_options['filters']['field_session_year_value']['expose']['identifier'] = 'field_session_year_value';
  $handler->display->display_options['filters']['field_session_year_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Page Numbers (field_session_page_numbers) */
  $handler->display->display_options['filters']['field_session_page_numbers_value']['id'] = 'field_session_page_numbers_value';
  $handler->display->display_options['filters']['field_session_page_numbers_value']['table'] = 'field_data_field_session_page_numbers';
  $handler->display->display_options['filters']['field_session_page_numbers_value']['field'] = 'field_session_page_numbers_value';
  $handler->display->display_options['filters']['field_session_page_numbers_value']['group'] = 1;
  $handler->display->display_options['filters']['field_session_page_numbers_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_session_page_numbers_value']['expose']['operator_id'] = 'field_session_page_numbers_value_op';
  $handler->display->display_options['filters']['field_session_page_numbers_value']['expose']['label'] = 'Page Numbers';
  $handler->display->display_options['filters']['field_session_page_numbers_value']['expose']['operator'] = 'field_session_page_numbers_value_op';
  $handler->display->display_options['filters']['field_session_page_numbers_value']['expose']['identifier'] = 'field_session_page_numbers_value';
  $handler->display->display_options['filters']['field_session_page_numbers_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Chapter Number (field_session_chapter_number) */
  $handler->display->display_options['filters']['field_session_chapter_number_value']['id'] = 'field_session_chapter_number_value';
  $handler->display->display_options['filters']['field_session_chapter_number_value']['table'] = 'field_data_field_session_chapter_number';
  $handler->display->display_options['filters']['field_session_chapter_number_value']['field'] = 'field_session_chapter_number_value';
  $handler->display->display_options['filters']['field_session_chapter_number_value']['group'] = 1;
  $handler->display->display_options['filters']['field_session_chapter_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_session_chapter_number_value']['expose']['operator_id'] = 'field_session_chapter_number_value_op';
  $handler->display->display_options['filters']['field_session_chapter_number_value']['expose']['label'] = 'Chapter Number';
  $handler->display->display_options['filters']['field_session_chapter_number_value']['expose']['operator'] = 'field_session_chapter_number_value_op';
  $handler->display->display_options['filters']['field_session_chapter_number_value']['expose']['identifier'] = 'field_session_chapter_number_value';
  $handler->display->display_options['filters']['field_session_chapter_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Session Type (field_session_type) */
  $handler->display->display_options['filters']['field_session_type_value']['id'] = 'field_session_type_value';
  $handler->display->display_options['filters']['field_session_type_value']['table'] = 'field_data_field_session_type';
  $handler->display->display_options['filters']['field_session_type_value']['field'] = 'field_session_type_value';
  $handler->display->display_options['filters']['field_session_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_session_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_session_type_value']['expose']['operator_id'] = 'field_session_type_value_op';
  $handler->display->display_options['filters']['field_session_type_value']['expose']['label'] = 'Session Type';
  $handler->display->display_options['filters']['field_session_type_value']['expose']['operator'] = 'field_session_type_value_op';
  $handler->display->display_options['filters']['field_session_type_value']['expose']['identifier'] = 'field_session_type_value';
  $handler->display->display_options['filters']['field_session_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Keyword';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Subject (field_session_subject) */
  $handler->display->display_options['filters']['field_session_subject_value']['id'] = 'field_session_subject_value';
  $handler->display->display_options['filters']['field_session_subject_value']['table'] = 'field_data_field_session_subject';
  $handler->display->display_options['filters']['field_session_subject_value']['field'] = 'field_session_subject_value';
  $handler->display->display_options['filters']['field_session_subject_value']['group'] = 1;
  $handler->display->display_options['filters']['field_session_subject_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_session_subject_value']['expose']['operator_id'] = 'field_session_subject_value_op';
  $handler->display->display_options['filters']['field_session_subject_value']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_session_subject_value']['expose']['operator'] = 'field_session_subject_value_op';
  $handler->display->display_options['filters']['field_session_subject_value']['expose']['identifier'] = 'field_session_subject_value';
  $handler->display->display_options['filters']['field_session_subject_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session_law' => 'session_law',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'colorado-session-laws';
  $export['colorado_session_laws'] = $view;

  $view = new view();
  $view->name = 'news_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News & Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News & Events';
  $handler->display->display_options['css_class'] = 'newsEvents';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Teaser Description */
  $handler->display->display_options['fields']['field_teaser_description']['id'] = 'field_teaser_description';
  $handler->display->display_options['fields']['field_teaser_description']['table'] = 'field_data_field_teaser_description';
  $handler->display->display_options['fields']['field_teaser_description']['field'] = 'field_teaser_description';
  $handler->display->display_options['fields']['field_teaser_description']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_description']['element_type'] = '0';
  $handler->display->display_options['fields']['field_teaser_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_description']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_teaser_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_description']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_event' => 'news_event',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['block_description'] = 'News & Events';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  $handler->display->display_options['path'] = 'news-events';
  $export['news_events'] = $view;

  return $export;
}
