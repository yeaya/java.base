#machine generated

add_subdirectory("loader")
add_subdirectory("misc")
add_subdirectory("module")
add_subdirectory("platform")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(linux.jdk.internal OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(linux.jdk.internal)
endif()