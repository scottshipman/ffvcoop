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
  $items['commerce_checkout_ffvcoop_send_an_order_notification_e_mail'] = entity_import('rules_config', '{ "commerce_checkout_ffvcoop_send_an_order_notification_e_mail" : {
      "LABEL" : "FFVCOOP Send an order notification e-mail",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "4",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Checkout" ],
      "REQUIRES" : [ "rules", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "DO" : [
        { "mail" : {
            "to" : [ "commerce-order:mail" ],
            "subject" : "[commerce-order:owner],\\r\\nThank you for your Order (#[commerce-order:order-number]) at [site:name]",
            "message" : "Thank you for your order (order #[commerce-order:order-number]) at [site:name]. This order will be available for pickup at our store on [commerce-order:field-week-date:custom:l, F d] between 11am and 7pm.\\r\\n\\r\\nYou can view your order history with us at any time by logging into our website at:\\r\\n[site:login-url]\\r\\n\\r\\nYou can find the details of your current order at:\\r\\n[commerce-order:customer-url]\\r\\n\\r\\nPlease contact us if you have any questions about your order.\\r\\n\\r\\nSincerely,\\r\\nMark, Kathy and Steven Born  \\r\\nFFV Co-op, LLC\\r\\n727-488-0858\\r\\n\\u003Ca href=\\u0022www.ffvcoop.com\\u0022\\u003Ewww.ffvcoop.com\\u003C\\/a\\u003E\\r\\n\\u003Ca href=\\u0022https:\\/\\/www.facebook.com\\/ffvcoop\\u0022\\u003Ehttps:\\/\\/www.facebook.com\\/ffvcoop\\u003C\\/a\\u003E\\r\\n\\r\\n------------------------------------------------------------------------------------------\\r\\n                                                 Order Details\\r\\n------------------------------------------------------------------------------------------\\r\\n[commerce-order:commerce_line_items]\\r\\nTotal: [commerce-order:commerce_order_total]\\r\\n\\r\\n------------------------------------------------------------------------------------------\\r\\nIf Delivery was selected, it will be delivered to:\\r\\n[commerce-order:commerce_customer_shipping]",
            "language" : [ "commerce-order:state" ]
          }
        }
      ]
    }
  }');
  $items['commerce_coupon_fixed_amount_new_user_coupon_with_fixed_amount'] = entity_import('rules_config', '{ "commerce_coupon_fixed_amount_new_user_coupon_with_fixed_amount" : {
      "LABEL" : "New User coupon with fixed amount",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce_order", "commerce_coupon" ],
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
        },
        { "commerce_order_contains_product" : {
            "commerce_order" : [ "commerce_order" ],
            "product_id" : "LFVB15",
            "operator" : "\\u003E=",
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
  $items['rules_authorize_net_capture_only'] = entity_import('rules_config', '{ "rules_authorize_net_capture_only" : {
      "LABEL" : "Authorize.net Capture Only",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "1",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_payment", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "DO" : [
        { "commerce_payment_enable_authnet_aim" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : { "value" : {
                "method_id" : "authnet_aim",
                "settings" : {
                  "login" : "26hwZ6WP",
                  "tran_key" : "7Nx2HH8Dd9mXn46w",
                  "txn_mode" : "live",
                  "txn_type" : "auth_capture",
                  "card_types" : {
                    "visa" : "visa",
                    "mastercard" : "mastercard",
                    "amex" : 0,
                    "discover" : 0,
                    "dc" : 0,
                    "dci" : 0,
                    "cb" : 0,
                    "jcb" : 0,
                    "maestro" : 0,
                    "visaelectron" : 0,
                    "laser" : 0,
                    "solo" : 0,
                    "switch" : 0
                  },
                  "cardonfile" : 1,
                  "continuous" : 0,
                  "email_customer" : 0,
                  "log" : { "request" : "request", "response" : "response" }
                }
              }
            }
          }
        }
      ]
    }
  }');
  $items['rules_autorize_net_auth_and_capture'] = entity_import('rules_config', '{ "rules_autorize_net_auth_and_capture" : {
      "LABEL" : "Autorize.net Auth and Capture",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_payment", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "DO" : [
        { "commerce_payment_enable_authnet_aim" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : { "value" : {
                "method_id" : "authnet_aim",
                "settings" : {
                  "login" : "26hwZ6WP",
                  "tran_key" : "7Nx2HH8Dd9mXn46w",
                  "txn_mode" : "live",
                  "txn_type" : "auth_capture",
                  "card_types" : {
                    "visa" : "visa",
                    "mastercard" : "mastercard",
                    "amex" : 0,
                    "discover" : 0,
                    "dc" : 0,
                    "dci" : 0,
                    "cb" : 0,
                    "jcb" : 0,
                    "maestro" : 0,
                    "visaelectron" : 0,
                    "laser" : 0,
                    "solo" : 0,
                    "switch" : 0
                  },
                  "cardonfile" : 1,
                  "continuous" : 0,
                  "email_customer" : 0,
                  "log" : { "request" : "request", "response" : "response" }
                }
              }
            }
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
