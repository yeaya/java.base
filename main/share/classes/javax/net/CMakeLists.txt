#machine generated

add_subdirectory("ssl")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.net_SRCS)
file(GLOB classes.javax.net_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.net_HEADERS}) 
list(LENGTH classes.javax.net_SRCS classes.javax.net_SRCS_LENGTH)
if(classes.javax.net_SRCS_LENGTH)
	add_library(classes.javax.net OBJECT "${classes.javax.net_SRCS}" "${classes.javax.net_HEADERS}")
	jcpp_enable_bigobj(classes.javax.net)
endif()