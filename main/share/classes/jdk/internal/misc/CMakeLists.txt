#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.misc_SRCS)
file(GLOB classes.jdk.internal.misc_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.misc_HEADERS}) 
list(LENGTH classes.jdk.internal.misc_SRCS classes.jdk.internal.misc_SRCS_LENGTH)
if(classes.jdk.internal.misc_SRCS_LENGTH)
	add_library(classes.jdk.internal.misc OBJECT "${classes.jdk.internal.misc_SRCS}" "${classes.jdk.internal.misc_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.misc)
endif()