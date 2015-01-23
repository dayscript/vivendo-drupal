/**
 * Created by jcorrego on 19/01/15.
 */
var map;
var gmarkers = [];

function initialize() {
  
    var mapOptions = {
        center: new google.maps.LatLng(4.565961, -74.078279),
        zoom: 2,
        mapTypeId: google.maps.MapTypeId.ROADMAP
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
                icon: '/sites/all/themes/at-vivendo/images/icons/marker.png'
            });
            
            google.maps.event.addListener(marker, 'click', (function(marker, point){
              return function() {
                infowindow.setContent( render_window(point) );
                infowindow.open( map, marker );
              }
            })(marker , points[i]));
            
            gmarkers.push(marker);
            latlngbounds.extend(points[i].latlng);
        }
      map.fitBounds(latlngbounds);
      console.log(map.getZoom());
      map.setZoom(map.getZoom()-1);
      map.panBy(-200,0);
      console.log(map.getZoom());
    }
}

function render_window ( point ) {
  
  /*var output = '';
  
  output += '<div class="window-project">';
  output +=   '<div class="col-left">';
  output +=     '<img src="' + point.images_url + '" title="' + point.name + '" alt="' + point.name + '">';
  output +=   '</div>';
  output +=   '<div class="col-right">';
  output +=     '<span class="title">' + point.name + '</span>';
  output +=     '<span class="price">Desde $' + point.price + '</span>';
  output +=     '<span class="address">' + point.address + '</span>';
  output +=   '</div>';
  output += '</div>';
  
  return output;*/
  
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
        for (var i = 0; i < points.length; i++) {
            var marker = new google.maps.Marker({
                position: points[i].latlng,
                map: map,
                title: points[i].name,
                icon: '/sites/all/themes/at-vivendo/images/icons/marker.png'
            });
            gmarkers.push(marker);
            latlngbounds.extend(points[i].latlng);
        }
        map.fitBounds(latlngbounds);
    }

}
jQuery(document).ready( function(){
    initialize();
});