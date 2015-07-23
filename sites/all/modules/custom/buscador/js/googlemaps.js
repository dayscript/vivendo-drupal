/**
 * Created by jcorrego on 19/01/15.
 */

function render_window ( point ) {

  var output = '';

  output += '<div class="window-project">';
  output +=   '<div class="col-left">';
  output +=     '<a href="/' + point.url + '">';
  output +=       '<img src="' + point.images_url + '" title="' + point.name + '" alt="' + point.name + '"/>';
  output +=     '</a>';
  output +=   '</div>';
  output +=   '<div class="col-right">';
  output +=     '<span class="title"><a href="/' + point.url + '"><strong>' + point.name + '</strong></a></span>';
  output +=     '<span class="price">Desde <strong>' + point.price + '</strong></span>';
  output +=     '<span class="address">' + point.address + '</span>';
  output +=   '</div>';
  output += '</div>';

  return output;

}

function removeMarkers(){
    for(i=0; i<gmarkers.length; i++){
        gmarkers[i].setMap(null);
    }
}

  function loadMap() {
    
    var mapOptions = {
          mapTypeId: google.maps.MapTypeId.ROADMAP,
          scrollwheel:false,
          rotateControl: false,
          zoomControl:false,
          panControl:false,
    };
    
    var bounds = new google.maps.LatLngBounds();
    var infowindow = new google.maps.InfoWindow();

    var map = new google.maps.Map(document.getElementById('mapa'), mapOptions);
    
    for (var i = 0; i < points.length; i++) {
      
      var marker = new google.maps.Marker({
          position: points[i].latlng,
          map: map,
          title: points[i].name,
          icon: '/sites/all/themes/at-vivendo/images/icons/marker-small.png',
      });
      
      google.maps.event.addListener(marker, 'mouseover', (function(marker, point){
          return function() {
          infowindow.setContent( render_window(point) );
          infowindow.open( map, marker );
          jQuery('.gm-style-iw').prev().hide();
          jQuery('.gm-style-iw').next().html('<img src="http://vivendo.co/sites/all/themes/at-vivendo/images/icons/close-red.png" />').css({'top': '79px', 'right': '32px'});

          jQuery( ".gm-style-iw" ).mouseenter( function(){
              jQuery(".gm-style-iw").parent( "div" ).addClass('temporal').mouseleave(function(){
                jQuery(this).hide();
              });
          });
        };
      })(marker , points[i]));
      
      bounds.extend(marker.position);
      
    }
    
    map.fitBounds(bounds);
    
    var posi = 0
    
    var listener = google.maps.event.addListener(map, "idle", function () {
      if ( points.length == 1 ) {
        map.setZoom(17);
      } else {
        //map.setZoom(13);
        posi = -200;
      }
        
      var scale = Math.pow(2, map.getZoom());
      var nw = new google.maps.LatLng(
          map.getBounds().getNorthEast().lat(),
          map.getBounds().getSouthWest().lng()
      );

      var worldCoordinateCenter = map.getProjection().fromLatLngToPoint(map.getCenter());
      var pixelOffset = new google.maps.Point((posi/scale) || 0,(0/scale) ||0)

      var worldCoordinateNewCenter = new google.maps.Point(
          worldCoordinateCenter.x - pixelOffset.x,
          worldCoordinateCenter.y + pixelOffset.y
      );

      var newCenter = map.getProjection().fromPointToLatLng(worldCoordinateNewCenter);
      
      if(parseInt(jQuery('body').innerWidth()) >= 1024){
        map.setCenter(newCenter);
      }
      

      google.maps.event.removeListener(listener);
      
    });
    
    if ( jQuery('body').hasClass('front') ){
      jQuery('#mapa').append('<a href="/proyectos/list" class="link-proyects-more">Vea listado de inmuebles</a>').find('.link-proyects-more').css('left', (parseInt(jQuery('#block-buscador-busca-formulario').css('margin-left'))+5)+'px');
      //jQuery('.link-proyects-more').css('left', (jQuery('#block-buscador-busca-formulario').css('margin-left')+4)+"px");
    }
    
    jQuery('#mapa').append('<a href="#" class="z_more">more</a>');
    jQuery('#mapa').append('<a href="#" class="z_less">less</a>');
    

    jQuery('.z_more').click(function(event){
        event.preventDefault();
        map.setZoom( map.getZoom() + 1 );
    });


    jQuery('.z_less').click(function(event){
        event.preventDefault();
        map.setZoom( map.getZoom() - 1 );
    });
    
  }

  function update(){
      
    loadMap();
    
    if ( window.location.pathname == '/proyectos/list' || window.location.pathname == '/proyectos/grid' ){
      //jQuery('.view-proyectos').triggerHandler('RefreshView');
      jQuery('.b-down').click();
    }
    
  }
  
  function initialize(){
    
    loadMap();
    
  }

jQuery(document).ready( function(){
    
    initialize();

    if ( jQuery('.node-type-proyecto').html() != null ) {
        if ( jQuery('.field-name-field-video').html() != null ) {

	    var embeddedVideo = jQuery('.field-name-field-video').find('.embedded-video'),
	      urlVideo = embeddedVideo.find( 'iframe' ).attr('src').split('?'),
	      videoId = urlVideo[0].split('/');

            jQuery(".clone").prev().html( embeddedVideo.html() );
	    jQuery(".flex-control-nav").find('li').last().find('img').attr( 'src', 'http://img.youtube.com/vi/'+videoId[videoId.length-1]+'/maxresdefault.jpg' );

        }

    }
    


});
