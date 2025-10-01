#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.time.temporal_SRCS)
file(GLOB classes.java.time.temporal_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.time.temporal_HEADERS}) 
list(LENGTH classes.java.time.temporal_SRCS classes.java.time.temporal_SRCS_LENGTH)
if(classes.java.time.temporal_SRCS_LENGTH)
	add_library(classes.java.time.temporal OBJECT "${classes.java.time.temporal_SRCS}" "${classes.java.time.temporal_HEADERS}")
	jcpp_enable_bigobj(classes.java.time.temporal)
endif()