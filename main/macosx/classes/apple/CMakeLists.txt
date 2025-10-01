#machine generated

add_subdirectory("security")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-classes.apple_SRCS)
file(GLOB macosx-classes.apple_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-classes.apple_HEADERS}) 
list(LENGTH macosx-classes.apple_SRCS macosx-classes.apple_SRCS_LENGTH)
if(macosx-classes.apple_SRCS_LENGTH)
	add_library(macosx-classes.apple OBJECT "${macosx-classes.apple_SRCS}" "${macosx-classes.apple_HEADERS}")
	jcpp_enable_bigobj(macosx-classes.apple)
endif()