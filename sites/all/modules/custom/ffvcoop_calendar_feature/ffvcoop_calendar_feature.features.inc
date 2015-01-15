<?php
/**
 * @file
 * ffvcoop_calendar_feature.features.inc
 */

/**
 * Implements hook_views_api().
 */
function ffvcoop_calendar_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function ffvcoop_calendar_feature_eck_bundle_info() {
  $items = array(
    'pickup_date_pickup_date' => array(
      'machine_name' => 'pickup_date_pickup_date',
      'entity_type' => 'pickup_date',
      'name' => 'pickup_date',
      'label' => 'Pickup Date',
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function ffvcoop_calendar_feature_eck_entity_type_info() {
  $items = array(
    'pickup_date' => array(
      'name' => 'pickup_date',
      'label' => 'Pickup Date',
      'properties' => array(),
    ),
  );
  return $items;
}
