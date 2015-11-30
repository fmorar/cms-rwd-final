<?php
/**
 * @file
 * front_page_productos.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function front_page_productos_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|front_page_productos|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'front_page_productos';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|front_page_productos|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|basic_info_|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'basic_info_';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_editorial' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'p',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'author',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_precio_' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'p',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'price',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_add_to_cart' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-cl' => 'btn btn-add',
        ),
      ),
    ),
    'field_rating' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-cl' => 'stars-ranking',
        ),
      ),
    ),
  );
  $export['paragraphs_item|basic_info_|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function front_page_productos_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|front_page_productos|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'front_page_productos';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_gender',
        1 => 'field_autor_',
        2 => 'field_images_book',
        3 => 'field_base_info',
        4 => 'field_descripcion',
        5 => 'field_video_book',
        6 => 'comments',
      ),
    ),
    'fields' => array(
      'field_gender' => 'ds_content',
      'field_autor_' => 'ds_content',
      'field_images_book' => 'ds_content',
      'field_base_info' => 'ds_content',
      'field_descripcion' => 'ds_content',
      'field_video_book' => 'ds_content',
      'comments' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|front_page_productos|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|basic_info_|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'basic_info_';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_editorial',
        1 => 'field_precio_',
        2 => 'field_add_to_cart',
        3 => 'field_rating',
      ),
    ),
    'fields' => array(
      'field_editorial' => 'ds_content',
      'field_precio_' => 'ds_content',
      'field_add_to_cart' => 'ds_content',
      'field_rating' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|basic_info_|default'] = $ds_layout;

  return $export;
}
