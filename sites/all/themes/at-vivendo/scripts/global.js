(function($){
  
  $(document).ready(function(){
    
    $('.show-telephone').click(function(event){
      event.preventDefault();
      $('.hide').css('display', 'block');
    });
    
    
    $('.not-front .up-down').each(function(){
      $(this).find('a').removeClass().addClass('b-down');
    });
    
    $('.up-down a').on('click', function(event){
      
      var button = $(this);
          
          if ( $('#highlighted-wrapper').height() === 455 ) {
            
            $('.front .view-proyectos-destacados').hide();
            $('#highlighted-wrapper').animate({height: "115px"}, 700);
            $('#mapa').animate({height: "59px"}, 700);
            button.removeClass().addClass('b-down');
            
          } else if ( $('#highlighted-wrapper').height() === 115 ) {
            
            $('.front .view-proyectos-destacados').show();
            $('#highlighted-wrapper').animate({height: "455px"}, 700);
            $('#mapa').animate({height: "400px"}, 700);
            button.removeClass().addClass('b-up');
            
          }
          
          event.preventDefault();
      
    });
    
    $('a.link-compare.disable').click(function(event){
      event.preventDefault();
    });
    
    $('.contruct').click(function(event){
      event.preventDefault();
      window.location =  '/node/' + $(this).attr('href'); 
      
    });

    $('.group-datos section').each(function(i){
      if ( i % 2 == 0 ) {
        jQuery(this).css('background', '#ffffff');
      } else {
        jQuery(this).css('background', '#f4f4f4');
      }
    });
    
    $('#pre-content-wrapper').mouseenter(function(){
        $(this).height('360px');
    }).mouseleave(function(){
        $(this).height('92px');
    });
    
    $('#contacto-contructores-entityform-edit-form').submit(function(){
        
        var flag = false;
        console.log('entro submit');
        $(this).find('.form-text').each(function(){
            
            var valueText = $(this).val();
            console.log('entro each');
            if ( $(this).attr('id') !== 'edit-field-telefono1-und-0-value' ){
                console.log('entro if');
                if ( valueText !== '' ) {
                    $(this).closest('.form-item').append('<span class="error">* Campo obligatorio</span>');
                    
                } else {
                    $(this).closest('.form-item').remove('.error');
                    flag = true;
                }
                
            }
            
        });
        
        console.log('valor bandera '+ flag);
        
        return flag;
        
    });
    
  });
  
})(jQuery);