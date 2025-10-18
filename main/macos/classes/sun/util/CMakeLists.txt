#machine generated

add_subdirectory("locale")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.sun.util_SRCS)
file(GLOB macos-classes.sun.util_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.sun.util_HEADERS}) 
list(LENGTH macos-classes.sun.util_SRCS macos-classes.sun.util_SRCS_LENGTH)
if(macos-classes.sun.util_SRCS_LENGTH)
	add_library(macos-classes.sun.util OBJECT "${macos-classes.sun.util_SRCS}" "${macos-classes.sun.util_HEADERS}")
	jcpp_enable_bigobj(macos-classes.sun.util)
endif()