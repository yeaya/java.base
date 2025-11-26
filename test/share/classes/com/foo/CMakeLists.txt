#machine generated

add_subdirectory("content")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(test.com.foo OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(test.com.foo)
endif()