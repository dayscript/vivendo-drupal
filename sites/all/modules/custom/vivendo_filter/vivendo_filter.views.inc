<?php

    function vivendo_filter_views_query_alter(&$view, &$query) {
  
    	if ( !isset($_SESSION) ) { session_start(); }

    	$filterValue = isset($_SESSION['filterValue']) ? $_SESSION['filterValue'] : array();

		if ( isset($filterValue['zona']) ) {

			if ( $view->display_handler->display->id === 'page_1' || $view->display_handler->display->id === 'page_grid' ) {

				/*if ( $filterValue['zona'] > 0 ) {
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

				if ( $filterValue['rango'] > 0 ) {
					$query->where[1]['conditions'][6]['operator'] = 'BETWEEN';
					$query->where[1]['conditions'][6]['value']    = explode( "|", $filterValue['rango'] );
				}*/

			}

		}

		/*dpm( $query );
		dpm( $view );*/

    }