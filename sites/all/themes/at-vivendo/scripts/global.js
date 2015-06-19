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

    /*$('#pre-content-wrapper').mouseenter(function(){
        $(this).height('360px');
    }).mouseleave(function(){
        $(this).height('92px');
    });*/

    $('#contacto-contructores-entityform-edit-form').submit(function(){

        var flag = true;

        $(this).find('.form-text').each(function(){

            var valueText = $(this).val(),
                emailReg  = /^([\w-\.]+@([\w-]+\.)+[\w-]{2,4})?$/;

            $(this).removeClass('error-field').closest('.form-item').find('.error').remove();

            if ( $(this).attr('id') !== 'edit-field-telefono1-und-0-value' ){
                if ( valueText === '' ) {
                    $(this).addClass('error-field').closest('.form-item').append('<span class="error">* Este campo es obligatorio</span>');
                    flag = false;
                }
            }

            if ( $(this).attr('id') === 'edit-field-email-und-0-email' ) {

                if (valueText !== '') {
                    if ( !emailReg.test(valueText) ) {
                        $(this).addClass('error-field').closest('.form-item').append('<span class="error">* No es un correo valido</span>');
                        flag = false;
                    }
                }

            }


        });

        $(this).find('.form-type-checkbox').find('.error').remove();

        if ( !$(this).find('.form-checkbox').is(':checked') ) {
            $(this).find('.form-type-checkbox').append('<span class="error">* Este campo es obligatorio</span>');
            flag = false;
        }

        return flag;

    });

    if ( $('body').hasClass('front') ){

      var url = window.location.href.split('#');

      if ( url.length > 1 && url[1] == 'contacto' ){
        $('.btn-contact').click();
      }

    }

    $('#mapa').each(function(){

      var width = $(this).width();

      $('.up-down').css( 'left', (width/2 - 21/2) + 'px' );

    });

    resize();

    $('#block-panels-mini-herramientas-4-columnas').toggle(
      function(e){
       $('#block-panels-mini-herramientas-4-columnas .block-content.content').slideDown();
       e.preventDefault();
      },
      function(e){
       $('#block-panels-mini-herramientas-4-columnas .block-content.content').slideUp();
       e.preventDefault();
      }
    );


    $('.region-two-33-66-second .drop-down-footer').toggle(
      function(e){
       $('.ul-content-search').slideDown();
       e.preventDefault();
      },
      function(e){
       $('.ul-content-search').slideUp();
       e.preventDefault();
      }
    );

    $('.region-two-33-66-second .drop-down-footer-secciones').toggle(
      function(e){
       $('.ul-content-secciones').slideDown();
       e.preventDefault();
      },
      function(e){
       $('.ul-content-secciones').slideUp();
       e.preventDefault();
      }
    );

    $('.region-two-33-66-second .drop-down-footer-tools').toggle(
      function(e){
       $('.ul-content-tools').slideDown();
       e.preventDefault();
      },
      function(e){
       $('.ul-content-tools').slideUp();
       e.preventDefault();
      }
    );
  });

$(window).resize(function(){
  resize();
  jQuery('#block-block-18').toggle(

      function(e){
         jQuery('#tipo-wrapper').slideDown();
         jQuery('#constructora-wrapper').slideDown();
         jQuery('#rango-wrapper').slideDown();
         jQuery('#zona-wrapper').slideDown();
         e.preventDefault();
        },
      function(e){
         jQuery('#tipo-wrapper').slideUp();
         jQuery('#constructora-wrapper').slideUp();
         jQuery('#rango-wrapper').slideUp();
         jQuery('#zona-wrapper').slideUp();
         e.preventDefault();
         e.preventDefault();
        }
    );

});



  function resize(){
    var check = $('body').innerWidth();
    $('#buscador-wrapper').find('.wrapper').each(function(){
      if(check <= 800){
        label = $(this).find('label').text();
      }else{
        label = "Todos"
      }
      $(this).find('option').first().each(function(){
         $(this).text( label );
      });
    });
  }


})(jQuery);
