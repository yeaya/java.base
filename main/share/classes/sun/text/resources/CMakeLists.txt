#machine generated

add_subdirectory("cldr")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.text.resources_SRCS)
file(GLOB classes.sun.text.resources_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.text.resources_HEADERS}) 
list(LENGTH classes.sun.text.resources_SRCS classes.sun.text.resources_SRCS_LENGTH)
if(classes.sun.text.resources_SRCS_LENGTH)
	add_library(classes.sun.text.resources OBJECT "${classes.sun.text.resources_SRCS}" "${classes.sun.text.resources_HEADERS}")
	jcpp_enable_bigobj(classes.sun.text.resources)
endif()