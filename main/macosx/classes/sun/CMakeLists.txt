#machine generated

add_subdirectory("net")
add_subdirectory("nio")
add_subdirectory("security")
add_subdirectory("util")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-classes.sun_SRCS)
file(GLOB macosx-classes.sun_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-classes.sun_HEADERS}) 
list(LENGTH macosx-classes.sun_SRCS macosx-classes.sun_SRCS_LENGTH)
if(macosx-classes.sun_SRCS_LENGTH)
	add_library(macosx-classes.sun OBJECT "${macosx-classes.sun_SRCS}" "${macosx-classes.sun_HEADERS}")
	jcpp_enable_bigobj(macosx-classes.sun)
endif()