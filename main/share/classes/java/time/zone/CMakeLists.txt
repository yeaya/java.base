#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.time.zone_SRCS)
file(GLOB classes.java.time.zone_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.time.zone_HEADERS}) 
list(LENGTH classes.java.time.zone_SRCS classes.java.time.zone_SRCS_LENGTH)
if(classes.java.time.zone_SRCS_LENGTH)
	add_library(classes.java.time.zone OBJECT "${classes.java.time.zone_SRCS}" "${classes.java.time.zone_HEADERS}")
	jcpp_enable_bigobj(classes.java.time.zone)
endif()