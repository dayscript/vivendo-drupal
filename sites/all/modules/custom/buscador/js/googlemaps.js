/**
 * Created by jcorrego on 19/01/15.
 */
var map;
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
            new google.maps.Marker({
                position: points[i].latlng,
                map: map,
                title: points[i].name
            });
            latlngbounds.extend(points[i].latlng);
        }
        map.fitBounds(latlngbounds);
    }
}
function update( points ) {
    var latlngbounds = new google.maps.LatLngBounds();
    var points = [
        {
            name: "Punto 1",
            latlng: new google.maps.LatLng(4.565961, -74.078279)
        },
        {
            name: "Punto 2",
            latlng: new google.maps.LatLng(3.427581,-76.49767)
        }
    ];
    for (var i = 0; i < points.length; i++) {
        new google.maps.Marker({
            position: points[i].latlng,
            map: map,
            title: points[i].name
        });
        latlngbounds.extend(points[i].latlng);
    }
    map.fitBounds(latlngbounds);
}
jQuery(document).ready( function(){
    initialize();
});