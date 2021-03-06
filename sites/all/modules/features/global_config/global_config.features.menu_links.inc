<?php
/**
 * @file
 * global_config.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function global_config_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_categorias:<nolink>
  $menu_links['main-menu_categorias:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'categorias',
    'options' => array(
      'attributes' => array(
        'title' => 'categorias',
      ),
      'identifier' => 'main-menu_categorias:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: management_taxonomy:admin/structure/taxonomy
  $menu_links['management_taxonomy:admin/structure/taxonomy'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/taxonomy',
    'router_path' => 'admin/structure/taxonomy',
    'link_title' => 'Taxonomy',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage tagging, categorization, and classification of your content.',
      ),
      'identifier' => 'management_taxonomy:admin/structure/taxonomy',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Taxonomy');
  t('categorias');

  return $menu_links;
}
