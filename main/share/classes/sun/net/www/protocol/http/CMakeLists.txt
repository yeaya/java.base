#machine generated

add_subdirectory("ntlm")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.net.www.protoco_29_SRCS)
file(GLOB classes.sun.net.www.protoco_29_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.net.www.protoco_29_HEADERS}) 
list(LENGTH classes.sun.net.www.protoco_29_SRCS classes.sun.net.www.protoco_29_SRCS_LENGTH)
if(classes.sun.net.www.protoco_29_SRCS_LENGTH)
	add_library(classes.sun.net.www.protoco_29 OBJECT "${classes.sun.net.www.protoco_29_SRCS}" "${classes.sun.net.www.protoco_29_HEADERS}")
	jcpp_enable_bigobj(classes.sun.net.www.protoco_29)
endif()