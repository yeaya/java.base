#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.net.dns_SRCS)
file(GLOB classes.sun.net.dns_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.net.dns_HEADERS}) 
list(LENGTH classes.sun.net.dns_SRCS classes.sun.net.dns_SRCS_LENGTH)
if(classes.sun.net.dns_SRCS_LENGTH)
	add_library(classes.sun.net.dns OBJECT "${classes.sun.net.dns_SRCS}" "${classes.sun.net.dns_HEADERS}")
	jcpp_enable_bigobj(classes.sun.net.dns)
endif()