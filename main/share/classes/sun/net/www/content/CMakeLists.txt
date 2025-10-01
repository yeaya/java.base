#machine generated

add_subdirectory("text")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.net.www.content_SRCS)
file(GLOB classes.sun.net.www.content_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.net.www.content_HEADERS}) 
list(LENGTH classes.sun.net.www.content_SRCS classes.sun.net.www.content_SRCS_LENGTH)
if(classes.sun.net.www.content_SRCS_LENGTH)
	add_library(classes.sun.net.www.content OBJECT "${classes.sun.net.www.content_SRCS}" "${classes.sun.net.www.content_HEADERS}")
	jcpp_enable_bigobj(classes.sun.net.www.content)
endif()