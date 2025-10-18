#machine generated

add_subdirectory("provider")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.sun.security_SRCS)
file(GLOB macos-classes.sun.security_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.sun.security_HEADERS}) 
list(LENGTH macos-classes.sun.security_SRCS macos-classes.sun.security_SRCS_LENGTH)
if(macos-classes.sun.security_SRCS_LENGTH)
	add_library(macos-classes.sun.security OBJECT "${macos-classes.sun.security_SRCS}" "${macos-classes.sun.security_HEADERS}")
	jcpp_enable_bigobj(macos-classes.sun.security)
endif()