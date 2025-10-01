#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.reflect.generic_42_SRCS)
file(GLOB classes.sun.reflect.generic_42_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.reflect.generic_42_HEADERS}) 
list(LENGTH classes.sun.reflect.generic_42_SRCS classes.sun.reflect.generic_42_SRCS_LENGTH)
if(classes.sun.reflect.generic_42_SRCS_LENGTH)
	add_library(classes.sun.reflect.generic_42 OBJECT "${classes.sun.reflect.generic_42_SRCS}" "${classes.sun.reflect.generic_42_HEADERS}")
	jcpp_enable_bigobj(classes.sun.reflect.generic_42)
endif()