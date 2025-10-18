#machine generated

add_subdirectory("cgroupv1")
add_subdirectory("cgroupv2")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" linux-classes.jdk.internal._54_SRCS)
file(GLOB linux-classes.jdk.internal._54_HEADERS *.h *.hpp)
source_group("Include" FILES ${linux-classes.jdk.internal._54_HEADERS}) 
list(LENGTH linux-classes.jdk.internal._54_SRCS linux-classes.jdk.internal._54_SRCS_LENGTH)
if(linux-classes.jdk.internal._54_SRCS_LENGTH)
	add_library(linux-classes.jdk.internal._54 OBJECT "${linux-classes.jdk.internal._54_SRCS}" "${linux-classes.jdk.internal._54_HEADERS}")
	jcpp_enable_bigobj(linux-classes.jdk.internal._54)
endif()