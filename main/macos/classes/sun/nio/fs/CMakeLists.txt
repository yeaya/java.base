#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.sun.nio.fs_SRCS)
file(GLOB macos-classes.sun.nio.fs_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.sun.nio.fs_HEADERS}) 
list(LENGTH macos-classes.sun.nio.fs_SRCS macos-classes.sun.nio.fs_SRCS_LENGTH)
if(macos-classes.sun.nio.fs_SRCS_LENGTH)
	add_library(macos-classes.sun.nio.fs OBJECT "${macos-classes.sun.nio.fs_SRCS}" "${macos-classes.sun.nio.fs_HEADERS}")
	jcpp_enable_bigobj(macos-classes.sun.nio.fs)
endif()