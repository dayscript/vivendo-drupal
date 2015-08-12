<?php

  function vivendo_views_projects_views_data_alter( &$data ){
    
    $data['node']['views_projects'] = array(
        'title' => 'visitas por proyecto',
        'help'  => 'Numero de visitas por proyecto',
        'field' => array(
            'handler' => 'vivendoViewsProjects'
        )
    );
    
  }
  
  
  class vivendoViewsProjects extends views_handler_field_entity {
    
    function render( $row ){
      
      $query = db_select( 'vivendo_views_projects', 'vp' )
          ->fields('vp')
          ->condition( 'entity_id', $row->nid, '=' );
      
      if ( isset($_REQUEST['changed']) ){
        $dates = $_REQUEST['changed'];
        if ( !empty($dates['min']) ){
          $min = strtotime((string)$dates['min']);
          $max = strtotime((string)$dates['max']);
          $query->condition( 'created', array($min, $max), 'BETWEEN' );
        }
      }
      
      $clicks = $query->execute()->rowCount();
      
      return $clicks;
      
    }
    
  }
  