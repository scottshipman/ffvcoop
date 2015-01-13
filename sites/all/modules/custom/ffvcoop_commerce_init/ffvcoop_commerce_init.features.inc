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
    'new_user_fixed' => array(
      'type' => 'new_user_fixed',
      'label' => 'New User Fixed',
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

/**
 * Implements hook_eck_bundle_info().
 */
function ffvcoop_commerce_init_eck_bundle_info() {
  $items = array(
    'customer_order_customer_order' => array(
      'machine_name' => 'customer_order_customer_order',
      'entity_type' => 'customer_order',
      'name' => 'customer_order',
      'label' => 'customer order',
    ),
    'customer_order_order_line_item' => array(
      'machine_name' => 'customer_order_order_line_item',
      'entity_type' => 'customer_order',
      'name' => 'order_line_item',
      'label' => 'Order Line Item',
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function ffvcoop_commerce_init_eck_entity_type_info() {
  $items = array(
    'customer_order' => array(
      'name' => 'customer_order',
      'label' => 'customer order',
      'properties' => array(
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_node_info().
 */
function ffvcoop_commerce_init_node_info() {
  $items = array(
    'basket' => array(
      'name' => t('Baskets'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'customer' => array(
      'name' => t('Customer'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('First Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
