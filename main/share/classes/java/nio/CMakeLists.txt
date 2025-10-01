#machine generated

add_subdirectory("channels")
add_subdirectory("charset")
add_subdirectory("file")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.nio_SRCS)
file(GLOB classes.java.nio_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.nio_HEADERS}) 
list(LENGTH classes.java.nio_SRCS classes.java.nio_SRCS_LENGTH)
if(classes.java.nio_SRCS_LENGTH)
	add_library(classes.java.nio OBJECT "${classes.java.nio_SRCS}" "${classes.java.nio_HEADERS}")
	jcpp_enable_bigobj(classes.java.nio)
endif()