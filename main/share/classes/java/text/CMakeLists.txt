#machine generated

add_subdirectory("spi")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.text_SRCS)
file(GLOB classes.java.text_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.text_HEADERS}) 
list(LENGTH classes.java.text_SRCS classes.java.text_SRCS_LENGTH)
if(classes.java.text_SRCS_LENGTH)
	add_library(classes.java.text OBJECT "${classes.java.text_SRCS}" "${classes.java.text_HEADERS}")
	jcpp_enable_bigobj(classes.java.text)
endif()