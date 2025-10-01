#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.invoke.util_SRCS)
file(GLOB classes.sun.invoke.util_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.invoke.util_HEADERS}) 
list(LENGTH classes.sun.invoke.util_SRCS classes.sun.invoke.util_SRCS_LENGTH)
if(classes.sun.invoke.util_SRCS_LENGTH)
	add_library(classes.sun.invoke.util OBJECT "${classes.sun.invoke.util_SRCS}" "${classes.sun.invoke.util_HEADERS}")
	jcpp_enable_bigobj(classes.sun.invoke.util)
endif()