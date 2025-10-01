#machine generated

add_subdirectory("annotation")
add_subdirectory("generics")
add_subdirectory("misc")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.reflect_SRCS)
file(GLOB classes.sun.reflect_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.reflect_HEADERS}) 
list(LENGTH classes.sun.reflect_SRCS classes.sun.reflect_SRCS_LENGTH)
if(classes.sun.reflect_SRCS_LENGTH)
	add_library(classes.sun.reflect OBJECT "${classes.sun.reflect_SRCS}" "${classes.sun.reflect_HEADERS}")
	jcpp_enable_bigobj(classes.sun.reflect)
endif()