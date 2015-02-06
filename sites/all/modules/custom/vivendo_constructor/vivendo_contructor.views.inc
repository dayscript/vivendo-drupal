<?php

	function vivendo_constructor_data_alter( &$data ) {

		$data['node']['constructor_form'] = array(
	        'title' => t('Constructor form'),
	        'help'  => t(''),
	        'field' => array(
	            'handler' => 'VivendoConstructorForm'
	        )
	    );	

	}

	class VivendoConstructorForm extends views_handler_field_entity {

		function render( $node ) {

			//$block = module_invoke('search', 'block_view', 'contacto_contructores');
          	return 'form';//render( $block ); 

		}

	}