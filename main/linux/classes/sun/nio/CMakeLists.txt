#machine generated

add_subdirectory("ch")
add_subdirectory("fs")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" linux-classes.sun.nio_SRCS)
file(GLOB linux-classes.sun.nio_HEADERS *.h *.hpp)
source_group("Include" FILES ${linux-classes.sun.nio_HEADERS}) 
list(LENGTH linux-classes.sun.nio_SRCS linux-classes.sun.nio_SRCS_LENGTH)
if(linux-classes.sun.nio_SRCS_LENGTH)
	add_library(linux-classes.sun.nio OBJECT "${linux-classes.sun.nio_SRCS}" "${linux-classes.sun.nio_HEADERS}")
	jcpp_enable_bigobj(linux-classes.sun.nio)
endif()