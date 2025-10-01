#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.reflect.annotation_SRCS)
file(GLOB classes.sun.reflect.annotation_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.reflect.annotation_HEADERS}) 
list(LENGTH classes.sun.reflect.annotation_SRCS classes.sun.reflect.annotation_SRCS_LENGTH)
if(classes.sun.reflect.annotation_SRCS_LENGTH)
	add_library(classes.sun.reflect.annotation OBJECT "${classes.sun.reflect.annotation_SRCS}" "${classes.sun.reflect.annotation_HEADERS}")
	jcpp_enable_bigobj(classes.sun.reflect.annotation)
endif()