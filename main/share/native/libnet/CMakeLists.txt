if(JCPP_OS STREQUAL "linux")
	set(IS_UNIX 1)
	include_directories(
		"linux"
	)
	aux_source_directory("linux" SRCS)
elseif(JCPP_OS STREQUAL "macosx")
	set(IS_UNIX 1)
	include_directories(
		"macosx"
	)
	aux_source_directory("macosx" SRCS)
elseif(JCPP_OS STREQUAL "windows")
	include_directories(
		"windows"
	)
	aux_source_directory("windows" SRCS)
endif()

if(IS_UNIX)
	include_directories(
		"unix"
	)
	aux_source_directory("unix" SRCS)
endif()

if(JCPP_OS STREQUAL "macosx")
	list(REMOVE_ITEM SRCS "unix/DefaultProxySelector.c")
endif()

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS})
add_library(libnet OBJECT "${SRCS}" "${HEADERS}")
target_compile_definitions(libnet PUBLIC
    -DLIBRARY_NAME=net -DSTATIC_BUILD
)