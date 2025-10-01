#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.net.util_SRCS)
file(GLOB classes.sun.net.util_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.net.util_HEADERS}) 
list(LENGTH classes.sun.net.util_SRCS classes.sun.net.util_SRCS_LENGTH)
if(classes.sun.net.util_SRCS_LENGTH)
	add_library(classes.sun.net.util OBJECT "${classes.sun.net.util_SRCS}" "${classes.sun.net.util_HEADERS}")
	jcpp_enable_bigobj(classes.sun.net.util)
endif()