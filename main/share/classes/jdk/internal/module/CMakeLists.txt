#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.module_SRCS)
file(GLOB classes.jdk.internal.module_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.module_HEADERS}) 
list(LENGTH classes.jdk.internal.module_SRCS classes.jdk.internal.module_SRCS_LENGTH)
if(classes.jdk.internal.module_SRCS_LENGTH)
	add_library(classes.jdk.internal.module OBJECT "${classes.jdk.internal.module_SRCS}" "${classes.jdk.internal.module_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.module)
endif()