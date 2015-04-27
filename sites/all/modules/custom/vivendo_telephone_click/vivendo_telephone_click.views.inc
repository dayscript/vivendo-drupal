<?php

  function vivendo_telephone_click_views_data_alter( &$data ){
    
    $data['node']['telephone_clicks'] = array(
        'title' => 'Numero de clics',
        'help'  => 'Numero de clics en el telefono de la constructora',
        'field' => array(
            'handler' => 'vivendoTelephoneClick'
        )
    );
    
  }
  
  
  class vivendoTelephoneClick extends views_handler_field_entity {
    
    function render( $row ){
      
      $clicks = db_select( 'vivendo_telephone', 'vt' )
          ->fields('vt')
          ->condition( 'entity_id', $row->nid, '=' )
          ->execute()
          ->rowCount();
      
      return $clicks;
      
    }
    
  }
  