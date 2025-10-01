if(JCPP_OS STREQUAL "linux")
	set(IS_UNIX 1)
	include_directories(
		"linux"
	)
	aux_source_directory("linux" SRCS)
	aux_source_directory("linux/ch" SRCS)
	aux_source_directory("linux/fs" SRCS)
elseif(JCPP_OS STREQUAL "macosx")
	set(IS_UNIX 1)
	include_directories(
		"macosx"
	)
	aux_source_directory("macosx" SRCS)
	aux_source_directory("macosx/ch" SRCS)
	aux_source_directory("macosx/fs" SRCS)
elseif(JCPP_OS STREQUAL "windows")
	include_directories(
		"windows"
	)
	aux_source_directory("windows" SRCS)
	aux_source_directory("windows/ch" SRCS)
	aux_source_directory("windows/fs" SRCS)
endif()

if(IS_UNIX)
	include_directories(
		"unix"
	)
	aux_source_directory("unix" SRCS)
	aux_source_directory("unix/ch" SRCS)
	aux_source_directory("unix/fs" SRCS)
endif()

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" SRCS)
aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}/ch" SRCS)
aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}/fs" SRCS)
add_library(libnio OBJECT "${SRCS}")
target_compile_definitions(libnio PUBLIC
    -DLIBRARY_NAME=nio -DSTATIC_BUILD
)