#machine generated

add_subdirectory("cgroupv1")
add_subdirectory("cgroupv2")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(linux.jdk.internal.platform OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(linux.jdk.internal.platform)
endif()