#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.util.regex_SRCS)
file(GLOB classes.java.util.regex_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.util.regex_HEADERS}) 
list(LENGTH classes.java.util.regex_SRCS classes.java.util.regex_SRCS_LENGTH)
if(classes.java.util.regex_SRCS_LENGTH)
	add_library(classes.java.util.regex OBJECT "${classes.java.util.regex_SRCS}" "${classes.java.util.regex_HEADERS}")
	jcpp_enable_bigobj(classes.java.util.regex)
endif()