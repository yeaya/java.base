#machine generated

add_subdirectory("net")
add_subdirectory("nio")
add_subdirectory("security")
add_subdirectory("util")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.sun_SRCS)
file(GLOB macos-classes.sun_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.sun_HEADERS}) 
list(LENGTH macos-classes.sun_SRCS macos-classes.sun_SRCS_LENGTH)
if(macos-classes.sun_SRCS_LENGTH)
	add_library(macos-classes.sun OBJECT "${macos-classes.sun_SRCS}" "${macos-classes.sun_HEADERS}")
	jcpp_enable_bigobj(macos-classes.sun)
endif()