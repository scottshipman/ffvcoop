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
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_old-order-system:node/8',
  );
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
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_current-orders:manage/commerce/orders/list',
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
  // Exported menu link: main-menu_old-order-system:node/8
  $menu_links['main-menu_old-order-system:node/8'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/8',
    'router_path' => 'node/%',
    'link_title' => 'Old Order System',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_old-order-system:node/8',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
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
  // Exported menu link: main-menu_weekly-calendar:configuration/calendar
  $menu_links['main-menu_weekly-calendar:configuration/calendar'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'configuration/calendar',
    'router_path' => 'configuration/calendar',
    'link_title' => 'Weekly Calendar',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_weekly-calendar:configuration/calendar',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_current-orders:manage/commerce/orders/list',
  );
  // Exported menu link: main-menu_weekly-order-summary:manage/weekly-product-report
  $menu_links['main-menu_weekly-order-summary:manage/weekly-product-report'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'manage/weekly-product-report',
    'router_path' => 'manage/weekly-product-report',
    'link_title' => 'Weekly Order Summary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_weekly-order-summary:manage/weekly-product-report',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_current-orders:manage/commerce/orders/list',
  );
  // Exported menu link: main-menu_weekly-orders:weekly-customer-orders
  $menu_links['main-menu_weekly-orders:weekly-customer-orders'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'weekly-customer-orders',
    'router_path' => 'weekly-customer-orders',
    'link_title' => 'Weekly Orders',
    'options' => array(
      'identifier' => 'main-menu_weekly-orders:weekly-customer-orders',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_old-order-system:node/8',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Current Orders');
  t('Customer List');
  t('Delivery Orders');
  t('Home');
  t('Old Order System');
  t('Products');
  t('Send Bulk Email');
  t('Shopping Carts');
  t('Weekly Calendar');
  t('Weekly Order Summary');
  t('Weekly Orders');


  return $menu_links;
}
