#machine generated

add_subdirectory("commons")
add_subdirectory("signature")
add_subdirectory("tree")
add_subdirectory("util")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.org.ob_15_SRCS)
file(GLOB classes.jdk.internal.org.ob_15_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.org.ob_15_HEADERS}) 
list(LENGTH classes.jdk.internal.org.ob_15_SRCS classes.jdk.internal.org.ob_15_SRCS_LENGTH)
if(classes.jdk.internal.org.ob_15_SRCS_LENGTH)
	add_library(classes.jdk.internal.org.ob_15 OBJECT "${classes.jdk.internal.org.ob_15_SRCS}" "${classes.jdk.internal.org.ob_15_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.org.ob_15)
endif()