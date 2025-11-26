#machine generated

add_subdirectory("concurrent")
add_subdirectory("function")
add_subdirectory("jar")
add_subdirectory("random")
add_subdirectory("regex")
add_subdirectory("spi")
add_subdirectory("stream")
add_subdirectory("zip")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(java.util OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(java.util)
endif()