#machine generated

add_subdirectory("protocol")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.sun.net.www_SRCS)
file(GLOB macos-classes.sun.net.www_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.sun.net.www_HEADERS}) 
list(LENGTH macos-classes.sun.net.www_SRCS macos-classes.sun.net.www_SRCS_LENGTH)
if(macos-classes.sun.net.www_SRCS_LENGTH)
	add_library(macos-classes.sun.net.www OBJECT "${macos-classes.sun.net.www_SRCS}" "${macos-classes.sun.net.www_HEADERS}")
	jcpp_enable_bigobj(macos-classes.sun.net.www)
endif()