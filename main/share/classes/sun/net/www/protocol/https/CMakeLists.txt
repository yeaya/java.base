#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.net.www.protoco_31_SRCS)
file(GLOB classes.sun.net.www.protoco_31_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.net.www.protoco_31_HEADERS}) 
list(LENGTH classes.sun.net.www.protoco_31_SRCS classes.sun.net.www.protoco_31_SRCS_LENGTH)
if(classes.sun.net.www.protoco_31_SRCS_LENGTH)
	add_library(classes.sun.net.www.protoco_31 OBJECT "${classes.sun.net.www.protoco_31_SRCS}" "${classes.sun.net.www.protoco_31_HEADERS}")
	jcpp_enable_bigobj(classes.sun.net.www.protoco_31)
endif()