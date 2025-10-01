#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-classes.sun.nio.fs_SRCS)
file(GLOB macosx-classes.sun.nio.fs_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-classes.sun.nio.fs_HEADERS}) 
list(LENGTH macosx-classes.sun.nio.fs_SRCS macosx-classes.sun.nio.fs_SRCS_LENGTH)
if(macosx-classes.sun.nio.fs_SRCS_LENGTH)
	add_library(macosx-classes.sun.nio.fs OBJECT "${macosx-classes.sun.nio.fs_SRCS}" "${macosx-classes.sun.nio.fs_HEADERS}")
	jcpp_enable_bigobj(macosx-classes.sun.nio.fs)
endif()