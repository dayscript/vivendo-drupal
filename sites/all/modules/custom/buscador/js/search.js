(function($){
    
  Drupal.behaviors.LoginRegister = {
    
    attach: function (context, settings) {
      
      $('#text-wrapper .form-text:not(.vivendo-processed)').addClass('vivendo-processed').keyup(function(event) {
	
        var element_settings = {},
            base = $(this).attr('id'),
            data = $(this).val(),
            ajax;
	    
        /*if(typeof Drupal.ajax[base] !== 'undefined'){
          delete Drupal.ajax[base];
          $(this).unbind('KeySearch');
        }*/ 
	    
        element_settings.progress = { 'type' : 'none' };
        element_settings.submit   = { js: true, base: base, data: data };
        element_settings.url      = Drupal.settings.basePath + $(this).closest('#text-wrapper').data('url');
        element_settings.event    = 'KeySearch';
	
        ajax              = new Drupal.ajax(base, this, element_settings);
        Drupal.ajax[base] = ajax;
        
        $(this).trigger( 'KeySearch' );
	
      });
      
    }
    
  };
  
  Drupal.ajax.prototype.commands.vivendo_search_result = function( ajax, response, status ) {
    
  };
    
})(jQuery);

