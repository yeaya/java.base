#machine generated

add_subdirectory("interfaces")
add_subdirectory("spec")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.security.internal_SRCS)
file(GLOB classes.sun.security.internal_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.security.internal_HEADERS}) 
list(LENGTH classes.sun.security.internal_SRCS classes.sun.security.internal_SRCS_LENGTH)
if(classes.sun.security.internal_SRCS_LENGTH)
	add_library(classes.sun.security.internal OBJECT "${classes.sun.security.internal_SRCS}" "${classes.sun.security.internal_HEADERS}")
	jcpp_enable_bigobj(classes.sun.security.internal)
endif()