<?php
/**
 * @file
 * menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-about.
  $menus['menu-about'] = array(
    'menu_name' => 'menu-about',
    'title' => 'About',
    'description' => 'Menu contains all links for the "about" section.  Only appears in pages of that section',
  );
  // Exported menu: menu-community.
  $menus['menu-community'] = array(
    'menu_name' => 'menu-community',
    'title' => 'Community',
    'description' => '',
  );
  // Exported menu: menu-faculty-and-staff.
  $menus['menu-faculty-and-staff'] = array(
    'menu_name' => 'menu-faculty-and-staff',
    'title' => 'Faculty and Staff',
    'description' => 'Contains links to all content for the Faculty and Staff area.  Only appears on Faculty and Staff pages.',
  );
  // Exported menu: menu-quicklinks.
  $menus['menu-quicklinks'] = array(
    'menu_name' => 'menu-quicklinks',
    'title' => 'Quicklinks',
    'description' => 'Drop down menu displayed to the right on the main menu bar.',
  );
  // Exported menu: menu-students.
  $menus['menu-students'] = array(
    'menu_name' => 'menu-students',
    'title' => 'Students',
    'description' => 'Local navigation for the students section.  This menu will only appear on students pages.',
  );
  // Exported menu: menu-utility-navigation.
  $menus['menu-utility-navigation'] = array(
    'menu_name' => 'menu-utility-navigation',
    'title' => 'Utility Navigation',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Community');
  t('Contains links to all content for the Faculty and Staff area.  Only appears on Faculty and Staff pages.');
  t('Drop down menu displayed to the right on the main menu bar.');
  t('Faculty and Staff');
  t('Local navigation for the students section.  This menu will only appear on students pages.');
  t('Main menu');
  t('Menu contains all links for the "about" section.  Only appears in pages of that section');
  t('Quicklinks');
  t('Students');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('Utility Navigation');


  return $menus;
}
