#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" linux-classes.sun.nio.fs_SRCS)
file(GLOB linux-classes.sun.nio.fs_HEADERS *.h *.hpp)
source_group("Include" FILES ${linux-classes.sun.nio.fs_HEADERS}) 
list(LENGTH linux-classes.sun.nio.fs_SRCS linux-classes.sun.nio.fs_SRCS_LENGTH)
if(linux-classes.sun.nio.fs_SRCS_LENGTH)
	add_library(linux-classes.sun.nio.fs OBJECT "${linux-classes.sun.nio.fs_SRCS}" "${linux-classes.sun.nio.fs_HEADERS}")
	jcpp_enable_bigobj(linux-classes.sun.nio.fs)
endif()