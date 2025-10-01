#machine generated

add_subdirectory("dns")
add_subdirectory("sdp")
add_subdirectory("www")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-classes.sun.net_SRCS)
file(GLOB macosx-classes.sun.net_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-classes.sun.net_HEADERS}) 
list(LENGTH macosx-classes.sun.net_SRCS macosx-classes.sun.net_SRCS_LENGTH)
if(macosx-classes.sun.net_SRCS_LENGTH)
	add_library(macosx-classes.sun.net OBJECT "${macosx-classes.sun.net_SRCS}" "${macosx-classes.sun.net_HEADERS}")
	jcpp_enable_bigobj(macosx-classes.sun.net)
endif()