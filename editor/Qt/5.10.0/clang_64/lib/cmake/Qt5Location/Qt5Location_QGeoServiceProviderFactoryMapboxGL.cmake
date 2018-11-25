
add_library(Qt5::QGeoServiceProviderFactoryMapboxGL MODULE IMPORTED)

_populate_Location_plugin_properties(QGeoServiceProviderFactoryMapboxGL RELEASE "geoservices/libqtgeoservices_mapboxgl.dylib")
_populate_Location_plugin_properties(QGeoServiceProviderFactoryMapboxGL DEBUG "geoservices/libqtgeoservices_mapboxgl.dylib")

list(APPEND Qt5Location_PLUGINS Qt5::QGeoServiceProviderFactoryMapboxGL)
