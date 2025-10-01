#machine generated

add_subdirectory("foreign")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.access_SRCS)
file(GLOB classes.jdk.internal.access_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.access_HEADERS}) 
list(LENGTH classes.jdk.internal.access_SRCS classes.jdk.internal.access_SRCS_LENGTH)
if(classes.jdk.internal.access_SRCS_LENGTH)
	add_library(classes.jdk.internal.access OBJECT "${classes.jdk.internal.access_SRCS}" "${classes.jdk.internal.access_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.access)
endif()