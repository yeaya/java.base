#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.pkg.subpkg_SRCS)
file(GLOB test-classes.pkg.subpkg_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.pkg.subpkg_HEADERS}) 
list(LENGTH test-classes.pkg.subpkg_SRCS test-classes.pkg.subpkg_SRCS_LENGTH)
if(test-classes.pkg.subpkg_SRCS_LENGTH)
	add_library(test-classes.pkg.subpkg OBJECT "${test-classes.pkg.subpkg_SRCS}" "${test-classes.pkg.subpkg_HEADERS}")
	jcpp_enable_bigobj(test-classes.pkg.subpkg)
endif()