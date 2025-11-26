#machine generated

add_subdirectory("java")
add_subdirectory("jdk")
add_subdirectory("sun")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(linux OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(linux)
endif()