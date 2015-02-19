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
    
    $('#mainBanner').mouseenter(function(){
        $('#pre-content-wrapper').height('360px');
    }).mouseleave(function(){
        $('#pre-content-wrapper').height('92px');
    });
    
  });
  
})(jQuery);