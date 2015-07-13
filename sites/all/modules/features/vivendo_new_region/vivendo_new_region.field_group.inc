<?php
/**
 * @file
 * vivendo_new_region.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function vivendo_new_region_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datos|node|constructora|form';
  $field_group->group_name = 'group_datos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'constructora';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Datos Generales',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_image',
      2 => 'field_direccion',
      3 => 'field_telefono1',
      4 => 'field_telefono_2',
      5 => 'field_telefono_3',
      6 => 'field_email',
      7 => 'field_ciudad',
      8 => 'field_regiones',
      9 => 'field_region',
      10 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-datos field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_datos|node|constructora|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datos|node|proyecto|default';
  $field_group->group_name = 'group_datos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proyecto';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Datos',
    'weight' => '5',
    'children' => array(
      0 => 'field_ciudad',
      1 => 'field_codigo',
      2 => 'field_area',
      3 => 'field_estrato',
      4 => 'field_barrio',
      5 => 'field_alcobas',
      6 => 'field_banos',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Datos',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-datos field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_datos|node|proyecto|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datos|node|proyecto|form';
  $field_group->group_name = 'group_datos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proyecto';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Datos Generales',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_codigo',
      2 => 'field_tipo',
      3 => 'field_constructora',
      4 => 'field_area',
      5 => 'field_area_privada',
      6 => 'field_area_construida',
      7 => 'field_area_balcon',
      8 => 'field_estado',
      9 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-datos field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_datos|node|proyecto|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datos|node|proyecto|full';
  $field_group->group_name = 'group_datos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proyecto';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Datos',
    'weight' => '6',
    'children' => array(
      0 => 'field_ciudad',
      1 => 'field_area',
      2 => 'field_estrato',
      3 => 'field_barrio',
      4 => 'field_alcobas',
      5 => 'field_banos',
      6 => 'field_area_privada',
      7 => 'field_area_construida',
      8 => 'field__municipios',
      9 => 'field_area_balcon',
      10 => 'field_estado',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Datos',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-datos field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_datos|node|proyecto|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_descripcion|node|proyecto|default';
  $field_group->group_name = 'group_descripcion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proyecto';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Descripción',
    'weight' => '6',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Descripción',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-descripcion field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_descripcion|node|proyecto|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_descripcion|node|proyecto|full';
  $field_group->group_name = 'group_descripcion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proyecto';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Descripción',
    'weight' => '7',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Descripción',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-descripcion field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_descripcion|node|proyecto|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_especificaciones|node|proyecto|default';
  $field_group->group_name = 'group_especificaciones';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proyecto';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Especificaciones',
    'weight' => '4',
    'children' => array(
      0 => 'field_interiores',
      1 => 'field_exteriores',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Especificaciones',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-especificaciones field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_especificaciones|node|proyecto|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_especificaciones|node|proyecto|full';
  $field_group->group_name = 'group_especificaciones';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proyecto';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Especificaciones',
    'weight' => '5',
    'children' => array(
      0 => 'field_interiores',
      1 => 'field_exteriores',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Especificaciones',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-especificaciones field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_especificaciones|node|proyecto|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header1|node|proyecto|default';
  $field_group->group_name = 'group_header1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proyecto';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_header';
  $field_group->data = array(
    'label' => 'Izquierda',
    'weight' => '0',
    'children' => array(
      0 => 'field_direccion',
      1 => 'field_zona',
      2 => 'field_tipo',
      3 => 'field_image',
      4 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Izquierda',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-header1 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_header1|node|proyecto|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header1|node|proyecto|full';
  $field_group->group_name = 'group_header1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proyecto';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_header';
  $field_group->data = array(
    'label' => 'Izquierda',
    'weight' => '2',
    'children' => array(
      0 => 'field_direccion',
      1 => 'field_zona',
      2 => 'field_tipo',
      3 => 'field_image',
      4 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Izquierda',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-header1 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_header1|node|proyecto|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header2|node|proyecto|default';
  $field_group->group_name = 'group_header2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proyecto';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_header';
  $field_group->data = array(
    'label' => 'Derecha',
    'weight' => '2',
    'children' => array(
      0 => 'field_constructora',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Derecha',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-header2 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_header2|node|proyecto|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header2|node|proyecto|full';
  $field_group->group_name = 'group_header2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proyecto';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_header';
  $field_group->data = array(
    'label' => 'Derecha',
    'weight' => '3',
    'children' => array(
      0 => 'field_constructora',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Derecha',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-header2 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_header2|node|proyecto|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|node|proyecto|default';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proyecto';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Encabezado',
    'weight' => '0',
    'children' => array(
      0 => 'group_header1',
      1 => 'group_header2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Encabezado',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-header field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_header|node|proyecto|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|node|proyecto|full';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proyecto';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Encabezado',
    'weight' => '0',
    'children' => array(
      0 => 'group_header1',
      1 => 'group_header2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Encabezado',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-header field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_header|node|proyecto|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_imagenes|node|proyecto|default';
  $field_group->group_name = 'group_imagenes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proyecto';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Imagenes',
    'weight' => '1',
    'children' => array(
      0 => 'field_precio',
      1 => 'field_fotos',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Imagenes',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-imagenes field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_imagenes|node|proyecto|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_imagenes|node|proyecto|form';
  $field_group->group_name = 'group_imagenes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proyecto';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Imagenes',
    'weight' => '4',
    'children' => array(
      0 => 'field_image',
      1 => 'field_fotos',
      2 => 'field_video',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-imagenes field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_imagenes|node|proyecto|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_imagenes|node|proyecto|full';
  $field_group->group_name = 'group_imagenes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proyecto';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Imagenes',
    'weight' => '1',
    'children' => array(
      0 => 'field_fotos',
      1 => 'field_video',
      2 => 'field_price',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Imagenes',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-imagenes field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_imagenes|node|proyecto|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_interiores|node|proyecto|form';
  $field_group->group_name = 'group_interiores';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proyecto';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Especificaciones',
    'weight' => '3',
    'children' => array(
      0 => 'field_alcobas',
      1 => 'field_banos',
      2 => 'field_interiores',
      3 => 'field_exteriores',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Especificaciones',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-interiores field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_interiores|node|proyecto|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left|node|constructora|default';
  $field_group->group_name = 'group_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'constructora';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Izquierda',
    'weight' => '1',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Izquierda',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-left field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_left|node|constructora|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_precio|node|proyecto|form';
  $field_group->group_name = 'group_precio';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proyecto';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Precio',
    'weight' => '2',
    'children' => array(
      0 => 'field_cuota_inicial',
      1 => 'field_price',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-precio field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_precio|node|proyecto|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right|node|constructora|default';
  $field_group->group_name = 'group_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'constructora';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Derecha',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_direccion',
      2 => 'field_telefono1',
      3 => 'field_telefono_2',
      4 => 'field_telefono_3',
      5 => 'field_email',
      6 => 'field_ciudad',
      7 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Derecha',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-right field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_right|node|constructora|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ubicacion|node|proyecto|form';
  $field_group->group_name = 'group_ubicacion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proyecto';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ubicación',
    'weight' => '1',
    'children' => array(
      0 => 'field_ciudad',
      1 => 'field_email',
      2 => 'field_direccion',
      3 => 'field_telefono1',
      4 => 'field_zona',
      5 => 'field_estrato',
      6 => 'field_telefono_2',
      7 => 'field_telefono_3',
      8 => 'field_barrio',
      9 => 'field_coordenadas',
      10 => 'field_descripcion_mapa',
      11 => 'field__municipios',
      12 => 'field_regiones',
      13 => 'field_region',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ubicacion field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ubicacion|node|proyecto|form'] = $field_group;

  return $export;
}
