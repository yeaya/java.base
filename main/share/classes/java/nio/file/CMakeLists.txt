#machine generated

add_subdirectory("attribute")
add_subdirectory("spi")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.nio.file_SRCS)
file(GLOB classes.java.nio.file_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.nio.file_HEADERS}) 
list(LENGTH classes.java.nio.file_SRCS classes.java.nio.file_SRCS_LENGTH)
if(classes.java.nio.file_SRCS_LENGTH)
	add_library(classes.java.nio.file OBJECT "${classes.java.nio.file_SRCS}" "${classes.java.nio.file_HEADERS}")
	jcpp_enable_bigobj(classes.java.nio.file)
endif()