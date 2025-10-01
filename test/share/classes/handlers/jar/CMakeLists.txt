#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.handlers.jar_SRCS)
file(GLOB test-classes.handlers.jar_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.handlers.jar_HEADERS}) 
list(LENGTH test-classes.handlers.jar_SRCS test-classes.handlers.jar_SRCS_LENGTH)
if(test-classes.handlers.jar_SRCS_LENGTH)
	add_library(test-classes.handlers.jar OBJECT "${test-classes.handlers.jar_SRCS}" "${test-classes.handlers.jar_HEADERS}")
	jcpp_enable_bigobj(test-classes.handlers.jar)
endif()