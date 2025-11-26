#machine generated

add_subdirectory("io")
add_subdirectory("lang")
add_subdirectory("net")
add_subdirectory("nio")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(linux.java OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(linux.java)
endif()