<?php
/**
 * @file
 * views_productos.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function views_productos_ctools_plugin_api($module = NULL, $api = NULL) {
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
function views_productos_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
