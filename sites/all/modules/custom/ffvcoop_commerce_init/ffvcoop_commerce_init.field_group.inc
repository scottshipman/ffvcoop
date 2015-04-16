<?php
/**
 * @file
 * ffvcoop_commerce_init.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ffvcoop_commerce_init_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_order_comments|commerce_order|commerce_order|form';
  $field_group->group_name = 'group_order_comments';
  $field_group->entity_type = 'commerce_order';
  $field_group->bundle = 'commerce_order';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Comments',
    'weight' => '34',
    'children' => array(
      0 => 'field_comments',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-order-comments field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_order_comments|commerce_order|commerce_order|form'] = $field_group;

  return $export;
}
