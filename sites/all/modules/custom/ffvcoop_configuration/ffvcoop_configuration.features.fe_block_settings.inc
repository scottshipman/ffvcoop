<?php
/**
 * @file
 * ffvcoop_configuration.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ffvcoop_configuration_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['formblock-user_register'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user_register',
    'module' => 'formblock',
    'node_types' => array(),
    'pages' => 'user/new-user',
    'roles' => array(),
    'themes' => array(
      'ffvcoop' => array(
        'region' => 'content',
        'status' => 1,
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
    'visibility' => 1,
  );

  $export['views-10f1734f9a8007f97e5f15d29c443064'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '10f1734f9a8007f97e5f15d29c443064',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'weekly-order-summary',
    'roles' => array(),
    'themes' => array(
      'ffvcoop' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ffvcoop',
        'weight' => 0,
      ),
      'ffvcoop_commerce' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ffvcoop_commerce',
        'weight' => 0,
      ),
    ),
    'title' => 'line item summary',
    'visibility' => 1,
  );

  $export['views-2bda5747bc8956479fe8b1fcc6ae9e82'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '2bda5747bc8956479fe8b1fcc6ae9e82',
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

  $export['views-e0ce370f87eccc5cbf57e40b475accac'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'e0ce370f87eccc5cbf57e40b475accac',
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

  $export['views-products_baskets-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'products_baskets-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'products',
    'roles' => array(),
    'themes' => array(
      'ffvcoop' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ffvcoop',
        'weight' => -13,
      ),
      'ffvcoop_commerce' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ffvcoop_commerce',
        'weight' => -13,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-weekly_email-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'weekly_email-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'send-bulk-email',
    'roles' => array(),
    'themes' => array(
      'ffvcoop' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ffvcoop',
        'weight' => -16,
      ),
      'ffvcoop_commerce' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ffvcoop_commerce',
        'weight' => -16,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
