#machine generated

add_subdirectory("protocol")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" linux-classes.sun.net.www_SRCS)
file(GLOB linux-classes.sun.net.www_HEADERS *.h *.hpp)
source_group("Include" FILES ${linux-classes.sun.net.www_HEADERS}) 
list(LENGTH linux-classes.sun.net.www_SRCS linux-classes.sun.net.www_SRCS_LENGTH)
if(linux-classes.sun.net.www_SRCS_LENGTH)
	add_library(linux-classes.sun.net.www OBJECT "${linux-classes.sun.net.www_SRCS}" "${linux-classes.sun.net.www_HEADERS}")
	jcpp_enable_bigobj(linux-classes.sun.net.www)
endif()