#machine generated

add_subdirectory("ntlm")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" linux-classes.sun.net.www.p_69_SRCS)
file(GLOB linux-classes.sun.net.www.p_69_HEADERS *.h *.hpp)
source_group("Include" FILES ${linux-classes.sun.net.www.p_69_HEADERS}) 
list(LENGTH linux-classes.sun.net.www.p_69_SRCS linux-classes.sun.net.www.p_69_SRCS_LENGTH)
if(linux-classes.sun.net.www.p_69_SRCS_LENGTH)
	add_library(linux-classes.sun.net.www.p_69 OBJECT "${linux-classes.sun.net.www.p_69_SRCS}" "${linux-classes.sun.net.www.p_69_HEADERS}")
	jcpp_enable_bigobj(linux-classes.sun.net.www.p_69)
endif()