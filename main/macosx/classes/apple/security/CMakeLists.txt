#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-classes.apple.security_SRCS)
file(GLOB macosx-classes.apple.security_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-classes.apple.security_HEADERS}) 
list(LENGTH macosx-classes.apple.security_SRCS macosx-classes.apple.security_SRCS_LENGTH)
if(macosx-classes.apple.security_SRCS_LENGTH)
	add_library(macosx-classes.apple.security OBJECT "${macosx-classes.apple.security_SRCS}" "${macosx-classes.apple.security_HEADERS}")
	jcpp_enable_bigobj(macosx-classes.apple.security)
endif()