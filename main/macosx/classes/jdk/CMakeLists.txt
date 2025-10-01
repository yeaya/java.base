#machine generated

add_subdirectory("internal")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-classes.jdk_SRCS)
file(GLOB macosx-classes.jdk_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-classes.jdk_HEADERS}) 
list(LENGTH macosx-classes.jdk_SRCS macosx-classes.jdk_SRCS_LENGTH)
if(macosx-classes.jdk_SRCS_LENGTH)
	add_library(macosx-classes.jdk OBJECT "${macosx-classes.jdk_SRCS}" "${macosx-classes.jdk_HEADERS}")
	jcpp_enable_bigobj(macosx-classes.jdk)
endif()