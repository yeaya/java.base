#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.nio.channels.spi_SRCS)
file(GLOB classes.java.nio.channels.spi_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.nio.channels.spi_HEADERS}) 
list(LENGTH classes.java.nio.channels.spi_SRCS classes.java.nio.channels.spi_SRCS_LENGTH)
if(classes.java.nio.channels.spi_SRCS_LENGTH)
	add_library(classes.java.nio.channels.spi OBJECT "${classes.java.nio.channels.spi_SRCS}" "${classes.java.nio.channels.spi_HEADERS}")
	jcpp_enable_bigobj(classes.java.nio.channels.spi)
endif()