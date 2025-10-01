#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.text.spi_SRCS)
file(GLOB classes.java.text.spi_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.text.spi_HEADERS}) 
list(LENGTH classes.java.text.spi_SRCS classes.java.text.spi_SRCS_LENGTH)
if(classes.java.text.spi_SRCS_LENGTH)
	add_library(classes.java.text.spi OBJECT "${classes.java.text.spi_SRCS}" "${classes.java.text.spi_HEADERS}")
	jcpp_enable_bigobj(classes.java.text.spi)
endif()