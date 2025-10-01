#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.nio.file.spi_SRCS)
file(GLOB classes.java.nio.file.spi_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.nio.file.spi_HEADERS}) 
list(LENGTH classes.java.nio.file.spi_SRCS classes.java.nio.file.spi_SRCS_LENGTH)
if(classes.java.nio.file.spi_SRCS_LENGTH)
	add_library(classes.java.nio.file.spi OBJECT "${classes.java.nio.file.spi_SRCS}" "${classes.java.nio.file.spi_HEADERS}")
	jcpp_enable_bigobj(classes.java.nio.file.spi)
endif()