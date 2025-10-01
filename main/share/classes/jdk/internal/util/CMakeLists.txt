#machine generated

add_subdirectory("jar")
add_subdirectory("random")
add_subdirectory("xml")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.util_SRCS)
file(GLOB classes.jdk.internal.util_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.util_HEADERS}) 
list(LENGTH classes.jdk.internal.util_SRCS classes.jdk.internal.util_SRCS_LENGTH)
if(classes.jdk.internal.util_SRCS_LENGTH)
	add_library(classes.jdk.internal.util OBJECT "${classes.jdk.internal.util_SRCS}" "${classes.jdk.internal.util_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.util)
endif()