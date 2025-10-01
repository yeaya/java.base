#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" linux-classes.sun.net.www.p_70_SRCS)
file(GLOB linux-classes.sun.net.www.p_70_HEADERS *.h *.hpp)
source_group("Include" FILES ${linux-classes.sun.net.www.p_70_HEADERS}) 
list(LENGTH linux-classes.sun.net.www.p_70_SRCS linux-classes.sun.net.www.p_70_SRCS_LENGTH)
if(linux-classes.sun.net.www.p_70_SRCS_LENGTH)
	add_library(linux-classes.sun.net.www.p_70 OBJECT "${linux-classes.sun.net.www.p_70_SRCS}" "${linux-classes.sun.net.www.p_70_HEADERS}")
	jcpp_enable_bigobj(linux-classes.sun.net.www.p_70)
endif()