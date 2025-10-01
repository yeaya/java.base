#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" linux-classes.java.net_SRCS)
file(GLOB linux-classes.java.net_HEADERS *.h *.hpp)
source_group("Include" FILES ${linux-classes.java.net_HEADERS}) 
list(LENGTH linux-classes.java.net_SRCS linux-classes.java.net_SRCS_LENGTH)
if(linux-classes.java.net_SRCS_LENGTH)
	add_library(linux-classes.java.net OBJECT "${linux-classes.java.net_SRCS}" "${linux-classes.java.net_HEADERS}")
	jcpp_enable_bigobj(linux-classes.java.net)
endif()