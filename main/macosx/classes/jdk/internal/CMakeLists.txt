#machine generated

add_subdirectory("loader")
add_subdirectory("misc")
add_subdirectory("platform")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-classes.jdk.internal_SRCS)
file(GLOB macosx-classes.jdk.internal_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-classes.jdk.internal_HEADERS}) 
list(LENGTH macosx-classes.jdk.internal_SRCS macosx-classes.jdk.internal_SRCS_LENGTH)
if(macosx-classes.jdk.internal_SRCS_LENGTH)
	add_library(macosx-classes.jdk.internal OBJECT "${macosx-classes.jdk.internal_SRCS}" "${macosx-classes.jdk.internal_HEADERS}")
	jcpp_enable_bigobj(macosx-classes.jdk.internal)
endif()