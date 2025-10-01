#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.util.resources._51_SRCS)
file(GLOB classes.sun.util.resources._51_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.util.resources._51_HEADERS}) 
list(LENGTH classes.sun.util.resources._51_SRCS classes.sun.util.resources._51_SRCS_LENGTH)
if(classes.sun.util.resources._51_SRCS_LENGTH)
	add_library(classes.sun.util.resources._51 OBJECT "${classes.sun.util.resources._51_SRCS}" "${classes.sun.util.resources._51_HEADERS}")
	jcpp_enable_bigobj(classes.sun.util.resources._51)
endif()