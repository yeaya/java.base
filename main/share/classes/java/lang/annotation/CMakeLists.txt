#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.lang.annotation_SRCS)
file(GLOB classes.java.lang.annotation_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.lang.annotation_HEADERS}) 
list(LENGTH classes.java.lang.annotation_SRCS classes.java.lang.annotation_SRCS_LENGTH)
if(classes.java.lang.annotation_SRCS_LENGTH)
	add_library(classes.java.lang.annotation OBJECT "${classes.java.lang.annotation_SRCS}" "${classes.java.lang.annotation_HEADERS}")
	jcpp_enable_bigobj(classes.java.lang.annotation)
endif()