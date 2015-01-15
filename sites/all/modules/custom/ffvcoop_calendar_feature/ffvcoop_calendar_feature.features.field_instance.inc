<?php
/**
 * @file
 * ffvcoop_calendar_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ffvcoop_calendar_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'pickup_date-pickup_date-field_week_date'
  $field_instances['pickup_date-pickup_date-field_week_date'] = array(
    'bundle' => 'pickup_date',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'pickup_date',
    'field_name' => 'field_week_date',
    'label' => 'Week Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 11,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Week Date');

  return $field_instances;
}
