#machine generated

add_subdirectory("cldr")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.util.resources_SRCS)
file(GLOB classes.sun.util.resources_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.util.resources_HEADERS}) 
list(LENGTH classes.sun.util.resources_SRCS classes.sun.util.resources_SRCS_LENGTH)
if(classes.sun.util.resources_SRCS_LENGTH)
	add_library(classes.sun.util.resources OBJECT "${classes.sun.util.resources_SRCS}" "${classes.sun.util.resources_HEADERS}")
	jcpp_enable_bigobj(classes.sun.util.resources)
endif()