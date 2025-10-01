#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.security.ssl_SRCS)
file(GLOB classes.sun.security.ssl_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.security.ssl_HEADERS}) 
list(LENGTH classes.sun.security.ssl_SRCS classes.sun.security.ssl_SRCS_LENGTH)
if(classes.sun.security.ssl_SRCS_LENGTH)
	add_library(classes.sun.security.ssl OBJECT "${classes.sun.security.ssl_SRCS}" "${classes.sun.security.ssl_HEADERS}")
	jcpp_enable_bigobj(classes.sun.security.ssl)
endif()