#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-classes.sun.net.dns_SRCS)
file(GLOB macosx-classes.sun.net.dns_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-classes.sun.net.dns_HEADERS}) 
list(LENGTH macosx-classes.sun.net.dns_SRCS macosx-classes.sun.net.dns_SRCS_LENGTH)
if(macosx-classes.sun.net.dns_SRCS_LENGTH)
	add_library(macosx-classes.sun.net.dns OBJECT "${macosx-classes.sun.net.dns_SRCS}" "${macosx-classes.sun.net.dns_HEADERS}")
	jcpp_enable_bigobj(macosx-classes.sun.net.dns)
endif()