#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.java.io_SRCS)
file(GLOB macos-classes.java.io_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.java.io_HEADERS}) 
list(LENGTH macos-classes.java.io_SRCS macos-classes.java.io_SRCS_LENGTH)
if(macos-classes.java.io_SRCS_LENGTH)
	add_library(macos-classes.java.io OBJECT "${macos-classes.java.io_SRCS}" "${macos-classes.java.io_HEADERS}")
	jcpp_enable_bigobj(macos-classes.java.io)
endif()