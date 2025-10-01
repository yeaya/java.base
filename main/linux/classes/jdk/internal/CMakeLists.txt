#machine generated

add_subdirectory("loader")
add_subdirectory("misc")
add_subdirectory("platform")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" linux-classes.jdk.internal_SRCS)
file(GLOB linux-classes.jdk.internal_HEADERS *.h *.hpp)
source_group("Include" FILES ${linux-classes.jdk.internal_HEADERS}) 
list(LENGTH linux-classes.jdk.internal_SRCS linux-classes.jdk.internal_SRCS_LENGTH)
if(linux-classes.jdk.internal_SRCS_LENGTH)
	add_library(linux-classes.jdk.internal OBJECT "${linux-classes.jdk.internal_SRCS}" "${linux-classes.jdk.internal_HEADERS}")
	jcpp_enable_bigobj(linux-classes.jdk.internal)
endif()