<?php

	function vivendo_constructor_views_data_alter( &$data ) {

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

			return drupal_render( drupal_get_form('contacto_contructores_entityform_edit_form') );

		}

	}