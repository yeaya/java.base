#machine generated

add_subdirectory("resources")
add_subdirectory("spi")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.text_SRCS)
file(GLOB classes.sun.text_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.text_HEADERS}) 
list(LENGTH classes.sun.text_SRCS classes.sun.text_SRCS_LENGTH)
if(classes.sun.text_SRCS_LENGTH)
	add_library(classes.sun.text OBJECT "${classes.sun.text_SRCS}" "${classes.sun.text_HEADERS}")
	jcpp_enable_bigobj(classes.sun.text)
endif()