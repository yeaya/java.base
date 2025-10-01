#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-classes.java.io_SRCS)
file(GLOB macosx-classes.java.io_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-classes.java.io_HEADERS}) 
list(LENGTH macosx-classes.java.io_SRCS macosx-classes.java.io_SRCS_LENGTH)
if(macosx-classes.java.io_SRCS_LENGTH)
	add_library(macosx-classes.java.io OBJECT "${macosx-classes.java.io_SRCS}" "${macosx-classes.java.io_HEADERS}")
	jcpp_enable_bigobj(macosx-classes.java.io)
endif()