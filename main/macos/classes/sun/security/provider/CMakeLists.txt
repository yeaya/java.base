#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.sun.security._71_SRCS)
file(GLOB macos-classes.sun.security._71_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.sun.security._71_HEADERS}) 
list(LENGTH macos-classes.sun.security._71_SRCS macos-classes.sun.security._71_SRCS_LENGTH)
if(macos-classes.sun.security._71_SRCS_LENGTH)
	add_library(macos-classes.sun.security._71 OBJECT "${macos-classes.sun.security._71_SRCS}" "${macos-classes.sun.security._71_HEADERS}")
	jcpp_enable_bigobj(macos-classes.sun.security._71)
endif()