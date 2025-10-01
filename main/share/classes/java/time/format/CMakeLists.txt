#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.time.format_SRCS)
file(GLOB classes.java.time.format_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.time.format_HEADERS}) 
list(LENGTH classes.java.time.format_SRCS classes.java.time.format_SRCS_LENGTH)
if(classes.java.time.format_SRCS_LENGTH)
	add_library(classes.java.time.format OBJECT "${classes.java.time.format_SRCS}" "${classes.java.time.format_HEADERS}")
	jcpp_enable_bigobj(classes.java.time.format)
endif()