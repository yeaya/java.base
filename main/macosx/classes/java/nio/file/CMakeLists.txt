#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-classes.java.nio.file_SRCS)
file(GLOB macosx-classes.java.nio.file_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-classes.java.nio.file_HEADERS}) 
list(LENGTH macosx-classes.java.nio.file_SRCS macosx-classes.java.nio.file_SRCS_LENGTH)
if(macosx-classes.java.nio.file_SRCS_LENGTH)
	add_library(macosx-classes.java.nio.file OBJECT "${macosx-classes.java.nio.file_SRCS}" "${macosx-classes.java.nio.file_HEADERS}")
	jcpp_enable_bigobj(macosx-classes.java.nio.file)
endif()