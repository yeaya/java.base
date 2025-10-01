#machine generated

add_subdirectory("cgroupv1")
add_subdirectory("cgroupv2")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" linux-classes.jdk.internal._64_SRCS)
file(GLOB linux-classes.jdk.internal._64_HEADERS *.h *.hpp)
source_group("Include" FILES ${linux-classes.jdk.internal._64_HEADERS}) 
list(LENGTH linux-classes.jdk.internal._64_SRCS linux-classes.jdk.internal._64_SRCS_LENGTH)
if(linux-classes.jdk.internal._64_SRCS_LENGTH)
	add_library(linux-classes.jdk.internal._64 OBJECT "${linux-classes.jdk.internal._64_SRCS}" "${linux-classes.jdk.internal._64_HEADERS}")
	jcpp_enable_bigobj(linux-classes.jdk.internal._64)
endif()