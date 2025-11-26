#machine generated

add_subdirectory("channels")
add_subdirectory("charset")
add_subdirectory("file")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(java.nio OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(java.nio)
endif()