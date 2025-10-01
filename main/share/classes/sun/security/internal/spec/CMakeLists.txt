#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.security.intern_44_SRCS)
file(GLOB classes.sun.security.intern_44_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.security.intern_44_HEADERS}) 
list(LENGTH classes.sun.security.intern_44_SRCS classes.sun.security.intern_44_SRCS_LENGTH)
if(classes.sun.security.intern_44_SRCS_LENGTH)
	add_library(classes.sun.security.intern_44 OBJECT "${classes.sun.security.intern_44_SRCS}" "${classes.sun.security.intern_44_HEADERS}")
	jcpp_enable_bigobj(classes.sun.security.intern_44)
endif()