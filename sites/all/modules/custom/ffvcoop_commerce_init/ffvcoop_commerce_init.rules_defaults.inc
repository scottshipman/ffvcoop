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
  return $items;
}
