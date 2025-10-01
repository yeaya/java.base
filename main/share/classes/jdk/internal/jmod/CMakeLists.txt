#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.jmod_SRCS)
file(GLOB classes.jdk.internal.jmod_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.jmod_HEADERS}) 
list(LENGTH classes.jdk.internal.jmod_SRCS classes.jdk.internal.jmod_SRCS_LENGTH)
if(classes.jdk.internal.jmod_SRCS_LENGTH)
	add_library(classes.jdk.internal.jmod OBJECT "${classes.jdk.internal.jmod_SRCS}" "${classes.jdk.internal.jmod_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.jmod)
endif()