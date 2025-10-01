#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.security.spec_SRCS)
file(GLOB classes.java.security.spec_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.security.spec_HEADERS}) 
list(LENGTH classes.java.security.spec_SRCS classes.java.security.spec_SRCS_LENGTH)
if(classes.java.security.spec_SRCS_LENGTH)
	add_library(classes.java.security.spec OBJECT "${classes.java.security.spec_SRCS}" "${classes.java.security.spec_HEADERS}")
	jcpp_enable_bigobj(classes.java.security.spec)
endif()