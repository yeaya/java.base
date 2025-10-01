#machine generated

add_subdirectory("spi")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.nio.charset_SRCS)
file(GLOB classes.java.nio.charset_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.nio.charset_HEADERS}) 
list(LENGTH classes.java.nio.charset_SRCS classes.java.nio.charset_SRCS_LENGTH)
if(classes.java.nio.charset_SRCS_LENGTH)
	add_library(classes.java.nio.charset OBJECT "${classes.java.nio.charset_SRCS}" "${classes.java.nio.charset_HEADERS}")
	jcpp_enable_bigobj(classes.java.nio.charset)
endif()