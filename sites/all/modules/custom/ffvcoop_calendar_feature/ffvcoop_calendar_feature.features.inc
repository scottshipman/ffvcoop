<?php
/**
 * @file
 * ffvcoop_calendar_feature.features.inc
 */

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
      'properties' => array(
        'pdid' => array(
          'label' => 'PDID',
          'type' => 'integer',
          'behavior' => '',
        ),
        'week_date' => array(
          'label' => 'Week Date',
          'type' => 'integer',
          'behavior' => '',
        ),
      ),
    ),
  );
  return $items;
}
