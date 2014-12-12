<?php
/**
 * @file
 * feature_basic_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_basic_event_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_basic_event_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_date_custom_date_formats().
 */
function feature_basic_event_fe_date_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['g:i A'] = 'g:i A';
  $custom_date_formats['n/j/y'] = 'n/j/y';
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function feature_basic_event_date_format_types() {
  $format_types = array();
  // Exported date format type: date_only
  $format_types['date_only'] = 'Date Only';
  // Exported date format type: simple_date
  $format_types['simple_date'] = 'Simple Date';
  // Exported date format type: time_only
  $format_types['time_only'] = 'Time Only';
  return $format_types;
}

/**
 * Implements hook_node_info().
 */
function feature_basic_event_node_info() {
  $items = array(
    'basic_event' => array(
      'name' => t('Basic Event'),
      'base' => 'node_content',
      'description' => t('Basic event type to be used in a calendar.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
