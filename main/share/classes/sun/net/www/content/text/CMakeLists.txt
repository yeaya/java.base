#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.net.www.content_26_SRCS)
file(GLOB classes.sun.net.www.content_26_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.net.www.content_26_HEADERS}) 
list(LENGTH classes.sun.net.www.content_26_SRCS classes.sun.net.www.content_26_SRCS_LENGTH)
if(classes.sun.net.www.content_26_SRCS_LENGTH)
	add_library(classes.sun.net.www.content_26 OBJECT "${classes.sun.net.www.content_26_SRCS}" "${classes.sun.net.www.content_26_HEADERS}")
	jcpp_enable_bigobj(classes.sun.net.www.content_26)
endif()