#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.perf_SRCS)
file(GLOB classes.jdk.internal.perf_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.perf_HEADERS}) 
list(LENGTH classes.jdk.internal.perf_SRCS classes.jdk.internal.perf_SRCS_LENGTH)
if(classes.jdk.internal.perf_SRCS_LENGTH)
	add_library(classes.jdk.internal.perf OBJECT "${classes.jdk.internal.perf_SRCS}" "${classes.jdk.internal.perf_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.perf)
endif()