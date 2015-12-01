<?php
/**
 * @file
 * hightlight_comments.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function hightlight_comments_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'hightlight_comments';
  $ds_field->label = 'Hightlight-comments';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $ds_field->ui_limit = '*|*';
  $ds_field->properties = array(
    'block' => 'views|hightlight_comments-block',
    'block_render' => '1',
  );
  $export['hightlight_comments'] = $ds_field;

  return $export;
}
