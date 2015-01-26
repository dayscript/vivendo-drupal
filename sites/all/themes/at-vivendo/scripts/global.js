(function($){
  
  $(document).ready(function(){
    
    $('.show-telephone').click(function(event){
      event.preventDefault();
      $('.hide').show();
    });
    
    $('.b-up').click(function(event){
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
    });
    
  });
  
})(jQuery);