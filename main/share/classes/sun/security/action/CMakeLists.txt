#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.security.action_SRCS)
file(GLOB classes.sun.security.action_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.security.action_HEADERS}) 
list(LENGTH classes.sun.security.action_SRCS classes.sun.security.action_SRCS_LENGTH)
if(classes.sun.security.action_SRCS_LENGTH)
	add_library(classes.sun.security.action OBJECT "${classes.sun.security.action_SRCS}" "${classes.sun.security.action_HEADERS}")
	jcpp_enable_bigobj(classes.sun.security.action)
endif()