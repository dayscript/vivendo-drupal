<?php

    function vivendo_filter_views_query_alter(&$view, &$query) {
  
    	if ( !isset($_SESSION) ) { session_start(); }

    	$filterValue = isset($_SESSION['filterValue']) ? $_SESSION['filterValue'] : array();

		if ( isset($filterValue['zona']) ) {

			if ( $view->display_handler->display->id === 'page_list' || $view->display_handler->display->id === 'page_grid' ) {

				if ( $filterValue['zona'] > 0 ) {
					$query->where[2]['conditions'][0]['operator'] = '=';
					$query->where[2]['conditions'][0]['value']    = $filterValue['zona'];
				}

				if ( $filterValue['tipo'] > 0 ) {
					$query->where[2]['conditions'][1]['operator'] = '=';
					$query->where[2]['conditions'][1]['value']    = $filterValue['tipo'];
				}

				if ( $filterValue['constructora'] > 0 ) {
					$query->where[2]['conditions'][2]['operator'] = '=';
					$query->where[2]['conditions'][2]['value']    = $filterValue['constructora'];
				}

				if ( $filterValue['rango'] !== '' ) {
					$query->where[2]['conditions'][3]['operator'] = 'BETWEEN';
					$query->where[2]['conditions'][3]['value']    = explode( "|", $filterValue['rango'] );
				}

			}

		}

    }