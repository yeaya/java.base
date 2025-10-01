#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.jdk.interna_74_SRCS)
file(GLOB windows-classes.jdk.interna_74_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.jdk.interna_74_HEADERS}) 
list(LENGTH windows-classes.jdk.interna_74_SRCS windows-classes.jdk.interna_74_SRCS_LENGTH)
if(windows-classes.jdk.interna_74_SRCS_LENGTH)
	add_library(windows-classes.jdk.interna_74 OBJECT "${windows-classes.jdk.interna_74_SRCS}" "${windows-classes.jdk.interna_74_HEADERS}")
	jcpp_enable_bigobj(windows-classes.jdk.interna_74)
endif()