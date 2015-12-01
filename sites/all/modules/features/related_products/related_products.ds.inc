<?php
/**
 * @file
 * related_products.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function related_products_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'related_item';
  $ds_field->label = 'related_item';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|related_products-block',
    'block_render' => '1',
  );
  $export['related_item'] = $ds_field;

  return $export;
}
