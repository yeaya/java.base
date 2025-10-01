#machine generated

add_subdirectory("keytool")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.security.tools_SRCS)
file(GLOB classes.sun.security.tools_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.security.tools_HEADERS}) 
list(LENGTH classes.sun.security.tools_SRCS classes.sun.security.tools_SRCS_LENGTH)
if(classes.sun.security.tools_SRCS_LENGTH)
	add_library(classes.sun.security.tools OBJECT "${classes.sun.security.tools_SRCS}" "${classes.sun.security.tools_HEADERS}")
	jcpp_enable_bigobj(classes.sun.security.tools)
endif()