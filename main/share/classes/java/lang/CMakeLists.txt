#machine generated

add_subdirectory("annotation")
add_subdirectory("constant")
add_subdirectory("interpreter")
add_subdirectory("invoke")
add_subdirectory("module")
add_subdirectory("ref")
add_subdirectory("reflect")
add_subdirectory("runtime")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(java.lang OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(java.lang)
endif()