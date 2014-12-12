<?php

/**
* Implements hook_install_tasks_alter()
*
* Skips the language selection screen
*/
function ec_distro_install_tasks_alter(&$tasks, $install_state) {
  global $install_state;
  $tasks['install_select_locale']['display'] = FALSE;
  $tasks['install_select_locale']['run'] = INSTALL_TASK_SKIP;
  $install_state['parameters']['locale'] = 'en';
}