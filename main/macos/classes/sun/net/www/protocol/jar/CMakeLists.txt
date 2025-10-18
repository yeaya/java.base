#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.sun.net.www.p_70_SRCS)
file(GLOB macos-classes.sun.net.www.p_70_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.sun.net.www.p_70_HEADERS}) 
list(LENGTH macos-classes.sun.net.www.p_70_SRCS macos-classes.sun.net.www.p_70_SRCS_LENGTH)
if(macos-classes.sun.net.www.p_70_SRCS_LENGTH)
	add_library(macos-classes.sun.net.www.p_70 OBJECT "${macos-classes.sun.net.www.p_70_SRCS}" "${macos-classes.sun.net.www.p_70_HEADERS}")
	jcpp_enable_bigobj(macos-classes.sun.net.www.p_70)
endif()