(function($){
  
  $(document).ready(function(){
    
    $('.show-telephone').click(function(event){
      event.preventDefault();
      $('.hide').show();
    });
    
    
    $('.up-down a').on('click', function(event){
      
      var button = $(this);
          
          if ( button.hasClass('b-up') ) {
            
            $('.front .view-proyectos-destacados').hide();
            $('#highlighted-wrapper').css({overflow: 'hidden'}).animate({height: "115px"}, 700);
            $('#mapa').animate({height: "59px"}, 700);
            button.removeClass().addClass('b-down');
            
          } else if ( button.hasClass('b-down') ) {
            
            $('.front .view-proyectos-destacados').show();
            $('#highlighted-wrapper').css({overflow: 'hidden'}).animate({height: "455px"}, 700);
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