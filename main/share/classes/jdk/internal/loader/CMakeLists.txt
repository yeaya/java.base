#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.loader_SRCS)
file(GLOB classes.jdk.internal.loader_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.loader_HEADERS}) 
list(LENGTH classes.jdk.internal.loader_SRCS classes.jdk.internal.loader_SRCS_LENGTH)
if(classes.jdk.internal.loader_SRCS_LENGTH)
	add_library(classes.jdk.internal.loader OBJECT "${classes.jdk.internal.loader_SRCS}" "${classes.jdk.internal.loader_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.loader)
endif()