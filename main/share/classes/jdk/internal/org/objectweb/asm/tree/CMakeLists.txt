#machine generated

add_subdirectory("analysis")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(jdk.internal.org.objectweb.a_2 OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(jdk.internal.org.objectweb.a_2)
endif()