#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.net.dns_SRCS)
file(GLOB windows-classes.sun.net.dns_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.net.dns_HEADERS}) 
list(LENGTH windows-classes.sun.net.dns_SRCS windows-classes.sun.net.dns_SRCS_LENGTH)
if(windows-classes.sun.net.dns_SRCS_LENGTH)
	add_library(windows-classes.sun.net.dns OBJECT "${windows-classes.sun.net.dns_SRCS}" "${windows-classes.sun.net.dns_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.net.dns)
endif()