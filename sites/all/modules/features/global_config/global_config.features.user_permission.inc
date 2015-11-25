<?php
/**
 * @file
 * global_config.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function global_config_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete terms in categorias'.
  $permissions['delete terms in categorias'] = array(
    'name' => 'delete terms in categorias',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in categorias'.
  $permissions['edit terms in categorias'] = array(
    'name' => 'edit terms in categorias',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
