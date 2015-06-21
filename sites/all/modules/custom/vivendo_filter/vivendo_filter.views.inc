<?php

  function vivendo_filter_views_query_alter(&$view, &$query) {

    if ( isset($filterValue['zona']) ) {

      if ( $view->name == 'proyectos' && ($view->display_handler->display->id === 'page_1' || $view->display_handler->display->id === 'page') ) {

        if ( $filterValue['zona'] > 0 ) {
          $query->where[1]['conditions'][3]['operator'] = '=';
          $query->where[1]['conditions'][3]['value']    = $filterValue['zona'];
        }

        if ( $filterValue['tipo'] > 0 ) {
          $query->where[1]['conditions'][4]['operator'] = '=';
          $query->where[1]['conditions'][4]['value']    = $filterValue['tipo'];
        }

        if ( $filterValue['constructora'] > 0 ) {
          $query->where[1]['conditions'][5]['operator'] = '=';
          $query->where[1]['conditions'][5]['value']    = $filterValue['constructora'];
        }

        if ( $filterValue['rango'] != 0 ) {

          $rango = taxonomy_term_load( $filterValue['rango'] );
          $data  = explode( "|", $rango->description );

          $query->where[1]['conditions'][6]['operator'] = 'BETWEEN';
          $query->where[1]['conditions'][6]['value']    = $data;
        }

      }

    }

    if ( $view->name == 'proyectos' && $view->display_handler->display->id === 'block_1' ) {

      $nId = arg(1);

      if ( is_numeric($nId) ) {

        $projectWrapper = entity_metadata_wrapper( 'node', $nId );

        if ( $projectWrapper->type->value() == 'proyecto' ) {

          $price = $projectWrapper->field_price->value();
          $nId   = $projectWrapper->nid->value();

          if ( $price > 0 && $price !== '' ) {
            $rang = $price * 0.25;
            $query->where[1]['conditions'][3]['operator'] = 'BETWEEN';
            $query->where[1]['conditions'][3]['value']    = array( ($price - $rang), ($price + $rang) );
          }

          $query->where[1]['conditions'][4]['operator'] = '!=';
          $query->where[1]['conditions'][4]['value']    = $nId;

        }

      }

    } elseif ( $view->name == 'services_by_project' && $view->display_handler->display->id === 'page_2' ){
      $dataPrice = arg(5);
      
      if ( $dataPrice != 'all' ){
        
        $priceRange = taxonomy_term_load( $dataPrice )->name;
        
        if ( count(explode('$', $priceRange)) > 2 ){
          
          $prices = explode('-', preg_replace("/[^0-9,-]/", "", str_replace(' a ', '-', $priceRange)));
          
          $query->where[1]['conditions'][3]['operator'] = 'BETWEEN';
          $query->where[1]['conditions'][3]['value']    = $prices;
          
        }
        
      }
      
      dpm($query);
      
    }
    
    

  }