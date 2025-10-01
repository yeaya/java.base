#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.invoke.empty_SRCS)
file(GLOB classes.sun.invoke.empty_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.invoke.empty_HEADERS}) 
list(LENGTH classes.sun.invoke.empty_SRCS classes.sun.invoke.empty_SRCS_LENGTH)
if(classes.sun.invoke.empty_SRCS_LENGTH)
	add_library(classes.sun.invoke.empty OBJECT "${classes.sun.invoke.empty_SRCS}" "${classes.sun.invoke.empty_HEADERS}")
	jcpp_enable_bigobj(classes.sun.invoke.empty)
endif()