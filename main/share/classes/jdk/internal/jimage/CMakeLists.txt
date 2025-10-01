#machine generated

add_subdirectory("decompressor")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.jimage_SRCS)
file(GLOB classes.jdk.internal.jimage_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.jimage_HEADERS}) 
list(LENGTH classes.jdk.internal.jimage_SRCS classes.jdk.internal.jimage_SRCS_LENGTH)
if(classes.jdk.internal.jimage_SRCS_LENGTH)
	add_library(classes.jdk.internal.jimage OBJECT "${classes.jdk.internal.jimage_SRCS}" "${classes.jdk.internal.jimage_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.jimage)
endif()