# Copyright (c) 2025, Yao Yuan <yeaya@163.com>. All rights reserved.
# DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
#
# This code is free software; you can redistribute it and/or modify it
# under the terms of the GNU General Public License version 2 only, as
# published by the Free Software Foundation.  This file as subject to the
# "Classpath" exception in the LICENSE file that accompanied this code.
#
# This code is distributed in the hope that it will be useful, but WITHOUT
# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
# FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
# version 2 for more details (a copy is included in the LICENSE file that
# accompanied this code).
#
# You should have received a copy of the GNU General Public License version
# 2 along with this work; if not, write to the Free Software Foundation,
# Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.

#libffi
if(LIBFFI_LIB_PATH AND LIBFFI_INCLUDE_PATH)
	include_directories(${LIBFFI_INCLUDE_PATH})
	set(JCPP_EXT_LIBS ${JCPP_EXT_LIBS} 	${LIBFFI_LIB_PATH} PARENT_SCOPE)
else()
	if(JCPP_OS STREQUAL "linux")
		if(JCPP_ARCH STREQUAL "x86_64")
			add_subdirectory(libffi)
			set(local_object_native ${local_object_native} $<TARGET_OBJECTS:libffi>)
			include_directories(${CMAKE_CURRENT_BINARY_DIR}/libffi/include)
		else()
			set(JCPP_EXT_LIBS ${JCPP_EXT_LIBS} "libffi.a" PARENT_SCOPE)
		endif()
	elseif(JCPP_OS STREQUAL "windows")
		add_subdirectory(libffi)
		set(local_object_native ${local_object_native} $<TARGET_OBJECTS:libffi>)
		include_directories(${CMAKE_CURRENT_BINARY_DIR}/libffi/include)
	elseif(JCPP_OS STREQUAL "macos")
		if(EXISTS "/opt/homebrew/opt/libffi")
			include_directories("/opt/homebrew/opt/libffi/include")
			set(JCPP_EXT_LIBS ${JCPP_EXT_LIBS} "/opt/homebrew/opt/libffi/lib/libffi.a" PARENT_SCOPE)
		elseif(EXISTS "/usr/local/opt/libffi")
			include_directories("/usr/local/opt/libffi/include")
			set(JCPP_EXT_LIBS ${JCPP_EXT_LIBS} "/usr/local/opt/libffi/lib/libffi.a" PARENT_SCOPE)
		else()
			set(JCPP_EXT_LIBS ${JCPP_EXT_LIBS} "libffi.a" PARENT_SCOPE)
		endif()
	endif()
endif()
add_definitions(-DFFI_STATIC_BUILD)

#zlib
add_subdirectory(zlib)
set(local_object_native ${local_object_native} $<TARGET_OBJECTS:zlibstatic>)
include_directories(
	"zlib"
)

include_directories(
	"libjava"
	"libnet"
	"libnio/ch"
	"libfdlibm"
)
include_directories(
	"."
	"core"
	"core/include"
)

aux_source_directory("core" native_SRCS)

if(JCPP_OS STREQUAL "linux")
	include_directories(
		"libjava/unix"
		"libjava/linux"
		"libnet/unix"
		"libnet/linux"
		"libnio/unix/ch"
		"core/unix"
		"core/unix/include"
		"core/linux"
		"core/linux/include"
		"core/elf"
	)
	aux_source_directory("core/unix" native_SRCS)
	aux_source_directory("core/linux" native_SRCS)
	aux_source_directory("core/elf" native_SRCS)
	add_definitions(
		-DLINUX
		-D_GNU_SOURCE
		-D_REENTRANT
		-D_LARGEFILE64_SOURCE
		-DINCLUDE_SUFFIX_OS=_linux
	)
elseif(JCPP_OS STREQUAL "macos")
	include_directories(
		"libjava/unix"
		"libjava/macos"
		"libnet/unix"
		"libnet/macos"
		"libnio/unix/ch"
		"core/unix"
		"core/unix/include"
		"core/macos"
	)
	aux_source_directory("core/unix" native_SRCS)
	aux_source_directory("core/macos" native_SRCS)
	add_definitions(
		-D_ALLBSD_SOURCE
		-DMACOSX
		-DINCLUDE_SUFFIX_OS=_macos
	)
elseif(JCPP_OS STREQUAL "windows")
	include_directories(
		"libjava/windows"
		"libnet/windows"
		"core/windows"
		"core/windows/include"
		"wepoll"
	)
	aux_source_directory("wepoll" native_SRCS)
	aux_source_directory("core/windows" native_SRCS)
	add_definitions(
		-D_WINDOWS
		-DWIN32
		-D_JNI_IMPLEMENTATION_
		-DWIN32_LEAN_AND_MEAN
		-D_CRT_SECURE_NO_DEPRECATE
		-D_CRT_NONSTDC_NO_DEPRECATE
		-DIAL
		-DNOMINMAX
		-DINCLUDE_SUFFIX_OS=_windows
	)
	add_subdirectory(encodesymbol)
endif()

add_subdirectory(libfdlibm)
set(local_object_native ${local_object_native} $<TARGET_OBJECTS:libfdlibm>)
add_subdirectory(libjava)
set(local_object_native ${local_object_native} $<TARGET_OBJECTS:libjava>)
add_subdirectory(libjli)
set(local_object_native ${local_object_native} $<TARGET_OBJECTS:libjli>)
add_subdirectory(libnet)
set(local_object_native ${local_object_native} $<TARGET_OBJECTS:libnet>)
add_subdirectory(libnio)
set(local_object_native ${local_object_native} $<TARGET_OBJECTS:libnio>)
add_subdirectory(libzip)
set(local_object_native ${local_object_native} $<TARGET_OBJECTS:libzip>)

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" native_SRCS)
file(GLOB native_HEADERS *.h *.hpp)
source_group("Include" FILES ${native_HEADERS}) 
add_library(native OBJECT  "${native_SRCS}" "${native_HEADERS}")

set(local_object ${local_object_native} $<TARGET_OBJECTS:native> PARENT_SCOPE)

if(JCPP_ARCH MATCHES "x86_64")
	target_compile_definitions(native PUBLIC
		-DAMD64
	)
elseif(JCPP_ARCH MATCHES "aarch64")
	target_compile_definitions(native PUBLIC
		-DAARCH64
	)
endif()

install(FILES
	core/include/classfile_constants.h
	core/include/jmm.h
	core/include/jvm.h
	core/include/jvm_constants.h
	core/include/jvm_io.h
	jni.h
	zlib/zlib.h
	${CMAKE_CURRENT_BINARY_DIR}/zlib/zconf.h
	java_lang_Integer.h
	DESTINATION "${JCPP_INSTALL_INCLUDE_DIR}"
)

if(JCPP_OS STREQUAL "windows")
	install(FILES
		core/windows/include/jvm_md.h
		DESTINATION "${JCPP_INSTALL_INCLUDE_DIR}"
	)
else()
	install(FILES
		core/unix/include/jvm_md.h
		DESTINATION "${JCPP_INSTALL_INCLUDE_DIR}"
	)
endif()

# TODO
#add_subdirectory(dependenciesinfo)