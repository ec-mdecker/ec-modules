<?php
/**
 * @file
 * feature_basic_content.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function feature_basic_content_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_available_views'
  $field_bases['field_available_views'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_available_views',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'insert_view_gen',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'insert_view_generator',
  );

  // Exported field_base: 'field_basic_block_settings'
  $field_bases['field_basic_block_settings'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_basic_block_settings',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'menu_block_placement',
    'settings' => array(
      'default_menus' => array(
        0 => 0,
        'devel' => 0,
        'main-menu' => 'main-menu',
        'management' => 0,
        'navigation' => 0,
        'user-menu' => 0,
      ),
      'default_selects' => array(
        'individ' => 'individ',
        'region' => 'region',
      ),
    ),
    'translatable' => 0,
    'type' => 'menu_block_placement_reference',
  );

  // Exported field_base: 'field_basic_slideshow_assignment'
  $field_bases['field_basic_slideshow_assignment'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_basic_slideshow_assignment',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'menu_block_placement',
    'settings' => array(
      'allowed_values' => array(),
      'allowed_values_function' => '',
      'default_menus' => array(
        'main-menu' => 'main-menu',
        'management' => 0,
        'navigation' => 0,
        'user-menu' => 0,
      ),
      'default_selects' => array(
        'individ' => 0,
        'region' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'menu_block_placement_reference',
  );

  // Exported field_base: 'field_basic_slideshow_caption'
  $field_bases['field_basic_slideshow_caption'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_basic_slideshow_caption',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_basic_slideshow_images'
  $field_bases['field_basic_slideshow_images'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_basic_slideshow_images',
    'foreign keys' => array(),
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_slideshow_image'
  $field_bases['field_slideshow_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_slideshow_image',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_slideshow_image_link'
  $field_bases['field_slideshow_image_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_slideshow_image_link',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  return $field_bases;
}
