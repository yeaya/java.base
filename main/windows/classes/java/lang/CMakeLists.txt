#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.java.lang_SRCS)
file(GLOB windows-classes.java.lang_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.java.lang_HEADERS}) 
list(LENGTH windows-classes.java.lang_SRCS windows-classes.java.lang_SRCS_LENGTH)
if(windows-classes.java.lang_SRCS_LENGTH)
	add_library(windows-classes.java.lang OBJECT "${windows-classes.java.lang_SRCS}" "${windows-classes.java.lang_HEADERS}")
	jcpp_enable_bigobj(windows-classes.java.lang)
endif()