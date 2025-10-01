#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.net.www.http_SRCS)
file(GLOB classes.sun.net.www.http_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.net.www.http_HEADERS}) 
list(LENGTH classes.sun.net.www.http_SRCS classes.sun.net.www.http_SRCS_LENGTH)
if(classes.sun.net.www.http_SRCS_LENGTH)
	add_library(classes.sun.net.www.http OBJECT "${classes.sun.net.www.http_SRCS}" "${classes.sun.net.www.http_HEADERS}")
	jcpp_enable_bigobj(classes.sun.net.www.http)
endif()