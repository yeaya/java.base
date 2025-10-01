#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.reflect.generic_36_SRCS)
file(GLOB classes.sun.reflect.generic_36_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.reflect.generic_36_HEADERS}) 
list(LENGTH classes.sun.reflect.generic_36_SRCS classes.sun.reflect.generic_36_SRCS_LENGTH)
if(classes.sun.reflect.generic_36_SRCS_LENGTH)
	add_library(classes.sun.reflect.generic_36 OBJECT "${classes.sun.reflect.generic_36_SRCS}" "${classes.sun.reflect.generic_36_HEADERS}")
	jcpp_enable_bigobj(classes.sun.reflect.generic_36)
endif()