<?php
/**
 * @file
 * views_flex_slider.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function views_flex_slider_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_slide-home:node/add/slide-home
  $menu_links['navigation_slide-home:node/add/slide-home'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/slide-home',
    'router_path' => 'node/add/slide-home',
    'link_title' => 'slide-home',
    'options' => array(
      'identifier' => 'navigation_slide-home:node/add/slide-home',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('slide-home');

  return $menu_links;
}
