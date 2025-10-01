#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.lang.constant_SRCS)
file(GLOB classes.java.lang.constant_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.lang.constant_HEADERS}) 
list(LENGTH classes.java.lang.constant_SRCS classes.java.lang.constant_SRCS_LENGTH)
if(classes.java.lang.constant_SRCS_LENGTH)
	add_library(classes.java.lang.constant OBJECT "${classes.java.lang.constant_SRCS}" "${classes.java.lang.constant_HEADERS}")
	jcpp_enable_bigobj(classes.java.lang.constant)
endif()