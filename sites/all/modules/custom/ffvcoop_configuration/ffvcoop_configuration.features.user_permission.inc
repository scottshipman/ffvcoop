<?php
/**
 * @file
 * ffvcoop_configuration.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ffvcoop_configuration_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'employee' => 'employee',
      'manager' => 'manager',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'employee' => 'employee',
      'manager' => 'manager',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access overlay'.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'overlay',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer honeypot'.
  $permissions['administer honeypot'] = array(
    'name' => 'administer honeypot',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'honeypot',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views_send'.
  $permissions['administer views_send'] = array(
    'name' => 'administer views_send',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views_send',
  );

  // Exported permission: 'attachments with views_send'.
  $permissions['attachments with views_send'] = array(
    'name' => 'attachments with views_send',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views_send',
  );

  // Exported permission: 'bypass honeypot protection'.
  $permissions['bypass honeypot protection'] = array(
    'name' => 'bypass honeypot protection',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'honeypot',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create administration_page content'.
  $permissions['create administration_page content'] = array(
    'name' => 'create administration_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create basket content'.
  $permissions['create basket content'] = array(
    'name' => 'create basket content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create customer content'.
  $permissions['create customer content'] = array(
    'name' => 'create customer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any administration_page content'.
  $permissions['delete any administration_page content'] = array(
    'name' => 'delete any administration_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any basket content'.
  $permissions['delete any basket content'] = array(
    'name' => 'delete any basket content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any customer content'.
  $permissions['delete any customer content'] = array(
    'name' => 'delete any customer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own administration_page content'.
  $permissions['delete own administration_page content'] = array(
    'name' => 'delete own administration_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own basket content'.
  $permissions['delete own basket content'] = array(
    'name' => 'delete own basket content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own customer content'.
  $permissions['delete own customer content'] = array(
    'name' => 'delete own customer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'eck add bundles'.
  $permissions['eck add bundles'] = array(
    'name' => 'eck add bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add customer_order bundles'.
  $permissions['eck add customer_order bundles'] = array(
    'name' => 'eck add customer_order bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add customer_order customer_order entities'.
  $permissions['eck add customer_order customer_order entities'] = array(
    'name' => 'eck add customer_order customer_order entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add customer_order order_line_item entities'.
  $permissions['eck add customer_order order_line_item entities'] = array(
    'name' => 'eck add customer_order order_line_item entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add entities'.
  $permissions['eck add entities'] = array(
    'name' => 'eck add entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add pickup_date bundles'.
  $permissions['eck add pickup_date bundles'] = array(
    'name' => 'eck add pickup_date bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add pickup_date pickup_date entities'.
  $permissions['eck add pickup_date pickup_date entities'] = array(
    'name' => 'eck add pickup_date pickup_date entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer bundles'.
  $permissions['eck administer bundles'] = array(
    'name' => 'eck administer bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer customer_order bundles'.
  $permissions['eck administer customer_order bundles'] = array(
    'name' => 'eck administer customer_order bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer customer_order customer_order entities'.
  $permissions['eck administer customer_order customer_order entities'] = array(
    'name' => 'eck administer customer_order customer_order entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer customer_order order_line_item entities'.
  $permissions['eck administer customer_order order_line_item entities'] = array(
    'name' => 'eck administer customer_order order_line_item entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer entities'.
  $permissions['eck administer entities'] = array(
    'name' => 'eck administer entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer pickup_date bundles'.
  $permissions['eck administer pickup_date bundles'] = array(
    'name' => 'eck administer pickup_date bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer pickup_date pickup_date entities'.
  $permissions['eck administer pickup_date pickup_date entities'] = array(
    'name' => 'eck administer pickup_date pickup_date entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete bundles'.
  $permissions['eck delete bundles'] = array(
    'name' => 'eck delete bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete customer_order bundles'.
  $permissions['eck delete customer_order bundles'] = array(
    'name' => 'eck delete customer_order bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete customer_order customer_order entities'.
  $permissions['eck delete customer_order customer_order entities'] = array(
    'name' => 'eck delete customer_order customer_order entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete customer_order order_line_item entities'.
  $permissions['eck delete customer_order order_line_item entities'] = array(
    'name' => 'eck delete customer_order order_line_item entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete entities'.
  $permissions['eck delete entities'] = array(
    'name' => 'eck delete entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete pickup_date bundles'.
  $permissions['eck delete pickup_date bundles'] = array(
    'name' => 'eck delete pickup_date bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete pickup_date pickup_date entities'.
  $permissions['eck delete pickup_date pickup_date entities'] = array(
    'name' => 'eck delete pickup_date pickup_date entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit bundles'.
  $permissions['eck edit bundles'] = array(
    'name' => 'eck edit bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit customer_order bundles'.
  $permissions['eck edit customer_order bundles'] = array(
    'name' => 'eck edit customer_order bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit customer_order customer_order entities'.
  $permissions['eck edit customer_order customer_order entities'] = array(
    'name' => 'eck edit customer_order customer_order entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit customer_order order_line_item entities'.
  $permissions['eck edit customer_order order_line_item entities'] = array(
    'name' => 'eck edit customer_order order_line_item entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit entities'.
  $permissions['eck edit entities'] = array(
    'name' => 'eck edit entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit pickup_date bundles'.
  $permissions['eck edit pickup_date bundles'] = array(
    'name' => 'eck edit pickup_date bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit pickup_date pickup_date entities'.
  $permissions['eck edit pickup_date pickup_date entities'] = array(
    'name' => 'eck edit pickup_date pickup_date entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list bundles'.
  $permissions['eck list bundles'] = array(
    'name' => 'eck list bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list customer_order bundles'.
  $permissions['eck list customer_order bundles'] = array(
    'name' => 'eck list customer_order bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list customer_order customer_order entities'.
  $permissions['eck list customer_order customer_order entities'] = array(
    'name' => 'eck list customer_order customer_order entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list customer_order order_line_item entities'.
  $permissions['eck list customer_order order_line_item entities'] = array(
    'name' => 'eck list customer_order order_line_item entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list entities'.
  $permissions['eck list entities'] = array(
    'name' => 'eck list entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list pickup_date bundles'.
  $permissions['eck list pickup_date bundles'] = array(
    'name' => 'eck list pickup_date bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list pickup_date pickup_date entities'.
  $permissions['eck list pickup_date pickup_date entities'] = array(
    'name' => 'eck list pickup_date pickup_date entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view customer_order bundles'.
  $permissions['eck view customer_order bundles'] = array(
    'name' => 'eck view customer_order bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view customer_order customer_order entities'.
  $permissions['eck view customer_order customer_order entities'] = array(
    'name' => 'eck view customer_order customer_order entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view customer_order order_line_item entities'.
  $permissions['eck view customer_order order_line_item entities'] = array(
    'name' => 'eck view customer_order order_line_item entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view entities'.
  $permissions['eck view entities'] = array(
    'name' => 'eck view entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view pickup_date bundles'.
  $permissions['eck view pickup_date bundles'] = array(
    'name' => 'eck view pickup_date bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view pickup_date pickup_date entities'.
  $permissions['eck view pickup_date pickup_date entities'] = array(
    'name' => 'eck view pickup_date pickup_date entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'edit any administration_page content'.
  $permissions['edit any administration_page content'] = array(
    'name' => 'edit any administration_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any basket content'.
  $permissions['edit any basket content'] = array(
    'name' => 'edit any basket content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any customer content'.
  $permissions['edit any customer content'] = array(
    'name' => 'edit any customer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit mimemail user settings'.
  $permissions['edit mimemail user settings'] = array(
    'name' => 'edit mimemail user settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'edit own administration_page content'.
  $permissions['edit own administration_page content'] = array(
    'name' => 'edit own administration_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'employee' => 'employee',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own basket content'.
  $permissions['edit own basket content'] = array(
    'name' => 'edit own basket content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own customer content'.
  $permissions['edit own customer content'] = array(
    'name' => 'edit own customer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'ffvcoop_admin'.
  $permissions['ffvcoop_admin'] = array(
    'name' => 'ffvcoop_admin',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ffvcoop_new_user',
  );

  // Exported permission: 'manage pickup_date properties'.
  $permissions['manage pickup_date properties'] = array(
    'name' => 'manage pickup_date properties',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'mass mailing with views_send'.
  $permissions['mass mailing with views_send'] = array(
    'name' => 'mass mailing with views_send',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views_send',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
      'employee' => 'employee',
      'manager' => 'manager',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
