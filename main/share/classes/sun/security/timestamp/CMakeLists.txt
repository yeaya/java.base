#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.security.timestamp_SRCS)
file(GLOB classes.sun.security.timestamp_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.security.timestamp_HEADERS}) 
list(LENGTH classes.sun.security.timestamp_SRCS classes.sun.security.timestamp_SRCS_LENGTH)
if(classes.sun.security.timestamp_SRCS_LENGTH)
	add_library(classes.sun.security.timestamp OBJECT "${classes.sun.security.timestamp_SRCS}" "${classes.sun.security.timestamp_HEADERS}")
	jcpp_enable_bigobj(classes.sun.security.timestamp)
endif()