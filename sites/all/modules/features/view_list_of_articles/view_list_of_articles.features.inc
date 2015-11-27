<?php
/**
 * @file
 * view_list_of_articles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function view_list_of_articles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function view_list_of_articles_node_info() {
  $items = array(
    'list_categories' => array(
      'name' => t('list-categories'),
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
