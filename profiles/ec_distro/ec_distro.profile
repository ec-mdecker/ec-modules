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


/*
* Implements hook_form_install_configure_form_alter().
*
* Sets the site configure settings for simplicity.
*/
function ec_distro_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name and email address.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
  $form['site_information']['site_mail']['#default_value'] = 'admin@eaglecrk.com';
  // Account information defaults
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['admin_account']['account']['mail']['#default_value'] = 'admin@eaglecrk.com';
  // Date/time settings
  $form['server_settings']['site_default_country']['#default_value'] = 'US';
}