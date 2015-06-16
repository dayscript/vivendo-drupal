<?php
/**
 * @file
 * vivendo_features_web_services.features.inc
 */

/**
 * Implements hook_views_api().
 */
function vivendo_features_web_services_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function vivendo_features_web_services_image_default_styles() {
  $styles = array();

  // Exported image style: ancho_220.
  $styles['ancho_220'] = array(
    'label' => 'Ancho 220',
    'effects' => array(
      19 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 220,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: escalar_150x87.
  $styles['escalar_150x87'] = array(
    'label' => 'Escalar 150x87',
    'effects' => array(
      16 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 87,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: escalar_169x65.
  $styles['escalar_169x65'] = array(
    'label' => 'Escalar 169x65',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 169,
          'height' => 65,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: escalar_316x250.
  $styles['escalar_316x250'] = array(
    'label' => 'Escalar 316x250',
    'effects' => array(
      18 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 316,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: images_project_app.
  $styles['images_project_app'] = array(
    'label' => 'Images project app',
    'effects' => array(
      27 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 640,
          'height' => 369,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: logos_app.
  $styles['logos_app'] = array(
    'label' => 'Project logo - app',
    'effects' => array(
      28 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 120,
          'height' => 120,
          'upscale' => 0,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: slider_product_app.
  $styles['slider_product_app'] = array(
    'label' => 'Slider images product - app',
    'effects' => array(
      34 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 282,
          'height' => 228,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
