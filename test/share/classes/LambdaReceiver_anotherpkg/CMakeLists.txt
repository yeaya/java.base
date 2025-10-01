#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.LambdaReceiver_86_SRCS)
file(GLOB test-classes.LambdaReceiver_86_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.LambdaReceiver_86_HEADERS}) 
list(LENGTH test-classes.LambdaReceiver_86_SRCS test-classes.LambdaReceiver_86_SRCS_LENGTH)
if(test-classes.LambdaReceiver_86_SRCS_LENGTH)
	add_library(test-classes.LambdaReceiver_86 OBJECT "${test-classes.LambdaReceiver_86_SRCS}" "${test-classes.LambdaReceiver_86_HEADERS}")
	jcpp_enable_bigobj(test-classes.LambdaReceiver_86)
endif()