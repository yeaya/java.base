#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" linux-classes.sun.security._62_SRCS)
file(GLOB linux-classes.sun.security._62_HEADERS *.h *.hpp)
source_group("Include" FILES ${linux-classes.sun.security._62_HEADERS}) 
list(LENGTH linux-classes.sun.security._62_SRCS linux-classes.sun.security._62_SRCS_LENGTH)
if(linux-classes.sun.security._62_SRCS_LENGTH)
	add_library(linux-classes.sun.security._62 OBJECT "${linux-classes.sun.security._62_SRCS}" "${linux-classes.sun.security._62_HEADERS}")
	jcpp_enable_bigobj(linux-classes.sun.security._62)
endif()