#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.util.jar_SRCS)
file(GLOB classes.java.util.jar_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.util.jar_HEADERS}) 
list(LENGTH classes.java.util.jar_SRCS classes.java.util.jar_SRCS_LENGTH)
if(classes.java.util.jar_SRCS_LENGTH)
	add_library(classes.java.util.jar OBJECT "${classes.java.util.jar_SRCS}" "${classes.java.util.jar_HEADERS}")
	jcpp_enable_bigobj(classes.java.util.jar)
endif()