#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" linux-classes.sun.net.www.p_58_SRCS)
file(GLOB linux-classes.sun.net.www.p_58_HEADERS *.h *.hpp)
source_group("Include" FILES ${linux-classes.sun.net.www.p_58_HEADERS}) 
list(LENGTH linux-classes.sun.net.www.p_58_SRCS linux-classes.sun.net.www.p_58_SRCS_LENGTH)
if(linux-classes.sun.net.www.p_58_SRCS_LENGTH)
	add_library(linux-classes.sun.net.www.p_58 OBJECT "${linux-classes.sun.net.www.p_58_SRCS}" "${linux-classes.sun.net.www.p_58_HEADERS}")
	jcpp_enable_bigobj(linux-classes.sun.net.www.p_58)
endif()