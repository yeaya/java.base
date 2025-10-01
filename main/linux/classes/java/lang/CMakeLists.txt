#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" linux-classes.java.lang_SRCS)
file(GLOB linux-classes.java.lang_HEADERS *.h *.hpp)
source_group("Include" FILES ${linux-classes.java.lang_HEADERS}) 
list(LENGTH linux-classes.java.lang_SRCS linux-classes.java.lang_SRCS_LENGTH)
if(linux-classes.java.lang_SRCS_LENGTH)
	add_library(linux-classes.java.lang OBJECT "${linux-classes.java.lang_SRCS}" "${linux-classes.java.lang_HEADERS}")
	jcpp_enable_bigobj(linux-classes.java.lang)
endif()