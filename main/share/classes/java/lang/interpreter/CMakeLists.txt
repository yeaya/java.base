#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.lang.interpreter_SRCS)
file(GLOB classes.java.lang.interpreter_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.lang.interpreter_HEADERS}) 
list(LENGTH classes.java.lang.interpreter_SRCS classes.java.lang.interpreter_SRCS_LENGTH)
if(classes.java.lang.interpreter_SRCS_LENGTH)
	add_library(classes.java.lang.interpreter OBJECT "${classes.java.lang.interpreter_SRCS}" "${classes.java.lang.interpreter_HEADERS}")
	jcpp_enable_bigobj(classes.java.lang.interpreter)
endif()