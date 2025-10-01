set(FFI_ROOT ${CMAKE_CURRENT_SOURCE_DIR})

if(JCPP_OS STREQUAL "windows" AND JCPP_CPU STREQUAL "aarch64")
	set(TARGET ARM_WIN64)
	enable_language(ASM_MASM)
elseif(JCPP_OS STREQUAL "windows" AND JCPP_CPU STREQUAL "x86")
	set(TARGET X86_WIN64)
	enable_language(ASM_MASM)
elseif(JCPP_CPU STREQUAL "aarch64")
	set(TARGET ARM64)
	enable_language(ASM)
elseif(JCPP_CPU STREQUAL "x86")
	set(TARGET X86_64)
	enable_language(ASM)
else()
	message(FATAL_ERROR "Unsupport target: ${JCPP_OS}_${JCPP_CPU}")
endif()

if("${TARGET}" STREQUAL "X86_64")
	set(HAVE_LONG_DOUBLE 1)
else()
	set(HAVE_LONG_DOUBLE 0)
endif()
set(FFI_EXEC_TRAMPOLINE_TABLE 0)

configure_file(${FFI_ROOT}/include/ffi.h.in ${CMAKE_CURRENT_BINARY_DIR}/include/ffi.h)
file(COPY ${FFI_ROOT}/fficonfig.h DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

if(JCPP_CPU STREQUAL "aarch64")
	file(COPY ${FFI_ROOT}/src/aarch64/ffitarget.h DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/include)
else()
	file(COPY ${FFI_ROOT}/src/x86/ffitarget.h DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/include)
endif()

include_directories(
	${CMAKE_CURRENT_BINARY_DIR}/include
	${CMAKE_CURRENT_BINARY_DIR}
	${FFI_ROOT}/include
	${FFI_ROOT}
)

add_definitions(-DFFI_BUILDING)
add_definitions(-DFFI_STATIC_BUILD)

set(FFI_SOURCES
	${FFI_ROOT}/src/closures.c
	${FFI_ROOT}/src/prep_cif.c
	${FFI_ROOT}/src/types.c
	${FFI_ROOT}/src/tramp.c)

if(JCPP_CPU STREQUAL "aarch64")
	set(FFI_SOURCES
		${FFI_SOURCES}
		${FFI_ROOT}/src/aarch64/ffi.c)
else()
	set(FFI_SOURCES
		${FFI_SOURCES}
		${FFI_ROOT}/src/java_raw_api.c
		${FFI_ROOT}/src/raw_api.c
		${FFI_ROOT}/src/x86/ffi64.c)
 #   if(JCPP_OS STREQUAL "windows")
		set(FFI_SOURCES
			${FFI_SOURCES}
			${FFI_ROOT}/src/x86/ffiw64.c)
 #   endif()
endif()

macro(add_assembly ASMFILE)
#	message("ASMFILE:" ${ASMFILE})
	if(MSVC)
		get_filename_component(ARCH_ASM_NAME "${ASMFILE}" NAME_WE)

		if(NOT EXISTS "${CMAKE_CURRENT_BINARY_DIR}/${ARCH_ASM_NAME}.asm")
			execute_process(
				COMMAND ${CMAKE_C_COMPILER} /nologo /EP /I. /Iinclude /I${FFI_ROOT}/include "${ASMFILE}"
				WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
				OUTPUT_FILE ${ARCH_ASM_NAME}.asm
				RESULT_VARIABLE retcode
			)

			if(NOT ${retcode} STREQUAL "0")
				message(FATAL_ERROR "Unable to assemble, exit code: '${retcode}'.")
			endif()
		endif()
#[[
		if ("${targetCPU}" STREQUAL "aarch64")
			set(ARCH_ASSEMBLER armasm64)
		else()
			set(ARCH_ASSEMBLER ml64 /c /Zi)
		endif()

		execute_process(
			COMMAND ${ARCH_ASSEMBLER} ${ARCH_ASM_NAME}.asm
			WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
			RESULT_VARIABLE retcode
		)

		if(NOT ${retcode} STREQUAL "0")
			message(FATAL_ERROR "Unable to compile assembly, exit code: '${retcode}'.")
		endif()
]]
		list(APPEND FFI_SOURCES ${CMAKE_CURRENT_BINARY_DIR}/${ARCH_ASM_NAME}.asm)
	else()
		list(APPEND FFI_SOURCES ${ASMFILE})
	endif()
endmacro()

if(JCPP_CPU STREQUAL "x86")
	if(JCPP_OS STREQUAL "windows")
		if(MSVC)
			add_assembly(${FFI_ROOT}/src/x86/win64_intel.S)
		else()
			add_assembly(${FFI_ROOT}/src/x86/win64.S)
		endif()
	else()
		add_assembly(${FFI_ROOT}/src/x86/unix64.S)
		add_assembly(${FFI_ROOT}/src/x86/win64.S)
	endif()
else()
	if(MSVC)
		add_assembly(${FFI_ROOT}/src/aarch64/win64_armasm.S)
	else()
		add_assembly(${FFI_ROOT}/src/aarch64/sysv.S)
	endif()
endif()

add_library(libffi OBJECT "${FFI_SOURCES}")