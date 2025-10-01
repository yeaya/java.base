#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.net.spi_SRCS)
file(GLOB classes.java.net.spi_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.net.spi_HEADERS}) 
list(LENGTH classes.java.net.spi_SRCS classes.java.net.spi_SRCS_LENGTH)
if(classes.java.net.spi_SRCS_LENGTH)
	add_library(classes.java.net.spi OBJECT "${classes.java.net.spi_SRCS}" "${classes.java.net.spi_HEADERS}")
	jcpp_enable_bigobj(classes.java.net.spi)
endif()