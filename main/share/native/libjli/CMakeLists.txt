

include_directories(
	.
)

if(JCPP_OS STREQUAL "linux")
	include_directories(
		"unix"
		"linux"
	)
	aux_source_directory("linux" SRCS)
	aux_source_directory("unix" SRCS)
elseif(JCPP_OS STREQUAL "macos")
	include_directories(
		"unix"
		"macos"
	)
	set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -x objective-c")
	aux_source_directory("macos" SRCS)
	set(SRCS ${SRCS} ${CMAKE_CURRENT_SOURCE_DIR}/unix/java_md_common.c)
elseif(JCPP_OS STREQUAL "windows")
	include_directories(
		"windows"
	)
	aux_source_directory("windows" SRCS)
endif()

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS})
add_library(libjli OBJECT "${SRCS}" "${HEADERS}")