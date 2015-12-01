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
    'related_item' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_gender' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'h4',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
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
          'fi-cl' => 'publisher',
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
    'field_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'p',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'description',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'p',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
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
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_gender',
        1 => 'title',
      ),
      'left' => array(
        2 => 'field_images_book',
      ),
      'right' => array(
        3 => 'field_base_info',
      ),
      'footer' => array(
        4 => 'field_video_book',
        5 => 'related_item',
        6 => 'comments',
        7 => 'field_related_products',
      ),
    ),
    'fields' => array(
      'field_gender' => 'header',
      'title' => 'header',
      'field_images_book' => 'left',
      'field_base_info' => 'right',
      'field_video_book' => 'footer',
      'related_item' => 'footer',
      'comments' => 'footer',
      'field_related_products' => 'footer',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
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
        0 => 'field_precio_',
        1 => 'field_editorial',
        2 => 'field_rating',
        3 => 'field_add_to_cart',
        4 => 'field_description',
      ),
    ),
    'fields' => array(
      'field_precio_' => 'ds_content',
      'field_editorial' => 'ds_content',
      'field_rating' => 'ds_content',
      'field_add_to_cart' => 'ds_content',
      'field_description' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        'basic-info' => 'basic-info',
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
