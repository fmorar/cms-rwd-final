<?php
/**
 * @file
 * view_list_of_articles.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function view_list_of_articles_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|list_categories|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'list_categories';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_category' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-cl' => 'categories',
        ),
      ),
    ),
  );
  $export['node|list_categories|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|list_categories|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'list_categories';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_category' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-cl' => 'categories',
        ),
      ),
    ),
  );
  $export['node|list_categories|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|categories_preview|full';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'categories_preview';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-cl' => 'category-cover',
        ),
      ),
    ),
    'field_title_category' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'h3',
          'lb-cl' => 'title-category',
        ),
      ),
    ),
  );
  $export['paragraphs_item|categories_preview|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function view_list_of_articles_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|list_categories|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'list_categories';
  $ds_layout->view_mode = 'default';
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
  $export['node|list_categories|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|list_categories|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'list_categories';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_category',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_category' => 'ds_content',
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
  $export['node|list_categories|full'] = $ds_layout;

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
        0 => 'title',
        1 => 'field_category',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_category' => 'ds_content',
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
  $export['node|list_categories|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|categories_preview|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'categories_preview';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col_wrapper';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
        1 => 'field_title_category',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
      'field_title_category' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
      'ds_content' => array(
        'category' => 'category',
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
  $export['paragraphs_item|categories_preview|full'] = $ds_layout;

  return $export;
}
