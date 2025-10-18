#machine generated

add_subdirectory("security")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.apple_SRCS)
file(GLOB macos-classes.apple_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.apple_HEADERS}) 
list(LENGTH macos-classes.apple_SRCS macos-classes.apple_SRCS_LENGTH)
if(macos-classes.apple_SRCS_LENGTH)
	add_library(macos-classes.apple OBJECT "${macos-classes.apple_SRCS}" "${macos-classes.apple_HEADERS}")
	jcpp_enable_bigobj(macos-classes.apple)
endif()