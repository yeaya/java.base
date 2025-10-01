#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.org.w3c.dom.css_SRCS)
file(GLOB test-classes.org.w3c.dom.css_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.org.w3c.dom.css_HEADERS}) 
list(LENGTH test-classes.org.w3c.dom.css_SRCS test-classes.org.w3c.dom.css_SRCS_LENGTH)
if(test-classes.org.w3c.dom.css_SRCS_LENGTH)
	add_library(test-classes.org.w3c.dom.css OBJECT "${test-classes.org.w3c.dom.css_SRCS}" "${test-classes.org.w3c.dom.css_HEADERS}")
	jcpp_enable_bigobj(test-classes.org.w3c.dom.css)
endif()