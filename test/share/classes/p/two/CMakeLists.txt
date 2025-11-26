#machine generated

add_subdirectory("internal")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(test.p.two OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(test.p.two)
endif()