#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.net.ssl_SRCS)
file(GLOB classes.javax.net.ssl_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.net.ssl_HEADERS}) 
list(LENGTH classes.javax.net.ssl_SRCS classes.javax.net.ssl_SRCS_LENGTH)
if(classes.javax.net.ssl_SRCS_LENGTH)
	add_library(classes.javax.net.ssl OBJECT "${classes.javax.net.ssl_SRCS}" "${classes.javax.net.ssl_HEADERS}")
	jcpp_enable_bigobj(classes.javax.net.ssl)
endif()