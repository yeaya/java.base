#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" linux-classes.jdk.internal._62_SRCS)
file(GLOB linux-classes.jdk.internal._62_HEADERS *.h *.hpp)
source_group("Include" FILES ${linux-classes.jdk.internal._62_HEADERS}) 
list(LENGTH linux-classes.jdk.internal._62_SRCS linux-classes.jdk.internal._62_SRCS_LENGTH)
if(linux-classes.jdk.internal._62_SRCS_LENGTH)
	add_library(linux-classes.jdk.internal._62 OBJECT "${linux-classes.jdk.internal._62_SRCS}" "${linux-classes.jdk.internal._62_HEADERS}")
	jcpp_enable_bigobj(linux-classes.jdk.internal._62)
endif()