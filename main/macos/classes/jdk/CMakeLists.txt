#machine generated

add_subdirectory("internal")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.jdk_SRCS)
file(GLOB macos-classes.jdk_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.jdk_HEADERS}) 
list(LENGTH macos-classes.jdk_SRCS macos-classes.jdk_SRCS_LENGTH)
if(macos-classes.jdk_SRCS_LENGTH)
	add_library(macos-classes.jdk OBJECT "${macos-classes.jdk_SRCS}" "${macos-classes.jdk_HEADERS}")
	jcpp_enable_bigobj(macos-classes.jdk)
endif()