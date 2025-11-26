#machine generated

add_subdirectory("chrono")
add_subdirectory("format")
add_subdirectory("temporal")
add_subdirectory("zone")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(java.time OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(java.time)
endif()