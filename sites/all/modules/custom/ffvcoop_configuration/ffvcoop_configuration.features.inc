<?php
/**
 * @file
 * ffvcoop_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ffvcoop_configuration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "elysia_cron" && $api == "default_elysia_cron_rules") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ffvcoop_configuration_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function ffvcoop_configuration_eck_bundle_info() {
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
function ffvcoop_configuration_eck_entity_type_info() {
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
function ffvcoop_configuration_node_info() {
  $items = array(
    'administration_page' => array(
      'name' => t('Administration Page'),
      'base' => 'node_content',
      'description' => t('Use this content type to create Administrator Only accessible pages (clone of Basic Page)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
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
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
