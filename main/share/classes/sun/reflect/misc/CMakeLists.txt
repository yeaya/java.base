#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.reflect.misc_SRCS)
file(GLOB classes.sun.reflect.misc_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.reflect.misc_HEADERS}) 
list(LENGTH classes.sun.reflect.misc_SRCS classes.sun.reflect.misc_SRCS_LENGTH)
if(classes.sun.reflect.misc_SRCS_LENGTH)
	add_library(classes.sun.reflect.misc OBJECT "${classes.sun.reflect.misc_SRCS}" "${classes.sun.reflect.misc_HEADERS}")
	jcpp_enable_bigobj(classes.sun.reflect.misc)
endif()