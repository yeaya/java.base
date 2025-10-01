#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.security.intern_43_SRCS)
file(GLOB classes.sun.security.intern_43_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.security.intern_43_HEADERS}) 
list(LENGTH classes.sun.security.intern_43_SRCS classes.sun.security.intern_43_SRCS_LENGTH)
if(classes.sun.security.intern_43_SRCS_LENGTH)
	add_library(classes.sun.security.intern_43 OBJECT "${classes.sun.security.intern_43_SRCS}" "${classes.sun.security.intern_43_HEADERS}")
	jcpp_enable_bigobj(classes.sun.security.intern_43)
endif()