#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-classes.sun.nio.ch_SRCS)
file(GLOB macosx-classes.sun.nio.ch_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-classes.sun.nio.ch_HEADERS}) 
list(LENGTH macosx-classes.sun.nio.ch_SRCS macosx-classes.sun.nio.ch_SRCS_LENGTH)
if(macosx-classes.sun.nio.ch_SRCS_LENGTH)
	add_library(macosx-classes.sun.nio.ch OBJECT "${macosx-classes.sun.nio.ch_SRCS}" "${macosx-classes.sun.nio.ch_HEADERS}")
	jcpp_enable_bigobj(macosx-classes.sun.nio.ch)
endif()