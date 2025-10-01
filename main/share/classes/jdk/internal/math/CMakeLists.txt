#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.math_SRCS)
file(GLOB classes.jdk.internal.math_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.math_HEADERS}) 
list(LENGTH classes.jdk.internal.math_SRCS classes.jdk.internal.math_SRCS_LENGTH)
if(classes.jdk.internal.math_SRCS_LENGTH)
	add_library(classes.jdk.internal.math OBJECT "${classes.jdk.internal.math_SRCS}" "${classes.jdk.internal.math_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.math)
endif()