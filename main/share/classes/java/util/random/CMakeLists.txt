#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.util.random_SRCS)
file(GLOB classes.java.util.random_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.util.random_HEADERS}) 
list(LENGTH classes.java.util.random_SRCS classes.java.util.random_SRCS_LENGTH)
if(classes.java.util.random_SRCS_LENGTH)
	add_library(classes.java.util.random OBJECT "${classes.java.util.random_SRCS}" "${classes.java.util.random_HEADERS}")
	jcpp_enable_bigobj(classes.java.util.random)
endif()