#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.net.www.protoco_34_SRCS)
file(GLOB classes.sun.net.www.protoco_34_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.net.www.protoco_34_HEADERS}) 
list(LENGTH classes.sun.net.www.protoco_34_SRCS classes.sun.net.www.protoco_34_SRCS_LENGTH)
if(classes.sun.net.www.protoco_34_SRCS_LENGTH)
	add_library(classes.sun.net.www.protoco_34 OBJECT "${classes.sun.net.www.protoco_34_SRCS}" "${classes.sun.net.www.protoco_34_HEADERS}")
	jcpp_enable_bigobj(classes.sun.net.www.protoco_34)
endif()