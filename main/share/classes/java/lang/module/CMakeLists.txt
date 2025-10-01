#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.lang.module_SRCS)
file(GLOB classes.java.lang.module_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.lang.module_HEADERS}) 
list(LENGTH classes.java.lang.module_SRCS classes.java.lang.module_SRCS_LENGTH)
if(classes.java.lang.module_SRCS_LENGTH)
	add_library(classes.java.lang.module OBJECT "${classes.java.lang.module_SRCS}" "${classes.java.lang.module_HEADERS}")
	jcpp_enable_bigobj(classes.java.lang.module)
endif()