<?php

  function vivendo_views_projects_views_data_alter( &$data ){
    
    $data['node']['views_projects'] = array(
        'title' => 'visitas por proyecto',
        'help'  => 'Numero de visitas por proyecto',
        'field' => array(
            'handler' => 'vivendoViewsProjects'
        )
    );
    
    $data['node']['total_views_projects'] = array(
        'title' => 'Total de visitas por contructora',
        'help'  => 'Numero total de visitas por proyecto',
        'field' => array(
            'handler' => 'vivendoTotalViewsProjects'
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
  
  class vivendoTotalViewsProjects extends views_handler_field_entity {
    
    function render( $row ){
      
      /*$query = db_select 
      *
      $query = db_select( 'vivendo_views_projects', 'vp' )->fields('vp');
          
      
      $query->leftJoin( 'field_data_field_contructora', 'fco', 'fco.entity_id = vp.' )
      
      if ( isset($_REQUEST['changed']) ){
        $dates = $_REQUEST['changed'];
        if ( !empty($dates['min']) ){
          $min = strtotime((string)$dates['min']);
          $max = strtotime((string)$dates['max']);
          $query->condition( 'created', array($min, $max), 'BETWEEN' );
        }
      }
      
      $clicks = $query->execute()->rowCount();
      
      return $clicks;*/
      
    }
    
  }
  