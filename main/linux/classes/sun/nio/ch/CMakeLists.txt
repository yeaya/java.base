#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" linux-classes.sun.nio.ch_SRCS)
file(GLOB linux-classes.sun.nio.ch_HEADERS *.h *.hpp)
source_group("Include" FILES ${linux-classes.sun.nio.ch_HEADERS}) 
list(LENGTH linux-classes.sun.nio.ch_SRCS linux-classes.sun.nio.ch_SRCS_LENGTH)
if(linux-classes.sun.nio.ch_SRCS_LENGTH)
	add_library(linux-classes.sun.nio.ch OBJECT "${linux-classes.sun.nio.ch_SRCS}" "${linux-classes.sun.nio.ch_HEADERS}")
	jcpp_enable_bigobj(linux-classes.sun.nio.ch)
endif()