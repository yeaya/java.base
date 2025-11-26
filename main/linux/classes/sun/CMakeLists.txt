#machine generated

add_subdirectory("net")
add_subdirectory("nio")
add_subdirectory("security")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(linux.sun OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(linux.sun)
endif()