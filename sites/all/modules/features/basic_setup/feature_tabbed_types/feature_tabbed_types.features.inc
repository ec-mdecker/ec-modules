<?php
/**
 * @file
 * feature_tabbed_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_tabbed_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_tabbed_types_node_info() {
  $items = array(
    'basic_tabbed_block' => array(
      'name' => t('Basic Tabbed Block'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'basic_tabbed_page' => array(
      'name' => t('Basic Tabbed Page'),
      'base' => 'node_content',
      'description' => t('A page that allows tabs at the top.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
