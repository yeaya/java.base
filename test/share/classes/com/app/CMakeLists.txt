#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.com.app_SRCS)
file(GLOB test-classes.com.app_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.com.app_HEADERS}) 
list(LENGTH test-classes.com.app_SRCS test-classes.com.app_SRCS_LENGTH)
if(test-classes.com.app_SRCS_LENGTH)
	add_library(test-classes.com.app OBJECT "${test-classes.com.app_SRCS}" "${test-classes.com.app_HEADERS}")
	jcpp_enable_bigobj(test-classes.com.app)
endif()