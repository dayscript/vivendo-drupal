/**
 * Created by jcorrego on 19/01/15.
 */
var map;
function initialize() {
    var mapOptions = {
        center: new google.maps.LatLng(-34.397, 150.644),
        zoom: 8,
        mapTypeId: google.maps.MapTypeId.ROADMAP
    };
    map = new google.maps.Map(document.getElementById("mapa"),
        mapOptions);
}
function initialize2() {
    map.panTo( { lat:3.427581, lng:-76.49767} );
}
jQuery(document).ready( function(){
    initialize();
});