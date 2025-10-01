#machine generated

add_subdirectory("protocol")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-classes.sun.net.www_SRCS)
file(GLOB macosx-classes.sun.net.www_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-classes.sun.net.www_HEADERS}) 
list(LENGTH macosx-classes.sun.net.www_SRCS macosx-classes.sun.net.www_SRCS_LENGTH)
if(macosx-classes.sun.net.www_SRCS_LENGTH)
	add_library(macosx-classes.sun.net.www OBJECT "${macosx-classes.sun.net.www_SRCS}" "${macosx-classes.sun.net.www_HEADERS}")
	jcpp_enable_bigobj(macosx-classes.sun.net.www)
endif()