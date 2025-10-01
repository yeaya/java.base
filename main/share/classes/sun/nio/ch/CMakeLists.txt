#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.nio.ch_SRCS)
file(GLOB classes.sun.nio.ch_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.nio.ch_HEADERS}) 
list(LENGTH classes.sun.nio.ch_SRCS classes.sun.nio.ch_SRCS_LENGTH)
if(classes.sun.nio.ch_SRCS_LENGTH)
	add_library(classes.sun.nio.ch OBJECT "${classes.sun.nio.ch_SRCS}" "${classes.sun.nio.ch_HEADERS}")
	jcpp_enable_bigobj(classes.sun.nio.ch)
endif()