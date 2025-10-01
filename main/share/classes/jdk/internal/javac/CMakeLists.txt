#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.javac_SRCS)
file(GLOB classes.jdk.internal.javac_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.javac_HEADERS}) 
list(LENGTH classes.jdk.internal.javac_SRCS classes.jdk.internal.javac_SRCS_LENGTH)
if(classes.jdk.internal.javac_SRCS_LENGTH)
	add_library(classes.jdk.internal.javac OBJECT "${classes.jdk.internal.javac_SRCS}" "${classes.jdk.internal.javac_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.javac)
endif()