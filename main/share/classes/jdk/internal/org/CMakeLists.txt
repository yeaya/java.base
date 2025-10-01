#machine generated

add_subdirectory("objectweb")
add_subdirectory("xml")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.org_SRCS)
file(GLOB classes.jdk.internal.org_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.org_HEADERS}) 
list(LENGTH classes.jdk.internal.org_SRCS classes.jdk.internal.org_SRCS_LENGTH)
if(classes.jdk.internal.org_SRCS_LENGTH)
	add_library(classes.jdk.internal.org OBJECT "${classes.jdk.internal.org_SRCS}" "${classes.jdk.internal.org_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.org)
endif()