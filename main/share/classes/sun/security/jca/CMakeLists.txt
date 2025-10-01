#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.security.jca_SRCS)
file(GLOB classes.sun.security.jca_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.security.jca_HEADERS}) 
list(LENGTH classes.sun.security.jca_SRCS classes.sun.security.jca_SRCS_LENGTH)
if(classes.sun.security.jca_SRCS_LENGTH)
	add_library(classes.sun.security.jca OBJECT "${classes.sun.security.jca_SRCS}" "${classes.sun.security.jca_HEADERS}")
	jcpp_enable_bigobj(classes.sun.security.jca)
endif()