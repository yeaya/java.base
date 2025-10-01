#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.reflect_SRCS)
file(GLOB classes.jdk.internal.reflect_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.reflect_HEADERS}) 
list(LENGTH classes.jdk.internal.reflect_SRCS classes.jdk.internal.reflect_SRCS_LENGTH)
if(classes.jdk.internal.reflect_SRCS_LENGTH)
	add_library(classes.jdk.internal.reflect OBJECT "${classes.jdk.internal.reflect_SRCS}" "${classes.jdk.internal.reflect_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.reflect)
endif()