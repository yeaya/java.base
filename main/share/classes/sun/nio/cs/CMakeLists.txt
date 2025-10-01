#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.nio.cs_SRCS)
file(GLOB classes.sun.nio.cs_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.nio.cs_HEADERS}) 
list(LENGTH classes.sun.nio.cs_SRCS classes.sun.nio.cs_SRCS_LENGTH)
if(classes.sun.nio.cs_SRCS_LENGTH)
	add_library(classes.sun.nio.cs OBJECT "${classes.sun.nio.cs_SRCS}" "${classes.sun.nio.cs_HEADERS}")
	jcpp_enable_bigobj(classes.sun.nio.cs)
endif()