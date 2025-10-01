#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.net.ext_SRCS)
file(GLOB classes.sun.net.ext_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.net.ext_HEADERS}) 
list(LENGTH classes.sun.net.ext_SRCS classes.sun.net.ext_SRCS_LENGTH)
if(classes.sun.net.ext_SRCS_LENGTH)
	add_library(classes.sun.net.ext OBJECT "${classes.sun.net.ext_SRCS}" "${classes.sun.net.ext_HEADERS}")
	jcpp_enable_bigobj(classes.sun.net.ext)
endif()