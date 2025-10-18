#machine generated

add_subdirectory("file")
add_subdirectory("http")
add_subdirectory("jar")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.sun.net.www.p_66_SRCS)
file(GLOB macos-classes.sun.net.www.p_66_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.sun.net.www.p_66_HEADERS}) 
list(LENGTH macos-classes.sun.net.www.p_66_SRCS macos-classes.sun.net.www.p_66_SRCS_LENGTH)
if(macos-classes.sun.net.www.p_66_SRCS_LENGTH)
	add_library(macos-classes.sun.net.www.p_66 OBJECT "${macos-classes.sun.net.www.p_66_SRCS}" "${macos-classes.sun.net.www.p_66_HEADERS}")
	jcpp_enable_bigobj(macos-classes.sun.net.www.p_66)
endif()