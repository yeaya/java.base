#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.sun.nio.ch_SRCS)
file(GLOB macos-classes.sun.nio.ch_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.sun.nio.ch_HEADERS}) 
list(LENGTH macos-classes.sun.nio.ch_SRCS macos-classes.sun.nio.ch_SRCS_LENGTH)
if(macos-classes.sun.nio.ch_SRCS_LENGTH)
	add_library(macos-classes.sun.nio.ch OBJECT "${macos-classes.sun.nio.ch_SRCS}" "${macos-classes.sun.nio.ch_HEADERS}")
	jcpp_enable_bigobj(macos-classes.sun.nio.ch)
endif()