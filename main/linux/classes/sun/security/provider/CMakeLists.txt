#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" linux-classes.sun.security._72_SRCS)
file(GLOB linux-classes.sun.security._72_HEADERS *.h *.hpp)
source_group("Include" FILES ${linux-classes.sun.security._72_HEADERS}) 
list(LENGTH linux-classes.sun.security._72_SRCS linux-classes.sun.security._72_SRCS_LENGTH)
if(linux-classes.sun.security._72_SRCS_LENGTH)
	add_library(linux-classes.sun.security._72 OBJECT "${linux-classes.sun.security._72_SRCS}" "${linux-classes.sun.security._72_HEADERS}")
	jcpp_enable_bigobj(linux-classes.sun.security._72)
endif()