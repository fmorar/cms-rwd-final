<?php
/**
 * @file
 * front_page_productos.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function front_page_productos_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "video_embed_field" && $api == "default_video_embed_styles") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function front_page_productos_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function front_page_productos_node_info() {
  $items = array(
    'front_page_productos' => array(
      'name' => t('front-page-productos'),
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
function front_page_productos_paragraphs_info() {
  $items = array(
    'basic_info_' => array(
      'name' => 'basic-info',
      'bundle' => 'basic_info_',
      'locked' => '1',
    ),
  );
  return $items;
}
