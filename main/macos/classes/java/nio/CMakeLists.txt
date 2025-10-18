#machine generated

add_subdirectory("file")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.java.nio_SRCS)
file(GLOB macos-classes.java.nio_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.java.nio_HEADERS}) 
list(LENGTH macos-classes.java.nio_SRCS macos-classes.java.nio_SRCS_LENGTH)
if(macos-classes.java.nio_SRCS_LENGTH)
	add_library(macos-classes.java.nio OBJECT "${macos-classes.java.nio_SRCS}" "${macos-classes.java.nio_HEADERS}")
	jcpp_enable_bigobj(macos-classes.java.nio)
endif()