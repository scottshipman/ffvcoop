<?php
/**
 * @file
 * ffvcoop_commerce_init.features.inc
 */

/**
 * Implements hook_commerce_coupon_default_types().
 */
function ffvcoop_commerce_init_commerce_coupon_default_types() {
  $items = array(
    'commerce_coupon_fixed' => array(
      'type' => 'commerce_coupon_fixed',
      'label' => 'Fixed coupon',
      'weight' => 0,
      'data' => NULL,
      'status' => 1,
      'module' => NULL,
      'metatags' => array(),
      'rdf_mapping' => array(),
    ),
    'commerce_coupon_pct' => array(
      'type' => 'commerce_coupon_pct',
      'label' => 'Percentage coupon',
      'weight' => 0,
      'data' => NULL,
      'status' => 1,
      'module' => NULL,
      'metatags' => array(),
      'rdf_mapping' => array(),
    ),
    'new_user_coupon' => array(
      'type' => 'new_user_coupon',
      'label' => 'New User Coupon',
      'weight' => 0,
      'data' => NULL,
      'status' => 1,
      'module' => NULL,
      'metatags' => array(),
      'rdf_mapping' => array(),
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_product_default_types().
 */
function ffvcoop_commerce_init_commerce_product_default_types() {
  $items = array(
    'delivery' => array(
      'type' => 'delivery',
      'name' => 'Delivery',
      'description' => 'Delivery line item to add to a customer\'s CART',
      'help' => '',
      'revision' => 1,
    ),
    'fee' => array(
      'type' => 'fee',
      'name' => 'Fee',
      'description' => '',
      'help' => 'Use this for various fees, such as the Annual Fee',
      'revision' => 0,
    ),
    'product' => array(
      'type' => 'product',
      'name' => 'Baskets',
      'description' => 'A basic product type.',
      'help' => '',
      'revision' => 1,
    ),
    'recurring' => array(
      'type' => 'recurring',
      'name' => 'Recurring product',
      'description' => 'A recurring purchase product type',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function ffvcoop_commerce_init_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "elysia_cron" && $api == "default_elysia_cron_rules") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ffvcoop_commerce_init_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
