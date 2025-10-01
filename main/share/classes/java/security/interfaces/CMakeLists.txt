#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.security.interf_2_SRCS)
file(GLOB classes.java.security.interf_2_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.security.interf_2_HEADERS}) 
list(LENGTH classes.java.security.interf_2_SRCS classes.java.security.interf_2_SRCS_LENGTH)
if(classes.java.security.interf_2_SRCS_LENGTH)
	add_library(classes.java.security.interf_2 OBJECT "${classes.java.security.interf_2_SRCS}" "${classes.java.security.interf_2_HEADERS}")
	jcpp_enable_bigobj(classes.java.security.interf_2)
endif()