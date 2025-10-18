#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.jdk.internal._63_SRCS)
file(GLOB macos-classes.jdk.internal._63_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.jdk.internal._63_HEADERS}) 
list(LENGTH macos-classes.jdk.internal._63_SRCS macos-classes.jdk.internal._63_SRCS_LENGTH)
if(macos-classes.jdk.internal._63_SRCS_LENGTH)
	add_library(macos-classes.jdk.internal._63 OBJECT "${macos-classes.jdk.internal._63_SRCS}" "${macos-classes.jdk.internal._63_HEADERS}")
	jcpp_enable_bigobj(macos-classes.jdk.internal._63)
endif()