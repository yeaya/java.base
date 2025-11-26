#machine generated

add_subdirectory("fake")
add_subdirectory("lang")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(test.java OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(test.java)
endif()