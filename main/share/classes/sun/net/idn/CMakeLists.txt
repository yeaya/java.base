#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.net.idn_SRCS)
file(GLOB classes.sun.net.idn_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.net.idn_HEADERS}) 
list(LENGTH classes.sun.net.idn_SRCS classes.sun.net.idn_SRCS_LENGTH)
if(classes.sun.net.idn_SRCS_LENGTH)
	add_library(classes.sun.net.idn OBJECT "${classes.sun.net.idn_SRCS}" "${classes.sun.net.idn_HEADERS}")
	jcpp_enable_bigobj(classes.sun.net.idn)
endif()