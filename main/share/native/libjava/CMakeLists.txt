
if(JCPP_OS STREQUAL "linux")
	set(IS_UNIX 1)
	include_directories(
		"linux"
	)
	aux_source_directory("linux" SRCS)
elseif(JCPP_OS STREQUAL "macos")
	set(IS_UNIX 1)
	include_directories(
		"macos"
	)
	set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -x objective-c")
	aux_source_directory("macos" SRCS)
elseif(JCPP_OS STREQUAL "windows")
	include_directories(
		"windows"
	)
	aux_source_directory("windows" SRCS)
	install(FILES
		windows/jni_md.h
		windows/jlong_md.h
		windows/jdk_util_md.h
		windows/locale_str.h
		windows/gdefs_md.h
		DESTINATION "${JCPP_INSTALL_INCLUDE_DIR}"
	)
endif()

if(IS_UNIX)
	include_directories(
		"unix"
	)
	aux_source_directory("unix" SRCS)
	install(FILES
		unix/jni_md.h
		unix/jlong_md.h
		unix/jdk_util_md.h
		unix/locale_str.h
		unix/gdefs_md.h
		DESTINATION "${JCPP_INSTALL_INCLUDE_DIR}"
	)
endif()

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS})
add_library(libjava OBJECT "${SRCS}" "${HEADERS}")

target_compile_definitions(libjava PUBLIC
    -DARCHPROPNAME="${JCPP_ARCH}"
)

install(FILES
	jni_util.h
	jlong.h
	jdk_util.h
	gdefs.h
	sizecalc.h
	DESTINATION "${JCPP_INSTALL_INCLUDE_DIR}"
)