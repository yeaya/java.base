#machine generated

add_subdirectory("impl")
add_subdirectory("internal")
add_subdirectory("resources")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(test.p1 OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(test.p1)
endif()