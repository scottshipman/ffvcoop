<?php
/**
 * @file
 * ffvcoop_commerce_init.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ffvcoop_commerce_init_default_rules_configuration() {
  $items = array();
  $items['commerce_coupon_fixed_amount_new_user_coupon_with_fixed_amount'] = entity_import('rules_config', '{ "commerce_coupon_fixed_amount_new_user_coupon_with_fixed_amount" : {
      "LABEL" : "New User coupon with fixed amount",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce_coupon" ],
      "ON" : { "commerce_coupon_redeem" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "coupon:type" ], "value" : "new_user_coupon" } },
        { "entity_has_field" : { "entity" : [ "coupon" ], "field" : "commerce_coupon_fixed_amount" } },
        { "entity_has_field" : {
            "entity" : [ "commerce_order" ],
            "field" : "commerce_coupon_order_reference"
          }
        },
        { "NOT AND" : [
            { "data_is_empty" : { "data" : [ "coupon:commerce-coupon-fixed-amount" ] } }
          ]
        },
        { "data_is" : {
            "data" : [ "coupon:commerce-coupon-fixed-amount:amount" ],
            "op" : "\\u003E",
            "value" : 0
          }
        },
        { "data_is" : { "data" : [ "coupon:is-active" ], "op" : "=", "value" : true } },
        { "data_is" : {
            "data" : [ "commerce-order:owner:field-order-count" ],
            "op" : "\\u003C",
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "list_add" : {
            "list" : [ "commerce-order:commerce-coupon-order-reference" ],
            "item" : [ "coupon" ],
            "unique" : 1
          }
        },
        { "commerce_coupon_action_create_coupon_line_item" : {
            "USING" : {
              "commerce_coupon" : [ "coupon" ],
              "commerce_order" : [ "commerce-order" ],
              "amount" : [ "coupon:commerce-coupon-fixed-amount:amount" ],
              "component_name" : [ "coupon:price-component-name" ],
              "currency_code" : [ "coupon:commerce-coupon-fixed-amount:currency-code" ]
            },
            "PROVIDE" : { "commerce_coupon_line_item" : { "commerce_coupon_line_item" : "commerce coupon line item" } }
          }
        }
      ]
    }
  }');
  $items['rules_hide_shipping_pane_if_not_delivery'] = entity_import('rules_config', '{ "rules_hide_shipping_pane_if_not_delivery" : {
      "LABEL" : "Hide Shipping Pane if Not Delivery",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "FFVCOOP" ],
      "REQUIRES" : [ "commerce_order", "commerce_rules_extra" ],
      "ON" : { "commerce_rules_extra_process_checkout_pane" : [] },
      "IF" : [
        { "NOT commerce_order_contains_product_type" : {
            "commerce_order" : [ "commerce_order" ],
            "product_type" : { "value" : { "delivery" : "delivery" } },
            "operator" : "\\u003E=",
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "commerce_rules_extra_change_pane" : {
            "pane_id" : "customer_profile_shipping",
            "page_id" : "\\u003Csame\\u003E",
            "enabled" : 0
          }
        }
      ]
    }
  }');
  $items['rules_remove_delivery_if_no_baskets'] = entity_import('rules_config', '{ "rules_remove_delivery_if_no_baskets" : {
      "LABEL" : "Remove Delivery if no Baskets",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-10",
      "OWNER" : "rules",
      "TAGS" : [ "ffvcoop" ],
      "REQUIRES" : [ "commerce_order", "rules", "ffvcoop_delivery", "entity" ],
      "ON" : { "commerce_order_update" : [] },
      "IF" : [
        { "NOT commerce_order_contains_product_type" : {
            "commerce_order" : [ "commerce_order" ],
            "product_type" : { "value" : { "product" : "product" } },
            "operator" : "\\u003E=",
            "value" : "1"
          }
        },
        { "commerce_order_contains_product_type" : {
            "commerce_order" : [ "commerce_order" ],
            "product_type" : { "value" : { "delivery" : "delivery" } },
            "operator" : "\\u003E=",
            "value" : "1"
          }
        },
        { "data_is" : { "data" : [ "commerce-order:status" ], "value" : "cart" } },
        { "commerce_order_compare_total_product_quantity" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003C=",
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "ffvcoop_delivery_remove_delivery" : { "commerce_order" : [ "commerce_order" ] } },
        { "drupal_message" : {
            "message" : "The Delivery item was removed because no Baskets were left in the cart.",
            "type" : "warning",
            "repeat" : 0
          }
        }
      ]
    }
  }');
  return $items;
}
