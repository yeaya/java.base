#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.util.function_SRCS)
file(GLOB classes.java.util.function_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.util.function_HEADERS}) 
list(LENGTH classes.java.util.function_SRCS classes.java.util.function_SRCS_LENGTH)
if(classes.java.util.function_SRCS_LENGTH)
	add_library(classes.java.util.function OBJECT "${classes.java.util.function_SRCS}" "${classes.java.util.function_HEADERS}")
	jcpp_enable_bigobj(classes.java.util.function)
endif()