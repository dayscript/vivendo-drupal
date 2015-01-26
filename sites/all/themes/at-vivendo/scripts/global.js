(function($){
  
  $(document).ready(function(){
    
    $('.show-telephone').click(function(event){
      event.preventDefault();
      $('.hide').show();
    });
    
    $('.b-up').click(function(event){
      event.preventDefault();
      $('.highlighted-wrapper').css({overflow: 'hidden'}).animate({height: "115px"}, 1000);
      $('#mapa').animate({height: "50px"}, 1000);
    });
    
  });
  
})(jQuery);