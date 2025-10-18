#machine generated

add_subdirectory("loader")
add_subdirectory("misc")
add_subdirectory("platform")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.jdk.internal_SRCS)
file(GLOB macos-classes.jdk.internal_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.jdk.internal_HEADERS}) 
list(LENGTH macos-classes.jdk.internal_SRCS macos-classes.jdk.internal_SRCS_LENGTH)
if(macos-classes.jdk.internal_SRCS_LENGTH)
	add_library(macos-classes.jdk.internal OBJECT "${macos-classes.jdk.internal_SRCS}" "${macos-classes.jdk.internal_HEADERS}")
	jcpp_enable_bigobj(macos-classes.jdk.internal)
endif()