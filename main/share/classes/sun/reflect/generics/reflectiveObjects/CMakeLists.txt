#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.reflect.generic_38_SRCS)
file(GLOB classes.sun.reflect.generic_38_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.reflect.generic_38_HEADERS}) 
list(LENGTH classes.sun.reflect.generic_38_SRCS classes.sun.reflect.generic_38_SRCS_LENGTH)
if(classes.sun.reflect.generic_38_SRCS_LENGTH)
	add_library(classes.sun.reflect.generic_38 OBJECT "${classes.sun.reflect.generic_38_SRCS}" "${classes.sun.reflect.generic_38_HEADERS}")
	jcpp_enable_bigobj(classes.sun.reflect.generic_38)
endif()