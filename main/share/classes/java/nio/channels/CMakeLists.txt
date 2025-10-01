#machine generated

add_subdirectory("spi")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.nio.channels_SRCS)
file(GLOB classes.java.nio.channels_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.nio.channels_HEADERS}) 
list(LENGTH classes.java.nio.channels_SRCS classes.java.nio.channels_SRCS_LENGTH)
if(classes.java.nio.channels_SRCS_LENGTH)
	add_library(classes.java.nio.channels OBJECT "${classes.java.nio.channels_SRCS}" "${classes.java.nio.channels_HEADERS}")
	jcpp_enable_bigobj(classes.java.nio.channels)
endif()