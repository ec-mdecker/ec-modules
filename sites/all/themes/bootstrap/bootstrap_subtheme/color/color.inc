<?php

// Put the logo path into JavaScript for the live preview.
//drupal_add_js(array('color' => array('logo' => theme_get_setting('logo', 'test'))), 'setting');

$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'header' => t('Header text'),
    'menu' => t('Menu background'),
    'menu_text' => t('Menu text'),
    'bg' => t('Background'),
    'schedule' => t('Schedule block'),
    'email' => t('Email block'),
    'text' => t('Text'),
    'link' => t('Link'),
    'base' => t('Base color'),
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('Blue Lagoon (default)'),
      'colors' => array(
        'header' => '#cb0000',
        'menu' => '#ffffff',
        'menu_text' => '#536883',
        'bg' => '#fffff1',
        'schedule' => '#f79537',
        'email' => '#00b6de',
        'text' => '#333333',
        'link' => '#6B8ccf',
        'base' => '#ffffff',
      ),
    ),
  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'css/colors.css',
  ),

  // Files to copy.
  'copy' => array(
    'logo.png',
  ),

  // Gradient definitions.
  'gradients' => array(
    array(
        // (x, y, width, height).
        'dimension' => array(0, 0, 0, 0),
        // Direction of gradient ('vertical' or 'horizontal').
        'direction' => 'vertical',
        // Keys of colors to use for the gradient.
        'colors' => array('top', 'bottom'),
      ),
    ),

  // Color areas to fill (x, y, width, height).
  'fill' => array(),

  // Coordinates of all the theme slices (x, y, width, height)
  // with their filename as used in the stylesheet.
  'slices' => array(),

  // Reference color used for blending. Matches the base.png's colors.
  'blend_target' => '#ffffff',

  // Preview files.
  'preview_css' => 'color/preview.css',
  'preview_html' => 'color/preview.html',
  'preview_js' => 'color/preview.js',
  
  // Base file for image generation.
  'base_image' => 'color/base.png',
);
