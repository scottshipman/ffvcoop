<?php
/**
 * @file
 * ffvcoop_commerce_init.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ffvcoop_commerce_init_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.commerce_customer_profile-billing-commerce_customer_address.default_value|0"] = array(
    'administrative_area' => '',
    'country' => 'US',
    'element_key' => 'commerce_customer_profile|billing|commerce_customer_address|und|0',
    'locality' => '',
    'name_line' => '',
    'postal_code' => '',
    'premise' => '',
    'thoroughfare' => '',
  );
  $overrides["field_instance.commerce_customer_profile-billing-commerce_customer_address.required"] = 1;
  $overrides["field_instance.commerce_customer_profile-billing-commerce_customer_address.widget|active"] = 1;
  $overrides["field_instance.commerce_customer_profile-billing-commerce_customer_address.widget|settings|format_handlers|0"]["DELETED"] = TRUE;
  $overrides["field_instance.commerce_customer_profile-billing-commerce_customer_address.widget|settings|format_handlers|1"]["DELETED"] = TRUE;
  $overrides["field_instance.commerce_customer_profile-billing-commerce_customer_address.widget|settings|format_handlers|address"] = 'address';
  $overrides["field_instance.commerce_customer_profile-billing-commerce_customer_address.widget|settings|format_handlers|address-hide-country"] = 0;
  $overrides["field_instance.commerce_customer_profile-billing-commerce_customer_address.widget|settings|format_handlers|name-full"] = 0;
  $overrides["field_instance.commerce_customer_profile-billing-commerce_customer_address.widget|settings|format_handlers|name-oneline"] = 'name-oneline';
  $overrides["field_instance.commerce_customer_profile-billing-commerce_customer_address.widget|settings|format_handlers|organisation"] = 'organisation';

 return $overrides;
}
