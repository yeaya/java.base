#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.jimage_13_SRCS)
file(GLOB classes.jdk.internal.jimage_13_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.jimage_13_HEADERS}) 
list(LENGTH classes.jdk.internal.jimage_13_SRCS classes.jdk.internal.jimage_13_SRCS_LENGTH)
if(classes.jdk.internal.jimage_13_SRCS_LENGTH)
	add_library(classes.jdk.internal.jimage_13 OBJECT "${classes.jdk.internal.jimage_13_SRCS}" "${classes.jdk.internal.jimage_13_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.jimage_13)
endif()