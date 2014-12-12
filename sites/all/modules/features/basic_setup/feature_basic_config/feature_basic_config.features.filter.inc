<?php
/**
 * @file
 * feature_basic_config.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function feature_basic_config_filter_default_formats() {
  $formats = array();

  // Exported format: Basic HTML.
  $formats['basic_html'] = array(
    'format' => 'basic_html',
    'name' => 'Basic HTML',
    'cache' => 0,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'insert_view' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(),
      ),
      'ckeditor_link_filter' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 126,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
