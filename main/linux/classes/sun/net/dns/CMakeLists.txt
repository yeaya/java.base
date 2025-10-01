#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" linux-classes.sun.net.dns_SRCS)
file(GLOB linux-classes.sun.net.dns_HEADERS *.h *.hpp)
source_group("Include" FILES ${linux-classes.sun.net.dns_HEADERS}) 
list(LENGTH linux-classes.sun.net.dns_SRCS linux-classes.sun.net.dns_SRCS_LENGTH)
if(linux-classes.sun.net.dns_SRCS_LENGTH)
	add_library(linux-classes.sun.net.dns OBJECT "${linux-classes.sun.net.dns_SRCS}" "${linux-classes.sun.net.dns_HEADERS}")
	jcpp_enable_bigobj(linux-classes.sun.net.dns)
endif()