<?php
/**
 * @file
 * related_products.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function related_products_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}
