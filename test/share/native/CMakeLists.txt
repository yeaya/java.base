#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-native_SRCS)
file(GLOB test-native_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-native_HEADERS}) 
list(LENGTH test-native_SRCS test-native_SRCS_LENGTH)
if(test-native_SRCS_LENGTH)
	add_library(test-native OBJECT "${test-native_SRCS}" "${test-native_HEADERS}")
	jcpp_enable_bigobj(test-native)
endif()