<?php

    function vivendo_compare_views_query_alter(&$view, &$query) {
 /*   
      if ( !isset($_SESSION) ) { session_start(); }
    
      $projectsCompare = isset($_SESSION['projectsCompare']) ? $_SESSION['projectsCompare'] : array();

      var_dump( $view );
      
      if ( $view->name == 'search' ) {
	$query->where[2]['conditions'][0]['value'] = '%' . $search . '%';
	$query->where[2]['conditions'][1]['value'] = '%' . $search . '%';
	$query->where[2]['conditions'][2]['value'] = '%' . $search . '%';
      }
  * 
  * 
*/
      dpm( $view );
      
    }

