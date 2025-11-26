#machine generated

add_subdirectory("chrono")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(test.tck.java.time OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(test.tck.java.time)
endif()