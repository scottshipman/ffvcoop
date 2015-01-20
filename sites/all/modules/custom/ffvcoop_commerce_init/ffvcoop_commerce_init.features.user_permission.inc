<?php
/**
 * @file
 * ffvcoop_commerce_init.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ffvcoop_commerce_init_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access checkout'.
  $permissions['access checkout'] = array(
    'name' => 'access checkout',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_checkout',
  );

  // Exported permission: 'administer card data'.
  $permissions['administer card data'] = array(
    'name' => 'administer card data',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'administer checkout'.
  $permissions['administer checkout'] = array(
    'name' => 'administer checkout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_checkout',
  );

  // Exported permission: 'administer commerce_coupon entities'.
  $permissions['administer commerce_coupon entities'] = array(
    'name' => 'administer commerce_coupon entities',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'administer commerce_customer_profile entities'.
  $permissions['administer commerce_customer_profile entities'] = array(
    'name' => 'administer commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'administer commerce_order entities'.
  $permissions['administer commerce_order entities'] = array(
    'name' => 'administer commerce_order entities',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'administer commerce_product entities'.
  $permissions['administer commerce_product entities'] = array(
    'name' => 'administer commerce_product entities',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'administer coupon settings'.
  $permissions['administer coupon settings'] = array(
    'name' => 'administer coupon settings',
    'roles' => array(),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'administer coupon types'.
  $permissions['administer coupon types'] = array(
    'name' => 'administer coupon types',
    'roles' => array(),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'administer customer profile types'.
  $permissions['administer customer profile types'] = array(
    'name' => 'administer customer profile types',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'administer line item types'.
  $permissions['administer line item types'] = array(
    'name' => 'administer line item types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_line_item',
  );

  // Exported permission: 'administer line items'.
  $permissions['administer line items'] = array(
    'name' => 'administer line items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_line_item',
  );

  // Exported permission: 'administer payment methods'.
  $permissions['administer payment methods'] = array(
    'name' => 'administer payment methods',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'administer payments'.
  $permissions['administer payments'] = array(
    'name' => 'administer payments',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'administer product types'.
  $permissions['administer product types'] = array(
    'name' => 'administer product types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'administer shipping'.
  $permissions['administer shipping'] = array(
    'name' => 'administer shipping',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_shipping',
  );

  // Exported permission: 'configure cardonfile'.
  $permissions['configure cardonfile'] = array(
    'name' => 'configure cardonfile',
    'roles' => array(),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'configure order settings'.
  $permissions['configure order settings'] = array(
    'name' => 'configure order settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'configure store'.
  $permissions['configure store'] = array(
    'name' => 'configure store',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce',
  );

  // Exported permission: 'create any card data'.
  $permissions['create any card data'] = array(
    'name' => 'create any card data',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'create commerce_coupon entities'.
  $permissions['create commerce_coupon entities'] = array(
    'name' => 'create commerce_coupon entities',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'create commerce_coupon entities of bundle commerce_coupon_fixed'.
  $permissions['create commerce_coupon entities of bundle commerce_coupon_fixed'] = array(
    'name' => 'create commerce_coupon entities of bundle commerce_coupon_fixed',
    'roles' => array(),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'create commerce_coupon entities of bundle commerce_coupon_pct'.
  $permissions['create commerce_coupon entities of bundle commerce_coupon_pct'] = array(
    'name' => 'create commerce_coupon entities of bundle commerce_coupon_pct',
    'roles' => array(),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'create commerce_coupon entities of bundle new_user_fixed'.
  $permissions['create commerce_coupon entities of bundle new_user_fixed'] = array(
    'name' => 'create commerce_coupon entities of bundle new_user_fixed',
    'roles' => array(),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'create commerce_customer_profile entities'.
  $permissions['create commerce_customer_profile entities'] = array(
    'name' => 'create commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create commerce_customer_profile entities of bundle billing'.
  $permissions['create commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'create commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create commerce_customer_profile entities of bundle shipping'.
  $permissions['create commerce_customer_profile entities of bundle shipping'] = array(
    'name' => 'create commerce_customer_profile entities of bundle shipping',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create commerce_order entities'.
  $permissions['create commerce_order entities'] = array(
    'name' => 'create commerce_order entities',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create commerce_order entities of bundle commerce_order'.
  $permissions['create commerce_order entities of bundle commerce_order'] = array(
    'name' => 'create commerce_order entities of bundle commerce_order',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create commerce_product entities'.
  $permissions['create commerce_product entities'] = array(
    'name' => 'create commerce_product entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle delivery'.
  $permissions['create commerce_product entities of bundle delivery'] = array(
    'name' => 'create commerce_product entities of bundle delivery',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle product'.
  $permissions['create commerce_product entities of bundle product'] = array(
    'name' => 'create commerce_product entities of bundle product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle recurring'.
  $permissions['create commerce_product entities of bundle recurring'] = array(
    'name' => 'create commerce_product entities of bundle recurring',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create own card data'.
  $permissions['create own card data'] = array(
    'name' => 'create own card data',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'create payments'.
  $permissions['create payments'] = array(
    'name' => 'create payments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'delete any card data'.
  $permissions['delete any card data'] = array(
    'name' => 'delete any card data',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'delete own card data'.
  $permissions['delete own card data'] = array(
    'name' => 'delete own card data',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'delete payments'.
  $permissions['delete payments'] = array(
    'name' => 'delete payments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'edit any card data'.
  $permissions['edit any card data'] = array(
    'name' => 'edit any card data',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'edit any commerce_coupon entity'.
  $permissions['edit any commerce_coupon entity'] = array(
    'name' => 'edit any commerce_coupon entity',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'edit any commerce_coupon entity of bundle commerce_coupon_fixed'.
  $permissions['edit any commerce_coupon entity of bundle commerce_coupon_fixed'] = array(
    'name' => 'edit any commerce_coupon entity of bundle commerce_coupon_fixed',
    'roles' => array(),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'edit any commerce_coupon entity of bundle commerce_coupon_pct'.
  $permissions['edit any commerce_coupon entity of bundle commerce_coupon_pct'] = array(
    'name' => 'edit any commerce_coupon entity of bundle commerce_coupon_pct',
    'roles' => array(),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'edit any commerce_coupon entity of bundle new_user_fixed'.
  $permissions['edit any commerce_coupon entity of bundle new_user_fixed'] = array(
    'name' => 'edit any commerce_coupon entity of bundle new_user_fixed',
    'roles' => array(),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'edit any commerce_customer_profile entity'.
  $permissions['edit any commerce_customer_profile entity'] = array(
    'name' => 'edit any commerce_customer_profile entity',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any commerce_customer_profile entity of bundle billing'.
  $permissions['edit any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'edit any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any commerce_customer_profile entity of bundle shipping'.
  $permissions['edit any commerce_customer_profile entity of bundle shipping'] = array(
    'name' => 'edit any commerce_customer_profile entity of bundle shipping',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any commerce_order entity'.
  $permissions['edit any commerce_order entity'] = array(
    'name' => 'edit any commerce_order entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit any commerce_order entity of bundle commerce_order'.
  $permissions['edit any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'edit any commerce_order entity of bundle commerce_order',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit any commerce_product entity'.
  $permissions['edit any commerce_product entity'] = array(
    'name' => 'edit any commerce_product entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle delivery'.
  $permissions['edit any commerce_product entity of bundle delivery'] = array(
    'name' => 'edit any commerce_product entity of bundle delivery',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle product'.
  $permissions['edit any commerce_product entity of bundle product'] = array(
    'name' => 'edit any commerce_product entity of bundle product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle recurring'.
  $permissions['edit any commerce_product entity of bundle recurring'] = array(
    'name' => 'edit any commerce_product entity of bundle recurring',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own card data'.
  $permissions['edit own card data'] = array(
    'name' => 'edit own card data',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'edit own commerce_coupon entities'.
  $permissions['edit own commerce_coupon entities'] = array(
    'name' => 'edit own commerce_coupon entities',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'edit own commerce_coupon entities of bundle commerce_coupon_fixed'.
  $permissions['edit own commerce_coupon entities of bundle commerce_coupon_fixed'] = array(
    'name' => 'edit own commerce_coupon entities of bundle commerce_coupon_fixed',
    'roles' => array(),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'edit own commerce_coupon entities of bundle commerce_coupon_pct'.
  $permissions['edit own commerce_coupon entities of bundle commerce_coupon_pct'] = array(
    'name' => 'edit own commerce_coupon entities of bundle commerce_coupon_pct',
    'roles' => array(),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'edit own commerce_coupon entities of bundle new_user_fixed'.
  $permissions['edit own commerce_coupon entities of bundle new_user_fixed'] = array(
    'name' => 'edit own commerce_coupon entities of bundle new_user_fixed',
    'roles' => array(),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'edit own commerce_customer_profile entities'.
  $permissions['edit own commerce_customer_profile entities'] = array(
    'name' => 'edit own commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit own commerce_customer_profile entities of bundle billing'.
  $permissions['edit own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'edit own commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit own commerce_customer_profile entities of bundle shipping'.
  $permissions['edit own commerce_customer_profile entities of bundle shipping'] = array(
    'name' => 'edit own commerce_customer_profile entities of bundle shipping',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit own commerce_order entities'.
  $permissions['edit own commerce_order entities'] = array(
    'name' => 'edit own commerce_order entities',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit own commerce_order entities of bundle commerce_order'.
  $permissions['edit own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'edit own commerce_order entities of bundle commerce_order',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit own commerce_product entities'.
  $permissions['edit own commerce_product entities'] = array(
    'name' => 'edit own commerce_product entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle delivery'.
  $permissions['edit own commerce_product entities of bundle delivery'] = array(
    'name' => 'edit own commerce_product entities of bundle delivery',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle product'.
  $permissions['edit own commerce_product entities of bundle product'] = array(
    'name' => 'edit own commerce_product entities of bundle product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle recurring'.
  $permissions['edit own commerce_product entities of bundle recurring'] = array(
    'name' => 'edit own commerce_product entities of bundle recurring',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'update payments'.
  $permissions['update payments'] = array(
    'name' => 'update payments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'view any card data'.
  $permissions['view any card data'] = array(
    'name' => 'view any card data',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'view any commerce_coupon entity'.
  $permissions['view any commerce_coupon entity'] = array(
    'name' => 'view any commerce_coupon entity',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'view any commerce_coupon entity of bundle commerce_coupon_fixed'.
  $permissions['view any commerce_coupon entity of bundle commerce_coupon_fixed'] = array(
    'name' => 'view any commerce_coupon entity of bundle commerce_coupon_fixed',
    'roles' => array(),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'view any commerce_coupon entity of bundle commerce_coupon_pct'.
  $permissions['view any commerce_coupon entity of bundle commerce_coupon_pct'] = array(
    'name' => 'view any commerce_coupon entity of bundle commerce_coupon_pct',
    'roles' => array(),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'view any commerce_coupon entity of bundle new_user_fixed'.
  $permissions['view any commerce_coupon entity of bundle new_user_fixed'] = array(
    'name' => 'view any commerce_coupon entity of bundle new_user_fixed',
    'roles' => array(),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'view any commerce_customer_profile entity'.
  $permissions['view any commerce_customer_profile entity'] = array(
    'name' => 'view any commerce_customer_profile entity',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_customer_profile entity of bundle billing'.
  $permissions['view any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'view any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_customer_profile entity of bundle shipping'.
  $permissions['view any commerce_customer_profile entity of bundle shipping'] = array(
    'name' => 'view any commerce_customer_profile entity of bundle shipping',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_order entity'.
  $permissions['view any commerce_order entity'] = array(
    'name' => 'view any commerce_order entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view any commerce_order entity of bundle commerce_order'.
  $permissions['view any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'view any commerce_order entity of bundle commerce_order',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view any commerce_product entity'.
  $permissions['view any commerce_product entity'] = array(
    'name' => 'view any commerce_product entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle delivery'.
  $permissions['view any commerce_product entity of bundle delivery'] = array(
    'name' => 'view any commerce_product entity of bundle delivery',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle product'.
  $permissions['view any commerce_product entity of bundle product'] = array(
    'name' => 'view any commerce_product entity of bundle product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle recurring'.
  $permissions['view any commerce_product entity of bundle recurring'] = array(
    'name' => 'view any commerce_product entity of bundle recurring',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own card data'.
  $permissions['view own card data'] = array(
    'name' => 'view own card data',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'view own commerce_coupon entities'.
  $permissions['view own commerce_coupon entities'] = array(
    'name' => 'view own commerce_coupon entities',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'view own commerce_coupon entities of bundle commerce_coupon_fixed'.
  $permissions['view own commerce_coupon entities of bundle commerce_coupon_fixed'] = array(
    'name' => 'view own commerce_coupon entities of bundle commerce_coupon_fixed',
    'roles' => array(),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'view own commerce_coupon entities of bundle commerce_coupon_pct'.
  $permissions['view own commerce_coupon entities of bundle commerce_coupon_pct'] = array(
    'name' => 'view own commerce_coupon entities of bundle commerce_coupon_pct',
    'roles' => array(),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'view own commerce_coupon entities of bundle new_user_fixed'.
  $permissions['view own commerce_coupon entities of bundle new_user_fixed'] = array(
    'name' => 'view own commerce_coupon entities of bundle new_user_fixed',
    'roles' => array(),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'view own commerce_customer_profile entities'.
  $permissions['view own commerce_customer_profile entities'] = array(
    'name' => 'view own commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own commerce_customer_profile entities of bundle billing'.
  $permissions['view own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'view own commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own commerce_customer_profile entities of bundle shipping'.
  $permissions['view own commerce_customer_profile entities of bundle shipping'] = array(
    'name' => 'view own commerce_customer_profile entities of bundle shipping',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own commerce_order entities'.
  $permissions['view own commerce_order entities'] = array(
    'name' => 'view own commerce_order entities',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view own commerce_order entities of bundle commerce_order'.
  $permissions['view own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'view own commerce_order entities of bundle commerce_order',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view own commerce_product entities'.
  $permissions['view own commerce_product entities'] = array(
    'name' => 'view own commerce_product entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle delivery'.
  $permissions['view own commerce_product entities of bundle delivery'] = array(
    'name' => 'view own commerce_product entities of bundle delivery',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle product'.
  $permissions['view own commerce_product entities of bundle product'] = array(
    'name' => 'view own commerce_product entities of bundle product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle recurring'.
  $permissions['view own commerce_product entities of bundle recurring'] = array(
    'name' => 'view own commerce_product entities of bundle recurring',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view payments'.
  $permissions['view payments'] = array(
    'name' => 'view payments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  return $permissions;
}
