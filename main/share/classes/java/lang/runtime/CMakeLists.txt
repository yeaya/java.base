#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.lang.runtime_SRCS)
file(GLOB classes.java.lang.runtime_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.lang.runtime_HEADERS}) 
list(LENGTH classes.java.lang.runtime_SRCS classes.java.lang.runtime_SRCS_LENGTH)
if(classes.java.lang.runtime_SRCS_LENGTH)
	add_library(classes.java.lang.runtime OBJECT "${classes.java.lang.runtime_SRCS}" "${classes.java.lang.runtime_HEADERS}")
	jcpp_enable_bigobj(classes.java.lang.runtime)
endif()