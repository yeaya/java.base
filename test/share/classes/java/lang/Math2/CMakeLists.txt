#machine generated

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(test.java.lang.Math2 OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(test.java.lang.Math2)
endif()