#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.lang.reflect_SRCS)
file(GLOB classes.java.lang.reflect_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.lang.reflect_HEADERS}) 
list(LENGTH classes.java.lang.reflect_SRCS classes.java.lang.reflect_SRCS_LENGTH)
if(classes.java.lang.reflect_SRCS_LENGTH)
	add_library(classes.java.lang.reflect OBJECT "${classes.java.lang.reflect_SRCS}" "${classes.java.lang.reflect_HEADERS}")
	jcpp_enable_bigobj(classes.java.lang.reflect)
endif()