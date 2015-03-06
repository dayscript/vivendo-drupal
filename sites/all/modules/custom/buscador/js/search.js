(function($){
    
  Drupal.behaviors.LoginRegister = {
    
    attach: function (context, settings) {
      
      $('#text-wrapper .form-text:not(.processed)').addClass('processed').keyup(function(event) {
	
	var element_settings = {},
	    base = $(this).attr('id'),
            ajax,
            deltaBlock,
            url;
	    
	if(typeof Drupal.ajax[base] !== 'undefined'){
	  delete Drupal.ajax[base];
	  $(this).unbind('KeySearch');
	} 
	    
	element_settings.progress = { 'type' : 'none' };
        element_settings.submit   = { js: true, base: base, deltaBlock: deltaBlock };
        element_settings.url      = $(this).attr('href');
        element_settings.event    = 'KeySearch';
	
	ajax                   = new Drupal.ajax(base, this, element_settings);
        Drupal.ajax[base]      = ajax;
	
      });
      
    }
    
  };
  
  Drupal.ajax.prototype.commands.search_result = function( ajax, response, status ) {
    
  }
    
})(jQuery);

