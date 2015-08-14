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
      
      $betweenDate = '';
      $result      = array();
      $sql         = '';
      
      if ( isset($_REQUEST['changed']) ){
        $dates = $_REQUEST['changed'];
        if ( !empty($dates['min']) ){
          $min = strtotime((string)$dates['min']);
          $max = strtotime((string)$dates['max']);
          $betweenDate = "AND viewsProject.created BETWEEN '".$min."' AND '".$max."'";
        }
      }
      
      $sql = "SELECT SUM((SELECT COUNT(*) AS totalViews FROM vivendo_views_projects AS "
          ."viewsProject WHERE viewsProject.entity_id = project.nid".$betweenDate.") ) AS totalViewsProjectByConstruct "
          ."FROM node AS project LEFT JOIN field_data_field_constructora AS field_cons ON "
          ."field_cons.entity_id = project.nid WHERE project.nid IN (SELECT DISTINCT entity_id "
          ."FROM vivendo_views_projects) AND field_cons.field_constructora_target_id = '".$row->nid."'";
      
      $result = db_query($sql)->fetchAll();
      
      return $result[0]->totalViewsProjectByConstruct;
      
    }
    
  }
  