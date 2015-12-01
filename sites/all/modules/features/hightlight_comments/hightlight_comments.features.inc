<?php
/**
 * @file
 * hightlight_comments.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hightlight_comments_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hightlight_comments_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
