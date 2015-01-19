/**
 * Created by jcorrego on 19/01/15.
 */
function initialize() {
    var mapOptions = {
        center: new google.maps.LatLng(-34.397, 150.644),
        zoom: 8,
        mapTypeId: google.maps.MapTypeId.ROADMAP
    };
    var map = new google.maps.Map(document.getElementById("mapa"),
        mapOptions);
}
jQuery(document).ready( function(){
    initialize();
});