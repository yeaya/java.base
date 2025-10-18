#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.apple.security_SRCS)
file(GLOB macos-classes.apple.security_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.apple.security_HEADERS}) 
list(LENGTH macos-classes.apple.security_SRCS macos-classes.apple.security_SRCS_LENGTH)
if(macos-classes.apple.security_SRCS_LENGTH)
	add_library(macos-classes.apple.security OBJECT "${macos-classes.apple.security_SRCS}" "${macos-classes.apple.security_HEADERS}")
	jcpp_enable_bigobj(macos-classes.apple.security)
endif()