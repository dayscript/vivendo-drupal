<?php

    function vivendo_filter_views_query_alter(&$view, &$query) {
  
    	dpm( $view );
    	dpm( $query );

		/*if ( !isset($_SESSION) ) { session_start(); }

		$projectsCompare = isset($_SESSION['projectsCompare']) ? $_SESSION['projectsCompare'] : array();

		if ( $view->display_handler->display->id === 'page_compare' && count($projectsCompare) >= 2 ) {

		$query->where[1]['conditions'][2] = array( 
		'field'    => 'node.nid',
		'value'    => $projectsCompare,
		'operator' => 'in'
		);

		} */
      
    }