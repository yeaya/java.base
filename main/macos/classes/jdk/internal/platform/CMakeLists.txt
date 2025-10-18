#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.jdk.internal._65_SRCS)
file(GLOB macos-classes.jdk.internal._65_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.jdk.internal._65_HEADERS}) 
list(LENGTH macos-classes.jdk.internal._65_SRCS macos-classes.jdk.internal._65_SRCS_LENGTH)
if(macos-classes.jdk.internal._65_SRCS_LENGTH)
	add_library(macos-classes.jdk.internal._65 OBJECT "${macos-classes.jdk.internal._65_SRCS}" "${macos-classes.jdk.internal._65_HEADERS}")
	jcpp_enable_bigobj(macos-classes.jdk.internal._65)
endif()