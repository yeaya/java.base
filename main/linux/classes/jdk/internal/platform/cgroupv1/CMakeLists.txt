#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" linux-classes.jdk.internal._65_SRCS)
file(GLOB linux-classes.jdk.internal._65_HEADERS *.h *.hpp)
source_group("Include" FILES ${linux-classes.jdk.internal._65_HEADERS}) 
list(LENGTH linux-classes.jdk.internal._65_SRCS linux-classes.jdk.internal._65_SRCS_LENGTH)
if(linux-classes.jdk.internal._65_SRCS_LENGTH)
	add_library(linux-classes.jdk.internal._65 OBJECT "${linux-classes.jdk.internal._65_SRCS}" "${linux-classes.jdk.internal._65_HEADERS}")
	jcpp_enable_bigobj(linux-classes.jdk.internal._65)
endif()