<?php
/**
 * @file
 * ffvcoop_commerce_init.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ffvcoop_commerce_init_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_delivery-orders:manage/delivery
  $menu_links['main-menu_delivery-orders:manage/delivery'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'manage/delivery',
    'router_path' => 'manage/delivery',
    'link_title' => 'Delivery Orders',
    'options' => array(
      'identifier' => 'main-menu_delivery-orders:manage/delivery',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Delivery Orders');


  return $menu_links;
}
