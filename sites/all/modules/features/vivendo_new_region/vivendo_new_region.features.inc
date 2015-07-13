<?php
/**
 * @file
 * vivendo_new_region.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vivendo_new_region_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function vivendo_new_region_node_info() {
  $items = array(
    'constructora' => array(
      'name' => t('Constructora'),
      'base' => 'node_content',
      'description' => t('Este tipo de contenido permite crear constructoras para asociar proyectos.'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
    'proyecto' => array(
      'name' => t('Proyecto'),
      'base' => 'node_content',
      'description' => t('Este tipo de contenido permite modelar un proyecto inmobiliario'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
