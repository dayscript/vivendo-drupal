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
    var latlngbounds = new google.maps.LatLngBounds();
    var latlng = [{lat:3.427581, lng:-76.49767}, {lat:4.565961, lng:-74.078279}];
    for (var i = 0; i < latlng.length; i++) {
        latlngbounds.extend(latlng[i]);
    }
    map.fitBounds(latlngbounds);
    //map.panToBounds(new LatLngBounds({ sw:, ne: }));
}
jQuery(document).ready( function(){
    initialize();
});