<?php

function cu_bootstrap_form_system_theme_settings_alter(&$form, &$form_state) {
  $theme = $form_state['build_info']['args'][0];
	$form['cu_bootstrap_theme_settings'] = array(
		'#type' => 'fieldset', 
		'#title' => t('Theme Settings'), 
	);
	
	$form['cu_bootstrap_theme_settings']['typography'] = array(
		'#type' => 'fieldset', 
		'#title' => t('Typography'), 
		'#collapsible' => TRUE, 
		'#collapsed' => TRUE,
	);
	
	$form['cu_bootstrap_theme_settings']['typography']['fonts'] = array(
	  '#type' => 'radios', 
	  '#title' => t('Font Sets'), 
	  '#default_value' => theme_get_setting('fonts', $theme) ? theme_get_setting('fonts', $theme) : 'font-set-1', 
	  '#description' => t('Pick a font set for your sites body copy.'),
	  '#options' => array(
      'font-set-1' => t('Helvetica(sans serif) Set'),
      'font-set-2' => t('Helvetica/Arvo(slab serif) Headings Set'),
      'font-set-3' => t('Helvetica/Deja Vu(serif) Headings Set'),
      'font-set-4' => t('Deja Vu(serif) Set'),
      'font-set-5' => t('Deja Vu(serif)/Helvetica(sans serif) Headings Set'),
    ),
	);
	
	$form['cu_bootstrap_theme_settings']['columns'] = array(
		'#type' => 'fieldset', 
		'#title' => t('Column Options'), 
		'#collapsible' => TRUE, 
		'#collapsed' => TRUE,
	);
	$form['cu_bootstrap_theme_settings']['columns']['after_content_columns'] = array(
	  '#type' => 'radios', 
	  '#title' => t('After Content Columns'), 
	  '#default_value' => theme_get_setting('after_content_columns', $theme) ? theme_get_setting('after_content_columns', $theme) : '3', 
	  '#description' => t('Pick how many columns for blocks after the content'),
	  '#options' => array(
      '6' => t('6'),
      '4' => t('4'),
      '3' => t('3'),
      '2' => t('2'),
      '1' => t('1'),
    ),
	);
	 $form['cu_bootstrap_theme_settings']['columns']['lower_columns'] = array(
	  '#type' => 'radios', 
	  '#title' => t('After Content 2 Columns'), 
	  '#default_value' => theme_get_setting('lower_columns', $theme) ? theme_get_setting('lower_columns', $theme) : '2', 
	  '#description' => t('Pick how many columns for blocks in the second after content region'),
	  '#options' => array(
      '6' => t('6'),
      '4' => t('4'),
      '3' => t('3'),
      '2' => t('2'),
      '1' => t('1'),
    ),
	);
  $form['cu_bootstrap_theme_settings']['columns']['footer_columns'] = array(
	  '#type' => 'radios', 
	  '#title' => t('Footer Columns'), 
	  '#default_value' => theme_get_setting('footer_columns', $theme) ? theme_get_setting('footer_columns', $theme) : '4', 
	  '#description' => t('Pick how many columns for blocks in the footer'),
	  '#options' => array(
      '6' => t('6'),
      '4' => t('4'),
      '3' => t('3'),
      '2' => t('2'),
      '1' => t('1'),
    ),
	);
	
	$form['cu_bootstrap_theme_settings']['breadcrumbs'] = array(
		'#type' => 'fieldset', 
		'#title' => t('Breadcrumbs'), 
		'#collapsible' => TRUE, 
		'#collapsed' => TRUE,
	);
	$form['cu_bootstrap_theme_settings']['breadcrumbs']['use_breadcrumbs'] = array(
    '#type' => 'checkbox', 
   	'#title' => t('Use Breadcrumbs'), 
   	'#default_value' => theme_get_setting('use_breadcrumbs', $theme) ? theme_get_setting('use_breadcrumbs', $theme) : FALSE, 
   	'#description' => t('Enable breadcrumb navigation.'),
  );

  $form['cu_bootstrap_theme_settings']['homepage'] = array(
    '#type' => 'fieldset',
    '#title' => t('Homepage'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['cu_bootstrap_theme_settings']['homepage']['homepage_title'] = array(
    '#type' => 'checkbox',
    '#title' => t('Display title on homepage'),
    '#default_value' => theme_get_setting('homepage_title', $theme) ? theme_get_setting('homepage_title', $theme) : FALSE,
  );
  
  $form['cu_bootstrap_theme_settings']['action_menu'] = array(
    '#type' => 'fieldset',
    '#title' => t('Action Menu'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['cu_bootstrap_theme_settings']['action_menu']['use_action_menu'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use Action Menu'),
    '#default_value' => theme_get_setting('use_action_menu', $theme) ? theme_get_setting('use_action_menu', $theme) : FALSE,
    '#description' => t('Place secondary menu as buttons on navigation bar'),
  );
}
