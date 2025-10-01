#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.util.r_23_SRCS)
file(GLOB classes.jdk.internal.util.r_23_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.util.r_23_HEADERS}) 
list(LENGTH classes.jdk.internal.util.r_23_SRCS classes.jdk.internal.util.r_23_SRCS_LENGTH)
if(classes.jdk.internal.util.r_23_SRCS_LENGTH)
	add_library(classes.jdk.internal.util.r_23 OBJECT "${classes.jdk.internal.util.r_23_SRCS}" "${classes.jdk.internal.util.r_23_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.util.r_23)
endif()