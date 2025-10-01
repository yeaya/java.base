#machine generated

add_subdirectory("provider")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-classes.sun.security_SRCS)
file(GLOB macosx-classes.sun.security_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-classes.sun.security_HEADERS}) 
list(LENGTH macosx-classes.sun.security_SRCS macosx-classes.sun.security_SRCS_LENGTH)
if(macosx-classes.sun.security_SRCS_LENGTH)
	add_library(macosx-classes.sun.security OBJECT "${macosx-classes.sun.security_SRCS}" "${macosx-classes.sun.security_HEADERS}")
	jcpp_enable_bigobj(macosx-classes.sun.security)
endif()