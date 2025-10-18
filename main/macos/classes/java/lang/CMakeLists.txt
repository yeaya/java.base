#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.java.lang_SRCS)
file(GLOB macos-classes.java.lang_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.java.lang_HEADERS}) 
list(LENGTH macos-classes.java.lang_SRCS macos-classes.java.lang_SRCS_LENGTH)
if(macos-classes.java.lang_SRCS_LENGTH)
	add_library(macos-classes.java.lang OBJECT "${macos-classes.java.lang_SRCS}" "${macos-classes.java.lang_HEADERS}")
	jcpp_enable_bigobj(macos-classes.java.lang)
endif()