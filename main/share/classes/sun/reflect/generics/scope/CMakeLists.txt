#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.reflect.generic_40_SRCS)
file(GLOB classes.sun.reflect.generic_40_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.reflect.generic_40_HEADERS}) 
list(LENGTH classes.sun.reflect.generic_40_SRCS classes.sun.reflect.generic_40_SRCS_LENGTH)
if(classes.sun.reflect.generic_40_SRCS_LENGTH)
	add_library(classes.sun.reflect.generic_40 OBJECT "${classes.sun.reflect.generic_40_SRCS}" "${classes.sun.reflect.generic_40_HEADERS}")
	jcpp_enable_bigobj(classes.sun.reflect.generic_40)
endif()