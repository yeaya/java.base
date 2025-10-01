#machine generated

add_subdirectory("subpkg")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.pkg_SRCS)
file(GLOB test-classes.pkg_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.pkg_HEADERS}) 
list(LENGTH test-classes.pkg_SRCS test-classes.pkg_SRCS_LENGTH)
if(test-classes.pkg_SRCS_LENGTH)
	add_library(test-classes.pkg OBJECT "${test-classes.pkg_SRCS}" "${test-classes.pkg_HEADERS}")
	jcpp_enable_bigobj(test-classes.pkg)
endif()