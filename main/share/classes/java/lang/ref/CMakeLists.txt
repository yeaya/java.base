#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.lang.ref_SRCS)
file(GLOB classes.java.lang.ref_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.lang.ref_HEADERS}) 
list(LENGTH classes.java.lang.ref_SRCS classes.java.lang.ref_SRCS_LENGTH)
if(classes.java.lang.ref_SRCS_LENGTH)
	add_library(classes.java.lang.ref OBJECT "${classes.java.lang.ref_SRCS}" "${classes.java.lang.ref_HEADERS}")
	jcpp_enable_bigobj(classes.java.lang.ref)
endif()