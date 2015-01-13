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
        { "data_is" : { "data" : [ "coupon:type" ], "value" : "new_user_fixed" } },
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
  $items['rules_add_to_user_order_count_on_checkout_completion'] = entity_import('rules_config', '{ "rules_add_to_user_order_count_on_checkout_completion" : {
      "LABEL" : "Add to User Order Count on Checkout Completion",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "commerce checkout" ],
      "REQUIRES" : [ "rules", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "IF" : [
        { "NOT data_is" : { "data" : [ "commerce-order:uid" ], "value" : "0" } },
        { "entity_has_field" : { "entity" : [ "site:current-user" ], "field" : "field_order_count" } }
      ],
      "DO" : [
        { "entity_query" : {
            "USING" : {
              "type" : "user",
              "property" : "uid",
              "value" : [ "commerce-order:uid" ]
            },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "entity-fetched" ] },
            "ITEM" : { "list_item" : "Current uid list item" },
            "DO" : [
              { "data_calc" : {
                  "USING" : {
                    "input_1" : [ "list-item:field-order-count" ],
                    "op" : "+",
                    "input_2" : "1"
                  },
                  "PROVIDE" : { "result" : { "result" : "Calculation result" } }
                }
              }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
