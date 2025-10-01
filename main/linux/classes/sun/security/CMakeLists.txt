#machine generated

add_subdirectory("provider")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" linux-classes.sun.security_SRCS)
file(GLOB linux-classes.sun.security_HEADERS *.h *.hpp)
source_group("Include" FILES ${linux-classes.sun.security_HEADERS}) 
list(LENGTH linux-classes.sun.security_SRCS linux-classes.sun.security_SRCS_LENGTH)
if(linux-classes.sun.security_SRCS_LENGTH)
	add_library(linux-classes.sun.security OBJECT "${linux-classes.sun.security_SRCS}" "${linux-classes.sun.security_HEADERS}")
	jcpp_enable_bigobj(linux-classes.sun.security)
endif()