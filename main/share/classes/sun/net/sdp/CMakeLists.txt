#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.net.sdp_SRCS)
file(GLOB classes.sun.net.sdp_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.net.sdp_HEADERS}) 
list(LENGTH classes.sun.net.sdp_SRCS classes.sun.net.sdp_SRCS_LENGTH)
if(classes.sun.net.sdp_SRCS_LENGTH)
	add_library(classes.sun.net.sdp OBJECT "${classes.sun.net.sdp_SRCS}" "${classes.sun.net.sdp_HEADERS}")
	jcpp_enable_bigobj(classes.sun.net.sdp)
endif()