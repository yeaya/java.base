#machine generated

add_subdirectory("io")
add_subdirectory("lang")
add_subdirectory("net")
add_subdirectory("nio")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" linux-classes.java_SRCS)
file(GLOB linux-classes.java_HEADERS *.h *.hpp)
source_group("Include" FILES ${linux-classes.java_HEADERS}) 
list(LENGTH linux-classes.java_SRCS linux-classes.java_SRCS_LENGTH)
if(linux-classes.java_SRCS_LENGTH)
	add_library(linux-classes.java OBJECT "${linux-classes.java_SRCS}" "${linux-classes.java_HEADERS}")
	jcpp_enable_bigobj(linux-classes.java)
endif()