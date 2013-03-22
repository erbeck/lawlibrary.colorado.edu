<?php
/**
 * @file
 * menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:node/10
  $menu_links['main-menu:node/10'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/10',
    'router_path' => 'node/%',
    'link_title' => 'Research Guides',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'node/6',
  );
  // Exported menu link: main-menu:node/11
  $menu_links['main-menu:node/11'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/11',
    'router_path' => 'node/%',
    'link_title' => 'Tutorials',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/6',
  );
  // Exported menu link: main-menu:node/12
  $menu_links['main-menu:node/12'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/12',
    'router_path' => 'node/%',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
    'parent_path' => 'node/6',
  );
  // Exported menu link: main-menu:node/13
  $menu_links['main-menu:node/13'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'Print/Copy/Scan',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
    'parent_path' => 'node/6',
  );
  // Exported menu link: main-menu:node/14
  $menu_links['main-menu:node/14'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/14',
    'router_path' => 'node/%',
    'link_title' => 'Location Guide and Floorplans',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '6',
    'parent_path' => 'node/6',
  );
  // Exported menu link: main-menu:node/15
  $menu_links['main-menu:node/15'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/15',
    'router_path' => 'node/%',
    'link_title' => 'Hours',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/7',
  );
  // Exported menu link: main-menu:node/16
  $menu_links['main-menu:node/16'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/16',
    'router_path' => 'node/%',
    'link_title' => 'Faculty and Staff Directory',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'node/7',
  );
  // Exported menu link: main-menu:node/17
  $menu_links['main-menu:node/17'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/17',
    'router_path' => 'node/%',
    'link_title' => 'Policies',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '3',
    'parent_path' => 'node/7',
  );
  // Exported menu link: main-menu:node/18
  $menu_links['main-menu:node/18'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/18',
    'router_path' => 'node/%',
    'link_title' => 'General Use',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
    'parent_path' => 'node/17',
  );
  // Exported menu link: main-menu:node/19
  $menu_links['main-menu:node/19'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/19',
    'router_path' => 'node/%',
    'link_title' => 'Circulation',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
    'parent_path' => 'node/17',
  );
  // Exported menu link: main-menu:node/20
  $menu_links['main-menu:node/20'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/20',
    'router_path' => 'node/%',
    'link_title' => 'Reference',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
    'parent_path' => 'node/17',
  );
  // Exported menu link: main-menu:node/21
  $menu_links['main-menu:node/21'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/21',
    'router_path' => 'node/%',
    'link_title' => 'Collection Development',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '6',
    'parent_path' => 'node/17',
  );
  // Exported menu link: main-menu:node/22
  $menu_links['main-menu:node/22'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/22',
    'router_path' => 'node/%',
    'link_title' => 'Library and Collections',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '7',
    'parent_path' => 'node/7',
  );
  // Exported menu link: main-menu:node/23
  $menu_links['main-menu:node/23'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/23',
    'router_path' => 'node/%',
    'link_title' => 'Law Library Collections',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '8',
    'parent_path' => 'node/22',
  );
  // Exported menu link: main-menu:node/24
  $menu_links['main-menu:node/24'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/24',
    'router_path' => 'node/%',
    'link_title' => 'Government Documents',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '9',
    'parent_path' => 'node/22',
  );
  // Exported menu link: main-menu:node/25
  $menu_links['main-menu:node/25'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/25',
    'router_path' => 'node/%',
    'link_title' => 'Mission & Vision',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '11',
    'parent_path' => 'node/7',
  );
  // Exported menu link: main-menu:node/26
  $menu_links['main-menu:node/26'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/26',
    'router_path' => 'node/%',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '12',
    'parent_path' => 'node/7',
  );
  // Exported menu link: main-menu:node/5
  $menu_links['main-menu:node/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'Find',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: main-menu:node/6
  $menu_links['main-menu:node/6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/6',
    'router_path' => 'node/%',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '2',
  );
  // Exported menu link: main-menu:node/61
  $menu_links['main-menu:node/61'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/61',
    'router_path' => 'node/%',
    'link_title' => 'Getting Here & Parking',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'node/7',
  );
  // Exported menu link: main-menu:node/7
  $menu_links['main-menu:node/7'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '3',
  );
  // Exported menu link: main-menu:node/8
  $menu_links['main-menu:node/8'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/8',
    'router_path' => 'node/%',
    'link_title' => 'Ask a Librarian',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/6',
  );
  // Exported menu link: main-menu:node/9
  $menu_links['main-menu:node/9'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/9',
    'router_path' => 'node/%',
    'link_title' => 'Citation Guides',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'node/6',
  );
  // Exported menu link: menu-about:node/15
  $menu_links['menu-about:node/15'] = array(
    'menu_name' => 'menu-about',
    'link_path' => 'node/15',
    'router_path' => 'node/%',
    'link_title' => 'Hours',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-about:node/16
  $menu_links['menu-about:node/16'] = array(
    'menu_name' => 'menu-about',
    'link_path' => 'node/16',
    'router_path' => 'node/%',
    'link_title' => 'Faculty and Staff Directory',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
  );
  // Exported menu link: menu-about:node/17
  $menu_links['menu-about:node/17'] = array(
    'menu_name' => 'menu-about',
    'link_path' => 'node/17',
    'router_path' => 'node/%',
    'link_title' => 'Policies',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '3',
  );
  // Exported menu link: menu-about:node/18
  $menu_links['menu-about:node/18'] = array(
    'menu_name' => 'menu-about',
    'link_path' => 'node/18',
    'router_path' => 'node/%',
    'link_title' => 'General Use',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '4',
    'parent_path' => 'node/17',
  );
  // Exported menu link: menu-about:node/19
  $menu_links['menu-about:node/19'] = array(
    'menu_name' => 'menu-about',
    'link_path' => 'node/19',
    'router_path' => 'node/%',
    'link_title' => 'Circulation',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '5',
    'parent_path' => 'node/17',
  );
  // Exported menu link: menu-about:node/20
  $menu_links['menu-about:node/20'] = array(
    'menu_name' => 'menu-about',
    'link_path' => 'node/20',
    'router_path' => 'node/%',
    'link_title' => 'Reference',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '6',
    'parent_path' => 'node/17',
  );
  // Exported menu link: menu-about:node/21
  $menu_links['menu-about:node/21'] = array(
    'menu_name' => 'menu-about',
    'link_path' => 'node/21',
    'router_path' => 'node/%',
    'link_title' => 'Collection Development',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '7',
    'parent_path' => 'node/17',
  );
  // Exported menu link: menu-about:node/22
  $menu_links['menu-about:node/22'] = array(
    'menu_name' => 'menu-about',
    'link_path' => 'node/22',
    'router_path' => 'node/%',
    'link_title' => 'Library & Collections',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '8',
  );
  // Exported menu link: menu-about:node/23
  $menu_links['menu-about:node/23'] = array(
    'menu_name' => 'menu-about',
    'link_path' => 'node/23',
    'router_path' => 'node/%',
    'link_title' => 'Law Library Collections',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '9',
    'parent_path' => 'node/22',
  );
  // Exported menu link: menu-about:node/24
  $menu_links['menu-about:node/24'] = array(
    'menu_name' => 'menu-about',
    'link_path' => 'node/24',
    'router_path' => 'node/%',
    'link_title' => 'Government Documents',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '10',
    'parent_path' => 'node/22',
  );
  // Exported menu link: menu-about:node/25
  $menu_links['menu-about:node/25'] = array(
    'menu_name' => 'menu-about',
    'link_path' => 'node/25',
    'router_path' => 'node/%',
    'link_title' => 'Mission & Vision',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '11',
  );
  // Exported menu link: menu-about:node/26
  $menu_links['menu-about:node/26'] = array(
    'menu_name' => 'menu-about',
    'link_path' => 'node/26',
    'router_path' => 'node/%',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '12',
  );
  // Exported menu link: menu-about:node/61
  $menu_links['menu-about:node/61'] = array(
    'menu_name' => 'menu-about',
    'link_path' => 'node/61',
    'router_path' => 'node/%',
    'link_title' => 'Getting Here & Parking',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: menu-community:node/52
  $menu_links['menu-community:node/52'] = array(
    'menu_name' => 'menu-community',
    'link_path' => 'node/52',
    'router_path' => 'node/%',
    'link_title' => 'Access Collection',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-community:node/53
  $menu_links['menu-community:node/53'] = array(
    'menu_name' => 'menu-community',
    'link_path' => 'node/53',
    'router_path' => 'node/%',
    'link_title' => 'Friends of the Library',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: menu-community:node/54
  $menu_links['menu-community:node/54'] = array(
    'menu_name' => 'menu-community',
    'link_path' => 'node/54',
    'router_path' => 'node/%',
    'link_title' => 'Donate to the Library',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
  );
  // Exported menu link: menu-community:node/55
  $menu_links['menu-community:node/55'] = array(
    'menu_name' => 'menu-community',
    'link_path' => 'node/55',
    'router_path' => 'node/%',
    'link_title' => 'Attorneys (Bench & Bar)',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
  );
  // Exported menu link: menu-community:node/56
  $menu_links['menu-community:node/56'] = array(
    'menu_name' => 'menu-community',
    'link_path' => 'node/56',
    'router_path' => 'node/%',
    'link_title' => 'Document Delivery',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
  );
  // Exported menu link: menu-community:node/57
  $menu_links['menu-community:node/57'] = array(
    'menu_name' => 'menu-community',
    'link_path' => 'node/57',
    'router_path' => 'node/%',
    'link_title' => 'Alumni',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
  );
  // Exported menu link: menu-faculty-and-staff:node/41
  $menu_links['menu-faculty-and-staff:node/41'] = array(
    'menu_name' => 'menu-faculty-and-staff',
    'link_path' => 'node/41',
    'router_path' => 'node/%',
    'link_title' => 'Place a Faculty Hold',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-faculty-and-staff:node/42
  $menu_links['menu-faculty-and-staff:node/42'] = array(
    'menu_name' => 'menu-faculty-and-staff',
    'link_path' => 'node/42',
    'router_path' => 'node/%',
    'link_title' => 'Book Orders',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: menu-faculty-and-staff:node/44
  $menu_links['menu-faculty-and-staff:node/44'] = array(
    'menu_name' => 'menu-faculty-and-staff',
    'link_path' => 'node/44',
    'router_path' => 'node/%',
    'link_title' => 'After Hours Use',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
  );
  // Exported menu link: menu-faculty-and-staff:node/45
  $menu_links['menu-faculty-and-staff:node/45'] = array(
    'menu_name' => 'menu-faculty-and-staff',
    'link_path' => 'node/45',
    'router_path' => 'node/%',
    'link_title' => 'Remote Access to E-Resources',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
  );
  // Exported menu link: menu-faculty-and-staff:node/46
  $menu_links['menu-faculty-and-staff:node/46'] = array(
    'menu_name' => 'menu-faculty-and-staff',
    'link_path' => 'node/46',
    'router_path' => 'node/%',
    'link_title' => 'LexisNexis & Westlaw Research',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
  );
  // Exported menu link: menu-faculty-and-staff:node/47
  $menu_links['menu-faculty-and-staff:node/47'] = array(
    'menu_name' => 'menu-faculty-and-staff',
    'link_path' => 'node/47',
    'router_path' => 'node/%',
    'link_title' => 'Teaching',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '6',
  );
  // Exported menu link: menu-faculty-and-staff:node/48
  $menu_links['menu-faculty-and-staff:node/48'] = array(
    'menu_name' => 'menu-faculty-and-staff',
    'link_path' => 'node/48',
    'router_path' => 'node/%',
    'link_title' => 'Submit Course Reserves',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '7',
  );
  // Exported menu link: menu-faculty-and-staff:node/49
  $menu_links['menu-faculty-and-staff:node/49'] = array(
    'menu_name' => 'menu-faculty-and-staff',
    'link_path' => 'node/49',
    'router_path' => 'node/%',
    'link_title' => 'Faculty Publications',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '8',
  );
  // Exported menu link: menu-faculty-and-staff:node/50
  $menu_links['menu-faculty-and-staff:node/50'] = array(
    'menu_name' => 'menu-faculty-and-staff',
    'link_path' => 'node/50',
    'router_path' => 'node/%',
    'link_title' => 'Book Donations',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '9',
  );
  // Exported menu link: menu-faculty-and-staff:node/51
  $menu_links['menu-faculty-and-staff:node/51'] = array(
    'menu_name' => 'menu-faculty-and-staff',
    'link_path' => 'node/51',
    'router_path' => 'node/%',
    'link_title' => 'Research Assistant Resources',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
  );
  // Exported menu link: menu-faculty-and-staff:node/62
  $menu_links['menu-faculty-and-staff:node/62'] = array(
    'menu_name' => 'menu-faculty-and-staff',
    'link_path' => 'node/62',
    'router_path' => 'node/%',
    'link_title' => 'Faculty Interlibrary Loan',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
  );
  // Exported menu link: menu-help:node/10
  $menu_links['menu-help:node/10'] = array(
    'menu_name' => 'menu-help',
    'link_path' => 'node/10',
    'router_path' => 'node/%',
    'link_title' => 'Research Guides',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
  );
  // Exported menu link: menu-help:node/12
  $menu_links['menu-help:node/12'] = array(
    'menu_name' => 'menu-help',
    'link_path' => 'node/12',
    'router_path' => 'node/%',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
  );
  // Exported menu link: menu-help:node/13
  $menu_links['menu-help:node/13'] = array(
    'menu_name' => 'menu-help',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'Print/Copy/Scan',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
  );
  // Exported menu link: menu-help:node/14
  $menu_links['menu-help:node/14'] = array(
    'menu_name' => 'menu-help',
    'link_path' => 'node/14',
    'router_path' => 'node/%',
    'link_title' => 'Location Guide and Floorplans',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '6',
  );
  // Exported menu link: menu-help:node/8
  $menu_links['menu-help:node/8'] = array(
    'menu_name' => 'menu-help',
    'link_path' => 'node/8',
    'router_path' => 'node/%',
    'link_title' => 'Ask a Librarian',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-help:node/9
  $menu_links['menu-help:node/9'] = array(
    'menu_name' => 'menu-help',
    'link_path' => 'node/9',
    'router_path' => 'node/%',
    'link_title' => 'Citation Guides',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: menu-quicklinks:node/12
  $menu_links['menu-quicklinks:node/12'] = array(
    'menu_name' => 'menu-quicklinks',
    'link_path' => 'node/12',
    'router_path' => 'node/%',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-quicklinks:node/54
  $menu_links['menu-quicklinks:node/54'] = array(
    'menu_name' => 'menu-quicklinks',
    'link_path' => 'node/54',
    'router_path' => 'node/%',
    'link_title' => 'Donate to the Library',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: menu-students:node/30
  $menu_links['menu-students:node/30'] = array(
    'menu_name' => 'menu-students',
    'link_path' => 'node/30',
    'router_path' => 'node/%',
    'link_title' => 'Borrow a Book',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-students:node/31
  $menu_links['menu-students:node/31'] = array(
    'menu_name' => 'menu-students',
    'link_path' => 'node/31',
    'router_path' => 'node/%',
    'link_title' => 'Search Course Reserves',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: menu-students:node/32
  $menu_links['menu-students:node/32'] = array(
    'menu_name' => 'menu-students',
    'link_path' => 'node/32',
    'router_path' => 'node/%',
    'link_title' => 'Place a Student Hold',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
  );
  // Exported menu link: menu-students:node/33
  $menu_links['menu-students:node/33'] = array(
    'menu_name' => 'menu-students',
    'link_path' => 'node/33',
    'router_path' => 'node/%',
    'link_title' => 'Student Interlibrary Loan',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
  );
  // Exported menu link: menu-students:node/34
  $menu_links['menu-students:node/34'] = array(
    'menu_name' => 'menu-students',
    'link_path' => 'node/34',
    'router_path' => 'node/%',
    'link_title' => 'Legal Research Courses',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
  );
  // Exported menu link: menu-students:node/35
  $menu_links['menu-students:node/35'] = array(
    'menu_name' => 'menu-students',
    'link_path' => 'node/35',
    'router_path' => 'node/%',
    'link_title' => 'Study Aids',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
  );
  // Exported menu link: menu-students:node/36
  $menu_links['menu-students:node/36'] = array(
    'menu_name' => 'menu-students',
    'link_path' => 'node/36',
    'router_path' => 'node/%',
    'link_title' => 'Research & Writing Aids',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '6',
  );
  // Exported menu link: menu-students:node/37
  $menu_links['menu-students:node/37'] = array(
    'menu_name' => 'menu-students',
    'link_path' => 'node/37',
    'router_path' => 'node/%',
    'link_title' => 'Lectures & Course Materials',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '7',
  );
  // Exported menu link: menu-students:node/38
  $menu_links['menu-students:node/38'] = array(
    'menu_name' => 'menu-students',
    'link_path' => 'node/38',
    'router_path' => 'node/%',
    'link_title' => 'Student Printing',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '8',
  );
  // Exported menu link: menu-students:node/39
  $menu_links['menu-students:node/39'] = array(
    'menu_name' => 'menu-students',
    'link_path' => 'node/39',
    'router_path' => 'node/%',
    'link_title' => 'LexisNexis & Westlaw Printing',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '9',
  );
  // Exported menu link: menu-students:node/40
  $menu_links['menu-students:node/40'] = array(
    'menu_name' => 'menu-students',
    'link_path' => 'node/40',
    'router_path' => 'node/%',
    'link_title' => 'Technology',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
  );
  // Exported menu link: menu-utility-navigation:node/27
  $menu_links['menu-utility-navigation:node/27'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/27',
    'router_path' => 'node/%',
    'link_title' => 'Students',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-utility-navigation:node/28
  $menu_links['menu-utility-navigation:node/28'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/28',
    'router_path' => 'node/%',
    'link_title' => 'Faculty and Staff',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: menu-utility-navigation:node/29
  $menu_links['menu-utility-navigation:node/29'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/29',
    'router_path' => 'node/%',
    'link_title' => 'Community',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '2',
  );
  // Exported menu link: menu-utility-navigation:node/30
  $menu_links['menu-utility-navigation:node/30'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/30',
    'router_path' => 'node/%',
    'link_title' => 'Borrow a Book',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/27',
  );
  // Exported menu link: menu-utility-navigation:node/31
  $menu_links['menu-utility-navigation:node/31'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/31',
    'router_path' => 'node/%',
    'link_title' => 'Search Course Reserve',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'node/27',
  );
  // Exported menu link: menu-utility-navigation:node/32
  $menu_links['menu-utility-navigation:node/32'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/32',
    'router_path' => 'node/%',
    'link_title' => 'Place a Student hold',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'node/27',
  );
  // Exported menu link: menu-utility-navigation:node/33
  $menu_links['menu-utility-navigation:node/33'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/33',
    'router_path' => 'node/%',
    'link_title' => 'Student Interlibrary Loan',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
    'parent_path' => 'node/27',
  );
  // Exported menu link: menu-utility-navigation:node/34
  $menu_links['menu-utility-navigation:node/34'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/34',
    'router_path' => 'node/%',
    'link_title' => 'Legal Research Courses',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
    'parent_path' => 'node/27',
  );
  // Exported menu link: menu-utility-navigation:node/35
  $menu_links['menu-utility-navigation:node/35'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/35',
    'router_path' => 'node/%',
    'link_title' => 'Study Aids',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
    'parent_path' => 'node/27',
  );
  // Exported menu link: menu-utility-navigation:node/36
  $menu_links['menu-utility-navigation:node/36'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/36',
    'router_path' => 'node/%',
    'link_title' => 'Research & Writing Aids',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '6',
    'parent_path' => 'node/27',
  );
  // Exported menu link: menu-utility-navigation:node/37
  $menu_links['menu-utility-navigation:node/37'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/37',
    'router_path' => 'node/%',
    'link_title' => 'Lectures & Course Material',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '7',
    'parent_path' => 'node/27',
  );
  // Exported menu link: menu-utility-navigation:node/38
  $menu_links['menu-utility-navigation:node/38'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/38',
    'router_path' => 'node/%',
    'link_title' => 'Student Printing',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '7',
    'parent_path' => 'node/27',
  );
  // Exported menu link: menu-utility-navigation:node/39
  $menu_links['menu-utility-navigation:node/39'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/39',
    'router_path' => 'node/%',
    'link_title' => 'LexisNexis & Westlaw Printing',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '8',
    'parent_path' => 'node/27',
  );
  // Exported menu link: menu-utility-navigation:node/40
  $menu_links['menu-utility-navigation:node/40'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/40',
    'router_path' => 'node/%',
    'link_title' => 'Technology',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '9',
    'parent_path' => 'node/27',
  );
  // Exported menu link: menu-utility-navigation:node/41
  $menu_links['menu-utility-navigation:node/41'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/41',
    'router_path' => 'node/%',
    'link_title' => 'Place a Faculty Hold',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/28',
  );
  // Exported menu link: menu-utility-navigation:node/42
  $menu_links['menu-utility-navigation:node/42'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/42',
    'router_path' => 'node/%',
    'link_title' => 'Book Orders',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'node/28',
  );
  // Exported menu link: menu-utility-navigation:node/44
  $menu_links['menu-utility-navigation:node/44'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/44',
    'router_path' => 'node/%',
    'link_title' => 'After Hours Use',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
    'parent_path' => 'node/28',
  );
  // Exported menu link: menu-utility-navigation:node/45
  $menu_links['menu-utility-navigation:node/45'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/45',
    'router_path' => 'node/%',
    'link_title' => 'Remote Access to E-Resources',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
    'parent_path' => 'node/28',
  );
  // Exported menu link: menu-utility-navigation:node/46
  $menu_links['menu-utility-navigation:node/46'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/46',
    'router_path' => 'node/%',
    'link_title' => 'LexisNexis & Westlaw Research',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
    'parent_path' => 'node/28',
  );
  // Exported menu link: menu-utility-navigation:node/47
  $menu_links['menu-utility-navigation:node/47'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/47',
    'router_path' => 'node/%',
    'link_title' => 'Teaching',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '6',
    'parent_path' => 'node/28',
  );
  // Exported menu link: menu-utility-navigation:node/48
  $menu_links['menu-utility-navigation:node/48'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/48',
    'router_path' => 'node/%',
    'link_title' => 'Submit Course Reserves',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '7',
    'parent_path' => 'node/28',
  );
  // Exported menu link: menu-utility-navigation:node/49
  $menu_links['menu-utility-navigation:node/49'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/49',
    'router_path' => 'node/%',
    'link_title' => 'Faculty Publications',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '8',
    'parent_path' => 'node/28',
  );
  // Exported menu link: menu-utility-navigation:node/50
  $menu_links['menu-utility-navigation:node/50'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/50',
    'router_path' => 'node/%',
    'link_title' => 'Book Donations',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '9',
    'parent_path' => 'node/28',
  );
  // Exported menu link: menu-utility-navigation:node/51
  $menu_links['menu-utility-navigation:node/51'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/51',
    'router_path' => 'node/%',
    'link_title' => 'Research Assistant Resources',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
    'parent_path' => 'node/28',
  );
  // Exported menu link: menu-utility-navigation:node/52
  $menu_links['menu-utility-navigation:node/52'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/52',
    'router_path' => 'node/%',
    'link_title' => 'Access Collection',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/29',
  );
  // Exported menu link: menu-utility-navigation:node/53
  $menu_links['menu-utility-navigation:node/53'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/53',
    'router_path' => 'node/%',
    'link_title' => 'Friends of the Library',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'node/29',
  );
  // Exported menu link: menu-utility-navigation:node/54
  $menu_links['menu-utility-navigation:node/54'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/54',
    'router_path' => 'node/%',
    'link_title' => 'Donate to the Library',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'node/29',
  );
  // Exported menu link: menu-utility-navigation:node/55
  $menu_links['menu-utility-navigation:node/55'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/55',
    'router_path' => 'node/%',
    'link_title' => 'Attorneys',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
    'parent_path' => 'node/29',
  );
  // Exported menu link: menu-utility-navigation:node/56
  $menu_links['menu-utility-navigation:node/56'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/56',
    'router_path' => 'node/%',
    'link_title' => 'Document Delivery',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
    'parent_path' => 'node/29',
  );
  // Exported menu link: menu-utility-navigation:node/57
  $menu_links['menu-utility-navigation:node/57'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/57',
    'router_path' => 'node/%',
    'link_title' => 'Alumni',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
    'parent_path' => 'node/29',
  );
  // Exported menu link: menu-utility-navigation:node/62
  $menu_links['menu-utility-navigation:node/62'] = array(
    'menu_name' => 'menu-utility-navigation',
    'link_path' => 'node/62',
    'router_path' => 'node/%',
    'link_title' => 'Borrow from Other Libraries (Faculty)',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'node/28',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Access Collection');
  t('After Hours Use');
  t('Alumni');
  t('Ask a Librarian');
  t('Attorneys');
  t('Attorneys (Bench & Bar)');
  t('Book Donations');
  t('Book Orders');
  t('Borrow a Book');
  t('Borrow from Other Libraries (Faculty)');
  t('Circulation');
  t('Citation Guides');
  t('Collection Development');
  t('Community');
  t('Document Delivery');
  t('Donate to the Library');
  t('FAQ');
  t('Faculty Interlibrary Loan');
  t('Faculty Publications');
  t('Faculty and Staff');
  t('Faculty and Staff Directory');
  t('Find');
  t('Friends of the Library');
  t('General Use');
  t('Getting Here & Parking');
  t('Government Documents');
  t('Help');
  t('Home');
  t('Hours');
  t('Law Library Collections');
  t('Lectures & Course Material');
  t('Lectures & Course Materials');
  t('Legal Research Courses');
  t('LexisNexis & Westlaw Printing');
  t('LexisNexis & Westlaw Research');
  t('Library & Collections');
  t('Library and Collections');
  t('Location Guide and Floorplans');
  t('Mission & Vision');
  t('News');
  t('Place a Faculty Hold');
  t('Place a Student Hold');
  t('Place a Student hold');
  t('Policies');
  t('Print/Copy/Scan');
  t('Reference');
  t('Remote Access to E-Resources');
  t('Research & Writing Aids');
  t('Research Assistant Resources');
  t('Research Guides');
  t('Search Course Reserve');
  t('Search Course Reserves');
  t('Student Interlibrary Loan');
  t('Student Printing');
  t('Students');
  t('Study Aids');
  t('Submit Course Reserves');
  t('Teaching');
  t('Technology');
  t('Tutorials');


  return $menu_links;
}
