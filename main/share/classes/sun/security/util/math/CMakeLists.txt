#machine generated

add_subdirectory("intpoly")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.security.util.math_SRCS)
file(GLOB classes.sun.security.util.math_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.security.util.math_HEADERS}) 
list(LENGTH classes.sun.security.util.math_SRCS classes.sun.security.util.math_SRCS_LENGTH)
if(classes.sun.security.util.math_SRCS_LENGTH)
	add_library(classes.sun.security.util.math OBJECT "${classes.sun.security.util.math_SRCS}" "${classes.sun.security.util.math_HEADERS}")
	jcpp_enable_bigobj(classes.sun.security.util.math)
endif()