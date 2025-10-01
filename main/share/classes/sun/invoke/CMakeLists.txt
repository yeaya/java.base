#machine generated

add_subdirectory("empty")
add_subdirectory("util")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.invoke_SRCS)
file(GLOB classes.sun.invoke_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.invoke_HEADERS}) 
list(LENGTH classes.sun.invoke_SRCS classes.sun.invoke_SRCS_LENGTH)
if(classes.sun.invoke_SRCS_LENGTH)
	add_library(classes.sun.invoke OBJECT "${classes.sun.invoke_SRCS}" "${classes.sun.invoke_HEADERS}")
	jcpp_enable_bigobj(classes.sun.invoke)
endif()