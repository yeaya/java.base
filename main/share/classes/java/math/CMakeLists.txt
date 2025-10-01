#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.math_SRCS)
file(GLOB classes.java.math_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.math_HEADERS}) 
list(LENGTH classes.java.math_SRCS classes.java.math_SRCS_LENGTH)
if(classes.java.math_SRCS_LENGTH)
	add_library(classes.java.math OBJECT "${classes.java.math_SRCS}" "${classes.java.math_HEADERS}")
	jcpp_enable_bigobj(classes.java.math)
endif()