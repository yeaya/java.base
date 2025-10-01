#machine generated

add_subdirectory("ch")
add_subdirectory("cs")
add_subdirectory("fs")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.nio_SRCS)
file(GLOB classes.sun.nio_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.nio_HEADERS}) 
list(LENGTH classes.sun.nio_SRCS classes.sun.nio_SRCS_LENGTH)
if(classes.sun.nio_SRCS_LENGTH)
	add_library(classes.sun.nio OBJECT "${classes.sun.nio_SRCS}" "${classes.sun.nio_HEADERS}")
	jcpp_enable_bigobj(classes.sun.nio)
endif()