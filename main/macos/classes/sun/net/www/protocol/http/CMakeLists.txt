#machine generated

add_subdirectory("ntlm")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.sun.net.www.p_68_SRCS)
file(GLOB macos-classes.sun.net.www.p_68_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.sun.net.www.p_68_HEADERS}) 
list(LENGTH macos-classes.sun.net.www.p_68_SRCS macos-classes.sun.net.www.p_68_SRCS_LENGTH)
if(macos-classes.sun.net.www.p_68_SRCS_LENGTH)
	add_library(macos-classes.sun.net.www.p_68 OBJECT "${macos-classes.sun.net.www.p_68_SRCS}" "${macos-classes.sun.net.www.p_68_HEADERS}")
	jcpp_enable_bigobj(macos-classes.sun.net.www.p_68)
endif()