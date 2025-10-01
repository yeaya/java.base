#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.lang.invoke_SRCS)
file(GLOB classes.java.lang.invoke_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.lang.invoke_HEADERS}) 
list(LENGTH classes.java.lang.invoke_SRCS classes.java.lang.invoke_SRCS_LENGTH)
if(classes.java.lang.invoke_SRCS_LENGTH)
	add_library(classes.java.lang.invoke OBJECT "${classes.java.lang.invoke_SRCS}" "${classes.java.lang.invoke_HEADERS}")
	jcpp_enable_bigobj(classes.java.lang.invoke)
endif()