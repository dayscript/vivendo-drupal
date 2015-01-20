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
        for (var i = 0; i < points.length; i++) {
            var marker = new google.maps.Marker({
                position: points[i].latlng,
                map: map,
                title: points[i].name
            });
            gmarkers.push(marker);
            latlngbounds.extend(points[i].latlng);
        }
        map.fitBounds(latlngbounds);
    }
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
                title: points[i].name
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