#machine generated

add_subdirectory("dns")
add_subdirectory("sdp")
add_subdirectory("www")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.sun.net_SRCS)
file(GLOB macos-classes.sun.net_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.sun.net_HEADERS}) 
list(LENGTH macos-classes.sun.net_SRCS macos-classes.sun.net_SRCS_LENGTH)
if(macos-classes.sun.net_SRCS_LENGTH)
	add_library(macos-classes.sun.net OBJECT "${macos-classes.sun.net_SRCS}" "${macos-classes.sun.net_HEADERS}")
	jcpp_enable_bigobj(macos-classes.sun.net)
endif()