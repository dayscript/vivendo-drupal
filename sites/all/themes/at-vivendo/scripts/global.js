(function($){
  
  $(document).ready(function(){
    
    $('.show-telephone').click(function(event){
      event.preventDefault();
      $('.hide').show();
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
    
    /*$('.b-up').click(function(event){
      event.preventDefault();
      $('.front .view-proyectos-destacados').hide();
      $('#highlighted-wrapper').css({overflow: 'hidden'}).animate({height: "115px"}, 700);
      $('#mapa').animate({height: "59px"}, 700);
      $(this).removeClass().addClass('b-down');
    });
    
    $('.b-down').click(function(event){
      event.preventDefault();
      $('.front .view-proyectos-destacados').hide();
      $('#highlighted-wrapper').css({overflow: 'hidden'}).animate({height: "455px"}, 700);
      $('#mapa').animate({height: "400px"}, 700);
      $(this).removeClass().addClass('b-up');
    });*/
    
  });
  
})(jQuery);