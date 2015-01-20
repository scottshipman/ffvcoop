<?php
/**
 * @file
 * ffvcoop_configuration.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ffvcoop_configuration_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_current-orders:manage/commerce/orders/list
  $menu_links['main-menu_current-orders:manage/commerce/orders/list'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'manage/commerce/orders/list',
    'router_path' => 'manage/commerce/orders/list',
    'link_title' => 'Current Orders',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_current-orders:manage/commerce/orders/list',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_products:product-list
  $menu_links['main-menu_products:product-list'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'product-list',
    'router_path' => 'product-list',
    'link_title' => 'Products',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_products:product-list',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_send-bulk-email:node/64
  $menu_links['main-menu_send-bulk-email:node/64'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/64',
    'router_path' => 'node/%',
    'link_title' => 'Send Bulk Email',
    'options' => array(
      'identifier' => 'main-menu_send-bulk-email:node/64',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_shopping-carts:manage/commerce/orders/carts
  $menu_links['main-menu_shopping-carts:manage/commerce/orders/carts'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'manage/commerce/orders/carts',
    'router_path' => 'manage/commerce/orders/carts',
    'link_title' => 'Shopping Carts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_shopping-carts:manage/commerce/orders/carts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_current-orders:manage/commerce/orders/list',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Current Orders');
  t('Home');
  t('Products');
  t('Send Bulk Email');
  t('Shopping Carts');


  return $menu_links;
}
