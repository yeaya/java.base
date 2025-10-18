#machine generated

add_subdirectory("file")
add_subdirectory("http")
add_subdirectory("jar")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" linux-classes.sun.net.www.p_57_SRCS)
file(GLOB linux-classes.sun.net.www.p_57_HEADERS *.h *.hpp)
source_group("Include" FILES ${linux-classes.sun.net.www.p_57_HEADERS}) 
list(LENGTH linux-classes.sun.net.www.p_57_SRCS linux-classes.sun.net.www.p_57_SRCS_LENGTH)
if(linux-classes.sun.net.www.p_57_SRCS_LENGTH)
	add_library(linux-classes.sun.net.www.p_57 OBJECT "${linux-classes.sun.net.www.p_57_SRCS}" "${linux-classes.sun.net.www.p_57_HEADERS}")
	jcpp_enable_bigobj(linux-classes.sun.net.www.p_57)
endif()