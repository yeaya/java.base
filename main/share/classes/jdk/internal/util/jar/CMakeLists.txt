#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.util.jar_SRCS)
file(GLOB classes.jdk.internal.util.jar_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.util.jar_HEADERS}) 
list(LENGTH classes.jdk.internal.util.jar_SRCS classes.jdk.internal.util.jar_SRCS_LENGTH)
if(classes.jdk.internal.util.jar_SRCS_LENGTH)
	add_library(classes.jdk.internal.util.jar OBJECT "${classes.jdk.internal.util.jar_SRCS}" "${classes.jdk.internal.util.jar_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.util.jar)
endif()