<?php
/**
 * @file
 * ffvcoop_commerce_init.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ffvcoop_commerce_init_ctools_plugin_api($module = NULL, $api = NULL) {
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
