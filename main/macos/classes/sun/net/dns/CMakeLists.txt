#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.sun.net.dns_SRCS)
file(GLOB macos-classes.sun.net.dns_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.sun.net.dns_HEADERS}) 
list(LENGTH macos-classes.sun.net.dns_SRCS macos-classes.sun.net.dns_SRCS_LENGTH)
if(macos-classes.sun.net.dns_SRCS_LENGTH)
	add_library(macos-classes.sun.net.dns OBJECT "${macos-classes.sun.net.dns_SRCS}" "${macos-classes.sun.net.dns_HEADERS}")
	jcpp_enable_bigobj(macos-classes.sun.net.dns)
endif()