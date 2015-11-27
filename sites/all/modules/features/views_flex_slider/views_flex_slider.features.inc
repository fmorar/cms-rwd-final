<?php
/**
 * @file
 * views_flex_slider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function views_flex_slider_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function views_flex_slider_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function views_flex_slider_image_default_styles() {
  $styles = array();

  // Exported image style: img-slide-home.
  $styles['img-slide-home'] = array(
    'label' => 'img-slide-home',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 400,
          'retinafy' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function views_flex_slider_node_info() {
  $items = array(
    'slide_home' => array(
      'name' => t('slide-home'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function views_flex_slider_paragraphs_info() {
  $items = array(
    'slider_info' => array(
      'name' => 'slider-info',
      'bundle' => 'slider_info',
      'locked' => '1',
    ),
  );
  return $items;
}
