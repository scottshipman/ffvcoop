<?php
/**
 * @file
 * ffvcoop_configuration.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ffvcoop_configuration_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: employee.
  $roles['employee'] = array(
    'name' => 'employee',
    'weight' => 3,
  );

  // Exported role: manager.
  $roles['manager'] = array(
    'name' => 'manager',
    'weight' => 4,
  );

  return $roles;
}
