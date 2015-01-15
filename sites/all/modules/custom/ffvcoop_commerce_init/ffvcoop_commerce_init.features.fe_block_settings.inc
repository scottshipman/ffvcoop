<?php
/**
 * @file
 * ffvcoop_commerce_init.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ffvcoop_commerce_init_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['commerce_cart-cart'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'cart',
    'module' => 'commerce_cart',
    'node_types' => array(),
    'pages' => 'checkout*
cart
customer-list',
    'roles' => array(),
    'themes' => array(
      'ffvcoop' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'ffvcoop',
        'weight' => -23,
      ),
      'ffvcoop_commerce' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'ffvcoop_commerce',
        'weight' => -21,
      ),
    ),
    'title' => 'My Shopping Cart',
    'visibility' => 0,
  );

  $export['formblock-user_password_request'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user_password_request',
    'module' => 'formblock',
    'node_types' => array(),
    'pages' => 'user/current-user/login',
    'roles' => array(),
    'themes' => array(
      'ffvcoop' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ffvcoop',
        'weight' => 0,
      ),
      'ffvcoop_commerce' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ffvcoop_commerce',
        'weight' => 0,
      ),
    ),
    'title' => 'Request New Password',
    'visibility' => 1,
  );

  $export['nice_menus-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'module' => 'nice_menus',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ffvcoop' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ffvcoop',
        'weight' => 0,
      ),
      'ffvcoop_commerce' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ffvcoop_commerce',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['nice_menus-2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 2,
    'module' => 'nice_menus',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ffvcoop' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ffvcoop',
        'weight' => 0,
      ),
      'ffvcoop_commerce' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ffvcoop_commerce',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-bf5ee37bd60ea98abcb761c967f50021'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'bf5ee37bd60ea98abcb761c967f50021',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ffvcoop' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ffvcoop',
        'weight' => 0,
      ),
      'ffvcoop_commerce' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ffvcoop_commerce',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-c117238b5c55f571b4e7a454037d5f6e'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'c117238b5c55f571b4e7a454037d5f6e',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ffvcoop' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ffvcoop',
        'weight' => 0,
      ),
      'ffvcoop_commerce' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ffvcoop_commerce',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
