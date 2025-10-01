#machine generated

add_subdirectory("internal")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" linux-classes.jdk_SRCS)
file(GLOB linux-classes.jdk_HEADERS *.h *.hpp)
source_group("Include" FILES ${linux-classes.jdk_HEADERS}) 
list(LENGTH linux-classes.jdk_SRCS linux-classes.jdk_SRCS_LENGTH)
if(linux-classes.jdk_SRCS_LENGTH)
	add_library(linux-classes.jdk OBJECT "${linux-classes.jdk_SRCS}" "${linux-classes.jdk_HEADERS}")
	jcpp_enable_bigobj(linux-classes.jdk)
endif()