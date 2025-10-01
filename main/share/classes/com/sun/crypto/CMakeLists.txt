#machine generated

add_subdirectory("provider")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.crypto_SRCS)
file(GLOB classes.com.sun.crypto_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.crypto_HEADERS}) 
list(LENGTH classes.com.sun.crypto_SRCS classes.com.sun.crypto_SRCS_LENGTH)
if(classes.com.sun.crypto_SRCS_LENGTH)
	add_library(classes.com.sun.crypto OBJECT "${classes.com.sun.crypto_SRCS}" "${classes.com.sun.crypto_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.crypto)
endif()