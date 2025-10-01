#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.io_SRCS)
file(GLOB classes.java.io_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.io_HEADERS}) 
list(LENGTH classes.java.io_SRCS classes.java.io_SRCS_LENGTH)
if(classes.java.io_SRCS_LENGTH)
	add_library(classes.java.io OBJECT "${classes.java.io_SRCS}" "${classes.java.io_HEADERS}")
	jcpp_enable_bigobj(classes.java.io)
endif()