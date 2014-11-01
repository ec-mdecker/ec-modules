<?php
/**
 * @file
 * feature_basic_workbench_config.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function feature_basic_workbench_config_user_default_roles() {
  $roles = array();

  // Exported role: Content Editor.
  $roles['Content Editor'] = array(
    'name' => 'Content Editor',
    'weight' => 21,
  );

  // Exported role: Content Moderator.
  $roles['Content Moderator'] = array(
    'name' => 'Content Moderator',
    'weight' => 22,
  );

  return $roles;
}
