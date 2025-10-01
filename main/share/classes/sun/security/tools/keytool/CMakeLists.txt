#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.security.tools._47_SRCS)
file(GLOB classes.sun.security.tools._47_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.security.tools._47_HEADERS}) 
list(LENGTH classes.sun.security.tools._47_SRCS classes.sun.security.tools._47_SRCS_LENGTH)
if(classes.sun.security.tools._47_SRCS_LENGTH)
	add_library(classes.sun.security.tools._47 OBJECT "${classes.sun.security.tools._47_SRCS}" "${classes.sun.security.tools._47_HEADERS}")
	jcpp_enable_bigobj(classes.sun.security.tools._47)
endif()