/**
 * Created by jcorrego on 19/01/15.
 */
var map;
var gmarkers = [];

function initialize() {
  
    var mapOptions = {
        center: new google.maps.LatLng(4.565961, -74.078279),
        zoom: 2,
        mapTypeId: google.maps.MapTypeId.ROADMAP,
        scrollwheel:false,
        rotateControl: false,
        zoomControl:false,
        panControl:false
    };
    
    map = new google.maps.Map(document.getElementById("mapa"), mapOptions);
    
  if(points && points.length){
        var latlngbounds = new google.maps.LatLngBounds();
        
        var infowindow = new google.maps.InfoWindow({
            content: ''
        });
        
        for (var i = 0; i < points.length; i++) {

            var marker = new google.maps.Marker({
                position: points[i].latlng,
                map: map,
                title: points[i].name,
                icon: '/sites/all/themes/at-vivendo/images/icons/marker-vivendo.png'
            });
            
            google.maps.event.addListener(marker, 'mouseover', (function(marker, point){
              return function() {
                infowindow.setContent( render_window(point) );
                infowindow.open( map, marker );
                jQuery('.gm-style-iw').prev().hide();
                jQuery('.gm-style-iw').next().html('<img src="http://newvivendo.dayscript.com/sites/all/themes/at-vivendo/images/icons/close-red.png" />').css({'top': '50px', 'right': '31px'});
              }
            })(marker , points[i]));
            
            gmarkers.push(marker);
            latlngbounds.extend(points[i].latlng);
        }
        
      map.fitBounds(latlngbounds);
      map.panBy(200,0);
      
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
    
}

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

function update( ) {
    if(points && points.length){
      
        var latlngbounds = new google.maps.LatLngBounds();
        removeMarkers();
        
        var infowindow = new google.maps.InfoWindow({
            content: ''
        });
        
        if ( jQuery('#highlighted-wrapper').height() === 115 ) {
          jQuery('.up-down a').click();
          
        }
        
        for (var i = 0; i < points.length; i++) {
            var marker = new google.maps.Marker({
                position: points[i].latlng,
                map: map,
                title: points[i].name,
                icon: '/sites/all/themes/at-vivendo/images/icons/marker-vivendo.png'
            });
            google.maps.event.addListener(marker, 'mouseover', (function(marker, point){
              return function() {
                infowindow.setContent( render_window(point) );
                infowindow.open( map, marker );
                jQuery('.gm-style-iw').prev().hide();
                jQuery('.gm-style-iw').next().html('<img src="http://newvivendo.dayscript.com/sites/all/themes/at-vivendo/images/icons/close-red.png" />').css({'top': '50px', 'right': '31px'});
              }
            })(marker , points[i]));
            gmarkers.push(marker);
            latlngbounds.extend(points[i].latlng);
        }
        map.fitBounds(latlngbounds);
        map.panBy(200,0);
    }

}
jQuery(document).ready( function(){
    initialize();
    
    if ( jQuery('.node-type-proyecto').html() != null ) {
        if ( jQuery('.field-name-field-video').html() != null ) {
            jQuery(".clone").prev().html(jQuery('.field-name-field-video').find('.embedded-video').html());
        }
        
    }
    
});