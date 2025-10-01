#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" linux-classes.sun.net.sdp_SRCS)
file(GLOB linux-classes.sun.net.sdp_HEADERS *.h *.hpp)
source_group("Include" FILES ${linux-classes.sun.net.sdp_HEADERS}) 
list(LENGTH linux-classes.sun.net.sdp_SRCS linux-classes.sun.net.sdp_SRCS_LENGTH)
if(linux-classes.sun.net.sdp_SRCS_LENGTH)
	add_library(linux-classes.sun.net.sdp OBJECT "${linux-classes.sun.net.sdp_SRCS}" "${linux-classes.sun.net.sdp_HEADERS}")
	jcpp_enable_bigobj(linux-classes.sun.net.sdp)
endif()