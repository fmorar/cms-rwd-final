<?php
/**
 * @file
 * views_high_products.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_high_products_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'high_products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'high-products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Hightlight Products';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'reladed-products max-content';
  /* Field: Content: images-book */
  $handler->display->display_options['fields']['field_images_book']['id'] = 'field_images_book';
  $handler->display->display_options['fields']['field_images_book']['table'] = 'field_data_field_images_book';
  $handler->display->display_options['fields']['field_images_book']['field'] = 'field_images_book';
  $handler->display->display_options['fields']['field_images_book']['label'] = '';
  $handler->display->display_options['fields']['field_images_book']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images_book']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_images_book']['element_wrapper_class'] = 'reladed-products max-content';
  $handler->display->display_options['fields']['field_images_book']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images_book']['settings'] = array(
    'image_style' => 'thumbnail_retina',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_images_book']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_images_book']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_images_book']['separator'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'front_page_productos' => 'front_page_productos',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $export['high_products'] = $view;

  return $export;
}
