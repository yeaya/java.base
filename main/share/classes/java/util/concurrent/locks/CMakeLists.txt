#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.util.concurrent_4_SRCS)
file(GLOB classes.java.util.concurrent_4_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.util.concurrent_4_HEADERS}) 
list(LENGTH classes.java.util.concurrent_4_SRCS classes.java.util.concurrent_4_SRCS_LENGTH)
if(classes.java.util.concurrent_4_SRCS_LENGTH)
	add_library(classes.java.util.concurrent_4 OBJECT "${classes.java.util.concurrent_4_SRCS}" "${classes.java.util.concurrent_4_HEADERS}")
	jcpp_enable_bigobj(classes.java.util.concurrent_4)
endif()