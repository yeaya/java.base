#machine generated

add_subdirectory("interfaces")
add_subdirectory("spec")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.crypto_SRCS)
file(GLOB classes.javax.crypto_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.crypto_HEADERS}) 
list(LENGTH classes.javax.crypto_SRCS classes.javax.crypto_SRCS_LENGTH)
if(classes.javax.crypto_SRCS_LENGTH)
	add_library(classes.javax.crypto OBJECT "${classes.javax.crypto_SRCS}" "${classes.javax.crypto_HEADERS}")
	jcpp_enable_bigobj(classes.javax.crypto)
endif()