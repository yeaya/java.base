#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.invoke_SRCS)
file(GLOB classes.jdk.internal.invoke_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.invoke_HEADERS}) 
list(LENGTH classes.jdk.internal.invoke_SRCS classes.jdk.internal.invoke_SRCS_LENGTH)
if(classes.jdk.internal.invoke_SRCS_LENGTH)
	add_library(classes.jdk.internal.invoke OBJECT "${classes.jdk.internal.invoke_SRCS}" "${classes.jdk.internal.invoke_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.invoke)
endif()