#machine generated

add_subdirectory("ch")
add_subdirectory("fs")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.sun.nio_SRCS)
file(GLOB macos-classes.sun.nio_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.sun.nio_HEADERS}) 
list(LENGTH macos-classes.sun.nio_SRCS macos-classes.sun.nio_SRCS_LENGTH)
if(macos-classes.sun.nio_SRCS_LENGTH)
	add_library(macos-classes.sun.nio OBJECT "${macos-classes.sun.nio_SRCS}" "${macos-classes.sun.nio_HEADERS}")
	jcpp_enable_bigobj(macos-classes.sun.nio)
endif()