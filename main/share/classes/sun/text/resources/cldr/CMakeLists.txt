#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.text.resources._49_SRCS)
file(GLOB classes.sun.text.resources._49_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.text.resources._49_HEADERS}) 
list(LENGTH classes.sun.text.resources._49_SRCS classes.sun.text.resources._49_SRCS_LENGTH)
if(classes.sun.text.resources._49_SRCS_LENGTH)
	add_library(classes.sun.text.resources._49 OBJECT "${classes.sun.text.resources._49_SRCS}" "${classes.sun.text.resources._49_HEADERS}")
	jcpp_enable_bigobj(classes.sun.text.resources._49)
endif()