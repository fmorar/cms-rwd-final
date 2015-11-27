<?php
/**
 * @file
 * view_list_of_articles.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function view_list_of_articles_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|list_categories|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'list_categories';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_category',
      ),
    ),
    'fields' => array(
      'field_category' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|list_categories|teaser'] = $ds_layout;

  return $export;
}
