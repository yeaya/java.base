#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.java.nio.file_SRCS)
file(GLOB macos-classes.java.nio.file_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.java.nio.file_HEADERS}) 
list(LENGTH macos-classes.java.nio.file_SRCS macos-classes.java.nio.file_SRCS_LENGTH)
if(macos-classes.java.nio.file_SRCS_LENGTH)
	add_library(macos-classes.java.nio.file OBJECT "${macos-classes.java.nio.file_SRCS}" "${macos-classes.java.nio.file_HEADERS}")
	jcpp_enable_bigobj(macos-classes.java.nio.file)
endif()