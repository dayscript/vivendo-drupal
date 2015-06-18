<?php
/**
 * @file
 * vivendo_features_web_services.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vivendo_features_web_services_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'services_by_project';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Services by project';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Services project by zones';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'views_json';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_constructora_target_id']['id'] = 'field_constructora_target_id';
  $handler->display->display_options['relationships']['field_constructora_target_id']['table'] = 'field_data_field_constructora';
  $handler->display->display_options['relationships']['field_constructora_target_id']['field'] = 'field_constructora_target_id';
  $handler->display->display_options['relationships']['field_constructora_target_id']['required'] = TRUE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'id';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Imagen */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = 'logo';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'escalar_289x66-copy',
    'image_link' => '',
  );
  /* Campo: Contenido: Imagen */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['relationship'] = 'field_constructora_target_id';
  $handler->display->display_options['fields']['field_image_1']['label'] = 'builder_logo';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'escalar_289x66-copy',
    'image_link' => '',
  );
  /* Campo: Contenido: Tipo */
  $handler->display->display_options['fields']['field_tipo']['id'] = 'field_tipo';
  $handler->display->display_options['fields']['field_tipo']['table'] = 'field_data_field_tipo';
  $handler->display->display_options['fields']['field_tipo']['field'] = 'field_tipo';
  $handler->display->display_options['fields']['field_tipo']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Dirección */
  $handler->display->display_options['fields']['field_direccion']['id'] = 'field_direccion';
  $handler->display->display_options['fields']['field_direccion']['table'] = 'field_data_field_direccion';
  $handler->display->display_options['fields']['field_direccion']['field'] = 'field_direccion';
  $handler->display->display_options['fields']['field_direccion']['label'] = 'address';
  $handler->display->display_options['fields']['field_direccion']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Precio */
  $handler->display->display_options['fields']['field_precio']['id'] = 'field_precio';
  $handler->display->display_options['fields']['field_precio']['table'] = 'field_data_field_precio';
  $handler->display->display_options['fields']['field_precio']['field'] = 'field_precio';
  $handler->display->display_options['fields']['field_precio']['label'] = 'price';
  $handler->display->display_options['fields']['field_precio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_precio']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Campo: Contenido: Fotos */
  $handler->display->display_options['fields']['field_fotos']['id'] = 'field_fotos';
  $handler->display->display_options['fields']['field_fotos']['table'] = 'field_data_field_fotos';
  $handler->display->display_options['fields']['field_fotos']['field'] = 'field_fotos';
  $handler->display->display_options['fields']['field_fotos']['label'] = 'images';
  $handler->display->display_options['fields']['field_fotos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fotos']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_fotos']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'images_project_app',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_fotos']['delta_offset'] = '0';
  /* Campo: Contenido: Coordenadas */
  $handler->display->display_options['fields']['field_coordenadas']['id'] = 'field_coordenadas';
  $handler->display->display_options['fields']['field_coordenadas']['table'] = 'field_data_field_coordenadas';
  $handler->display->display_options['fields']['field_coordenadas']['field'] = 'field_coordenadas';
  $handler->display->display_options['fields']['field_coordenadas']['label'] = 'coordinates';
  $handler->display->display_options['fields']['field_coordenadas']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_coordenadas']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_coordenadas']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_coordenadas']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coordenadas']['type'] = 'text_plain';
  /* Criterio de ordenación: Contenido: Fecha del envío */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtro contextual: Contenido: Zona (field_zona) */
  $handler->display->display_options['arguments']['field_zona_tid']['id'] = 'field_zona_tid';
  $handler->display->display_options['arguments']['field_zona_tid']['table'] = 'field_data_field_zona';
  $handler->display->display_options['arguments']['field_zona_tid']['field'] = 'field_zona_tid';
  $handler->display->display_options['arguments']['field_zona_tid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['field_zona_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_zona_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_zona_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_zona_tid']['summary_options']['items_per_page'] = '25';
  /* Criterios de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proyecto' => 'proyecto',
  );

  /* Display: Services projects by zones */
  $handler = $view->new_display('page', 'Services projects by zones', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'id';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Imagen */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = 'logo';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'escalar_289x66-copy',
    'image_link' => '',
  );
  /* Campo: Contenido: Imagen */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['relationship'] = 'field_constructora_target_id';
  $handler->display->display_options['fields']['field_image_1']['label'] = 'builder_logo';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'escalar_289x66-copy',
    'image_link' => '',
  );
  /* Campo: Contenido: Tipo */
  $handler->display->display_options['fields']['field_tipo']['id'] = 'field_tipo';
  $handler->display->display_options['fields']['field_tipo']['table'] = 'field_data_field_tipo';
  $handler->display->display_options['fields']['field_tipo']['field'] = 'field_tipo';
  $handler->display->display_options['fields']['field_tipo']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Dirección */
  $handler->display->display_options['fields']['field_direccion']['id'] = 'field_direccion';
  $handler->display->display_options['fields']['field_direccion']['table'] = 'field_data_field_direccion';
  $handler->display->display_options['fields']['field_direccion']['field'] = 'field_direccion';
  $handler->display->display_options['fields']['field_direccion']['label'] = 'address';
  $handler->display->display_options['fields']['field_direccion']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Precio */
  $handler->display->display_options['fields']['field_precio']['id'] = 'field_precio';
  $handler->display->display_options['fields']['field_precio']['table'] = 'field_data_field_precio';
  $handler->display->display_options['fields']['field_precio']['field'] = 'field_precio';
  $handler->display->display_options['fields']['field_precio']['label'] = 'price';
  $handler->display->display_options['fields']['field_precio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_precio']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Campo: Contenido: Fotos */
  $handler->display->display_options['fields']['field_fotos']['id'] = 'field_fotos';
  $handler->display->display_options['fields']['field_fotos']['table'] = 'field_data_field_fotos';
  $handler->display->display_options['fields']['field_fotos']['field'] = 'field_fotos';
  $handler->display->display_options['fields']['field_fotos']['label'] = 'images';
  $handler->display->display_options['fields']['field_fotos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fotos']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_fotos']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'images_project_app',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_fotos']['delta_offset'] = '0';
  /* Campo: Contenido: Coordenadas */
  $handler->display->display_options['fields']['field_coordenadas']['id'] = 'field_coordenadas';
  $handler->display->display_options['fields']['field_coordenadas']['table'] = 'field_data_field_coordenadas';
  $handler->display->display_options['fields']['field_coordenadas']['field'] = 'field_coordenadas';
  $handler->display->display_options['fields']['field_coordenadas']['label'] = 'coordinates';
  $handler->display->display_options['fields']['field_coordenadas']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_coordenadas']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_coordenadas']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_coordenadas']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coordenadas']['type'] = 'text_plain';
  $handler->display->display_options['path'] = 'services/projectsbyzone/%';

  /* Display: Services projects by builder */
  $handler = $view->new_display('page', 'Services projects by builder', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Services project by builder';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_constructora_target_id';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'services/projectsbybuilder/%';

  /* Display: Services projects by search */
  $handler = $view->new_display('page', 'Services projects by search', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Services project by search';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'id';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Imagen */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = 'logo';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'escalar_289x66-copy',
    'image_link' => '',
  );
  /* Campo: Contenido: Imagen */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['relationship'] = 'field_constructora_target_id';
  $handler->display->display_options['fields']['field_image_1']['label'] = 'builder_logo';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'escalar_289x66-copy',
    'image_link' => '',
  );
  /* Campo: Contenido: Tipo */
  $handler->display->display_options['fields']['field_tipo']['id'] = 'field_tipo';
  $handler->display->display_options['fields']['field_tipo']['table'] = 'field_data_field_tipo';
  $handler->display->display_options['fields']['field_tipo']['field'] = 'field_tipo';
  $handler->display->display_options['fields']['field_tipo']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Precio */
  $handler->display->display_options['fields']['field_precio']['id'] = 'field_precio';
  $handler->display->display_options['fields']['field_precio']['table'] = 'field_data_field_precio';
  $handler->display->display_options['fields']['field_precio']['field'] = 'field_precio';
  $handler->display->display_options['fields']['field_precio']['label'] = 'price';
  $handler->display->display_options['fields']['field_precio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_precio']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_constructora_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'builder_titulo';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_constructora_target_id';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filtro contextual: Contenido: Tipo (field_tipo) */
  $handler->display->display_options['arguments']['field_tipo_tid']['id'] = 'field_tipo_tid';
  $handler->display->display_options['arguments']['field_tipo_tid']['table'] = 'field_data_field_tipo';
  $handler->display->display_options['arguments']['field_tipo_tid']['field'] = 'field_tipo_tid';
  $handler->display->display_options['arguments']['field_tipo_tid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['field_tipo_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_tipo_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_tipo_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_tipo_tid']['summary_options']['items_per_page'] = '25';
  /* Filtro contextual: Contenido: Zona (field_zona) */
  $handler->display->display_options['arguments']['field_zona_tid']['id'] = 'field_zona_tid';
  $handler->display->display_options['arguments']['field_zona_tid']['table'] = 'field_data_field_zona';
  $handler->display->display_options['arguments']['field_zona_tid']['field'] = 'field_zona_tid';
  $handler->display->display_options['arguments']['field_zona_tid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['field_zona_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_zona_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_zona_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_zona_tid']['summary_options']['items_per_page'] = '25';
  /* Filtro contextual: Contenido: Precio (field_precio) */
  $handler->display->display_options['arguments']['field_precio_value']['id'] = 'field_precio_value';
  $handler->display->display_options['arguments']['field_precio_value']['table'] = 'field_data_field_precio';
  $handler->display->display_options['arguments']['field_precio_value']['field'] = 'field_precio_value';
  $handler->display->display_options['arguments']['field_precio_value']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['field_precio_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_precio_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_precio_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_precio_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'services/projectssearch/%/%/%/%';

  /* Display: Services project detail */
  $handler = $view->new_display('page', 'Services project detail', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Services project detail';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'id';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Imagen */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = 'logo';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'logos_app',
    'image_link' => '',
  );
  /* Campo: Contenido: Imagen */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['relationship'] = 'field_constructora_target_id';
  $handler->display->display_options['fields']['field_image_1']['label'] = 'builder_logo';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'escalar_289x66-copy',
    'image_link' => '',
  );
  /* Campo: Contenido: Tipo */
  $handler->display->display_options['fields']['field_tipo']['id'] = 'field_tipo';
  $handler->display->display_options['fields']['field_tipo']['table'] = 'field_data_field_tipo';
  $handler->display->display_options['fields']['field_tipo']['field'] = 'field_tipo';
  $handler->display->display_options['fields']['field_tipo']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Dirección */
  $handler->display->display_options['fields']['field_direccion']['id'] = 'field_direccion';
  $handler->display->display_options['fields']['field_direccion']['table'] = 'field_data_field_direccion';
  $handler->display->display_options['fields']['field_direccion']['field'] = 'field_direccion';
  $handler->display->display_options['fields']['field_direccion']['label'] = 'address';
  $handler->display->display_options['fields']['field_direccion']['element_label_colon'] = FALSE;
  /* Campo: Campo: Teléfono */
  $handler->display->display_options['fields']['field_telefono1']['id'] = 'field_telefono1';
  $handler->display->display_options['fields']['field_telefono1']['table'] = 'field_data_field_telefono1';
  $handler->display->display_options['fields']['field_telefono1']['field'] = 'field_telefono1';
  $handler->display->display_options['fields']['field_telefono1']['label'] = 'phone';
  $handler->display->display_options['fields']['field_telefono1']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Barrio */
  $handler->display->display_options['fields']['field_barrio']['id'] = 'field_barrio';
  $handler->display->display_options['fields']['field_barrio']['table'] = 'field_data_field_barrio';
  $handler->display->display_options['fields']['field_barrio']['field'] = 'field_barrio';
  $handler->display->display_options['fields']['field_barrio']['label'] = 'barrio';
  /* Campo: Contenido: Estrato */
  $handler->display->display_options['fields']['field_estrato']['id'] = 'field_estrato';
  $handler->display->display_options['fields']['field_estrato']['table'] = 'field_data_field_estrato';
  $handler->display->display_options['fields']['field_estrato']['field'] = 'field_estrato';
  $handler->display->display_options['fields']['field_estrato']['label'] = 'estrato';
  /* Campo: Contenido: Alcobas */
  $handler->display->display_options['fields']['field_alcobas']['id'] = 'field_alcobas';
  $handler->display->display_options['fields']['field_alcobas']['table'] = 'field_data_field_alcobas';
  $handler->display->display_options['fields']['field_alcobas']['field'] = 'field_alcobas';
  $handler->display->display_options['fields']['field_alcobas']['label'] = 'habitaciones';
  $handler->display->display_options['fields']['field_alcobas']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Baños */
  $handler->display->display_options['fields']['field_banos']['id'] = 'field_banos';
  $handler->display->display_options['fields']['field_banos']['table'] = 'field_data_field_banos';
  $handler->display->display_options['fields']['field_banos']['field'] = 'field_banos';
  $handler->display->display_options['fields']['field_banos']['label'] = 'banos';
  $handler->display->display_options['fields']['field_banos']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Area construida desde */
  $handler->display->display_options['fields']['field_area_construida']['id'] = 'field_area_construida';
  $handler->display->display_options['fields']['field_area_construida']['table'] = 'field_data_field_area_construida';
  $handler->display->display_options['fields']['field_area_construida']['field'] = 'field_area_construida';
  $handler->display->display_options['fields']['field_area_construida']['label'] = 'area_construida';
  $handler->display->display_options['fields']['field_area_construida']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_area_construida']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Campo: Contenido: Area privada desde */
  $handler->display->display_options['fields']['field_area_privada']['id'] = 'field_area_privada';
  $handler->display->display_options['fields']['field_area_privada']['table'] = 'field_data_field_area_privada';
  $handler->display->display_options['fields']['field_area_privada']['field'] = 'field_area_privada';
  $handler->display->display_options['fields']['field_area_privada']['label'] = 'area_privada';
  $handler->display->display_options['fields']['field_area_privada']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Campo: Contenido: Precio */
  $handler->display->display_options['fields']['field_precio']['id'] = 'field_precio';
  $handler->display->display_options['fields']['field_precio']['table'] = 'field_data_field_precio';
  $handler->display->display_options['fields']['field_precio']['field'] = 'field_precio';
  $handler->display->display_options['fields']['field_precio']['label'] = 'price';
  $handler->display->display_options['fields']['field_precio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_precio']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Campo: Contenido: Características Interiores */
  $handler->display->display_options['fields']['field_interiores']['id'] = 'field_interiores';
  $handler->display->display_options['fields']['field_interiores']['table'] = 'field_data_field_interiores';
  $handler->display->display_options['fields']['field_interiores']['field'] = 'field_interiores';
  $handler->display->display_options['fields']['field_interiores']['label'] = 'interior_features';
  $handler->display->display_options['fields']['field_interiores']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_interiores']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_interiores']['delta_offset'] = '0';
  /* Campo: Contenido: Características Exteriores */
  $handler->display->display_options['fields']['field_exteriores']['id'] = 'field_exteriores';
  $handler->display->display_options['fields']['field_exteriores']['table'] = 'field_data_field_exteriores';
  $handler->display->display_options['fields']['field_exteriores']['field'] = 'field_exteriores';
  $handler->display->display_options['fields']['field_exteriores']['label'] = 'exterior_features';
  $handler->display->display_options['fields']['field_exteriores']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exteriores']['delta_offset'] = '0';
  /* Campo: Contenido: Fotos */
  $handler->display->display_options['fields']['field_fotos']['id'] = 'field_fotos';
  $handler->display->display_options['fields']['field_fotos']['table'] = 'field_data_field_fotos';
  $handler->display->display_options['fields']['field_fotos']['field'] = 'field_fotos';
  $handler->display->display_options['fields']['field_fotos']['label'] = 'images';
  $handler->display->display_options['fields']['field_fotos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fotos']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_fotos']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'flexslider_full',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_fotos']['delta_offset'] = '0';
  /* Campo: Contenido: Coordenadas */
  $handler->display->display_options['fields']['field_coordenadas']['id'] = 'field_coordenadas';
  $handler->display->display_options['fields']['field_coordenadas']['table'] = 'field_data_field_coordenadas';
  $handler->display->display_options['fields']['field_coordenadas']['field'] = 'field_coordenadas';
  $handler->display->display_options['fields']['field_coordenadas']['label'] = 'coordinates';
  $handler->display->display_options['fields']['field_coordenadas']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_coordenadas']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_coordenadas']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_coordenadas']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Contenido */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'description';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'services/project/%';

  /* Display: Services builder */
  $handler = $view->new_display('page', 'Services builder', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Services builder';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'id';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenido: Imagen */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = 'logo';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'escalar_169x65',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'constructora' => 'constructora',
  );
  $handler->display->display_options['path'] = 'services/builders';

  /* Display: Services builder by city */
  $handler = $view->new_display('page', 'Services builder by city', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Services builder by city';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'id';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Imagen */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = 'logo';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'escalar_289x66-copy',
    'image_link' => '',
  );
  /* Campo: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'count_project';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

$query = db_select(\'node\', \'c\')
  ->fields(\'c\', array(\'nid\'))
  ->condition(\'c.nid\', $data->nid, \'=\')
  ->condition(\'c.type\', \'constructora\', \'=\')
  ->condition(\'c.status\', \'1\', \'=\');

$query->leftJoin( \'field_data_field_constructora\', \'fc\', \'(fc.field_constructora_target_id = c.nid)\' );
$query->fields(\'fc\', array(\'entity_id\'));

$query->leftJoin( \'node\', \'p\', \'(p.nid = fc.entity_id)\' );
$query->condition(\'p.status\', \'1\', \'=\');
$query->condition(\'p.type\', \'proyecto\', \'=\');

$result = $query->execute()->rowCount();

echo ($result > 0) ? \'1\' : \'0\';

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Contenido: Ciudad (field_ciudad) */
  $handler->display->display_options['arguments']['field_ciudad_tid']['id'] = 'field_ciudad_tid';
  $handler->display->display_options['arguments']['field_ciudad_tid']['table'] = 'field_data_field_ciudad';
  $handler->display->display_options['arguments']['field_ciudad_tid']['field'] = 'field_ciudad_tid';
  $handler->display->display_options['arguments']['field_ciudad_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ciudad_tid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['field_ciudad_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_ciudad_tid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_ciudad_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ciudad_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ciudad_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_ciudad_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'constructora' => 'constructora',
  );
  $handler->display->display_options['path'] = 'services/buildersbycity/%';
  $translatables['services_by_project'] = array(
    t('Master'),
    t('Services project by zones'),
    t('más'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('Contenido entidad referenciada de field_constructora'),
    t('id'),
    t('logo'),
    t('builder_logo'),
    t('Tipo'),
    t('address'),
    t('price'),
    t('images'),
    t('coordinates'),
    t('Todo(s)'),
    t('Services projects by zones'),
    t('Services projects by builder'),
    t('Services project by builder'),
    t('Services projects by search'),
    t('Services project by search'),
    t('builder_titulo'),
    t('Services project detail'),
    t('phone'),
    t('barrio'),
    t('estrato'),
    t('habitaciones'),
    t('banos'),
    t('area_construida'),
    t('area_privada'),
    t('interior_features'),
    t('exterior_features'),
    t('description'),
    t('Services builder'),
    t('name'),
    t('Services builder by city'),
    t('count_project'),
  );
  $export['services_by_project'] = $view;

  $view = new view();
  $view->name = 'services_type';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'services type';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Services types';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_json';
  /* Relación: Término de taxonomía: Término padre */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['required'] = TRUE;
  /* Campo: Término de taxonomía: ID del término */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = 'id';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'título';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Filtro contextual: Término de taxonomía: Término padre */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  /* Criterios de filtrado: Vocabulario de taxonomía: Nombre de sistema */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'ciudades' => 'ciudades',
  );

  /* Display: Service types */
  $handler = $view->new_display('page', 'Service types', 'page');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Vocabulario de taxonomía: Nombre de sistema */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'tipo_de_proyecto' => 'tipo_de_proyecto',
  );
  $handler->display->display_options['path'] = 'services/types';

  /* Display: Services cities */
  $handler = $view->new_display('page', 'Services cities', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Services cities';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Término de taxonomía: ID del término */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = 'id';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Campo: Término de taxonomía: Descripción del término */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = 'imagen';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'services/cities';

  /* Display: Services prices */
  $handler = $view->new_display('page', 'Services prices', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Services prices';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Término de taxonomía: ID del término */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = 'id';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Campo: Término de taxonomía: Descripción del término */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = 'name';
  $handler->display->display_options['fields']['description']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Vocabulario de taxonomía: Nombre de sistema */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'rango_de_precios' => 'rango_de_precios',
  );
  $handler->display->display_options['path'] = 'services/prices';

  /* Display: Services zones  */
  $handler = $view->new_display('page', 'Services zones ', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Services zones';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Término de taxonomía: Término padre */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Término de taxonomía: ID del término */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = 'id';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Término de taxonomía: Término padre */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Vocabulario de taxonomía: Nombre de sistema */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'zonas' => 'zonas',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Criterios de filtrado: Término de taxonomía: Término padre */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['operator'] = '>';
  $handler->display->display_options['filters']['parent']['value']['value'] = '0';
  $handler->display->display_options['filters']['parent']['group'] = 1;
  $handler->display->display_options['path'] = 'services/zones/%';

  /* Display: Services cities */
  $handler = $view->new_display('page', 'Services cities', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Services cities';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Término de taxonomía: Término padre */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Término de taxonomía: ID del término */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = 'id';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Campo: Término de taxonomía: Descripción del término */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = 'imagen';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio de ordenación: Término de taxonomía: Nombre */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Vocabulario de taxonomía: Nombre de sistema */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'zonas' => 'zonas',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Criterios de filtrado: Término de taxonomía: Término padre */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['relationship'] = 'parent';
  $handler->display->display_options['filters']['parent']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'services/cities';
  $translatables['services_type'] = array(
    t('Master'),
    t('Services types'),
    t('más'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('Padre'),
    t('id'),
    t('.'),
    t(','),
    t('título'),
    t('Todo(s)'),
    t('Service types'),
    t('Services cities'),
    t('name'),
    t('imagen'),
    t('Services prices'),
    t('Services zones '),
    t('Services zones'),
  );
  $export['services_type'] = $view;

  return $export;
}
