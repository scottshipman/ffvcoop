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

  // Exported menu link: main-menu_customer-list:customer-list
  $menu_links['main-menu_customer-list:customer-list'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'customer-list',
    'router_path' => 'customer-list',
    'link_title' => 'Customer List',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_customer-list:customer-list',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
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
  // Exported menu link: main-menu_weekly-orders:weekly-customer-orders
  $menu_links['main-menu_weekly-orders:weekly-customer-orders'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'weekly-customer-orders',
    'router_path' => 'weekly-customer-orders',
    'link_title' => 'Weekly Orders',
    'options' => array(
      'identifier' => 'main-menu_weekly-orders:weekly-customer-orders',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Customer List');
  t('Home');
  t('Products');
  t('Send Bulk Email');
  t('Weekly Orders');


  return $menu_links;
}
