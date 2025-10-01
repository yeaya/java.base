#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-classes.java.lang_SRCS)
file(GLOB macosx-classes.java.lang_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-classes.java.lang_HEADERS}) 
list(LENGTH macosx-classes.java.lang_SRCS macosx-classes.java.lang_SRCS_LENGTH)
if(macosx-classes.java.lang_SRCS_LENGTH)
	add_library(macosx-classes.java.lang OBJECT "${macosx-classes.java.lang_SRCS}" "${macosx-classes.java.lang_HEADERS}")
	jcpp_enable_bigobj(macosx-classes.java.lang)
endif()