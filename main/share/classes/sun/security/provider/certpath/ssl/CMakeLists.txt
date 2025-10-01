#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.security.provid_46_SRCS)
file(GLOB classes.sun.security.provid_46_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.security.provid_46_HEADERS}) 
list(LENGTH classes.sun.security.provid_46_SRCS classes.sun.security.provid_46_SRCS_LENGTH)
if(classes.sun.security.provid_46_SRCS_LENGTH)
	add_library(classes.sun.security.provid_46 OBJECT "${classes.sun.security.provid_46_SRCS}" "${classes.sun.security.provid_46_HEADERS}")
	jcpp_enable_bigobj(classes.sun.security.provid_46)
endif()