<?php

    function vivendo_filter_views_query_alter(&$view, &$query) {
  
    	if ( !isset($_SESSION) ) { session_start(); }

    	$filterValue = isset($_SESSION['filterValue']) ? $_SESSION['filterValue'] : array();

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
					$query->where[1]['conditions'][6]['operator'] = 'BETWEEN';
					$query->where[1]['conditions'][6]['value']    = explode( "|", $filterValue['rango'] );
				}

			}

		}

		if ( $view->display_handler->display->id === 'block_1' ) {

			$nId            = arg(1);
			$projectWrapper = entity_metadata_wrapper( 'node', $nId );
			$price          = $projectWrapper->field_precio->value();
			

			if ( $price > 0 && $price !== '' ) {

				$rang = $price * 0.25;

				$query->where[1]['conditions'][6]['operator'] = 'BETWEEN';
				$query->where[1]['conditions'][6]['value']    = array( ($price - $rang), ($price + $rang) );

			}
				
		}

		

    }