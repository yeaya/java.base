#machine generated

add_definitions(-DJCPP_USE_LIB_CURRENT_OBJECT_STACK_CACHE)

include_directories("share/classes")
include_directories("share/native")

if(JCPP_OS MATCHES "linux")
	include_directories("linux/classes")
	include_directories("linux/native")
endif()

if(JCPP_OS MATCHES "macos")
	include_directories("macos/classes")
	include_directories("macos/native")
endif()

if(JCPP_OS MATCHES "windows")
	include_directories("windows/classes")
	include_directories("windows/native")
endif()

add_subdirectory("share/classes")
add_subdirectory("share/native")

if(JCPP_OS MATCHES "linux")
	add_subdirectory("linux/classes")
	add_subdirectory("linux/native")
endif()

if(JCPP_OS MATCHES "macos")
	add_subdirectory("macos/classes")
	add_subdirectory("macos/native")
endif()

if(JCPP_OS MATCHES "windows")
	add_subdirectory("windows/classes")
	add_subdirectory("windows/native")
endif()

set(local_object ${local_object}
	"$<TARGET_OBJECTS:classes.com.sun.crypto.provi_0>"
	"$<TARGET_OBJECTS:classes.com.sun.security.ntlm>"
	"$<TARGET_OBJECTS:classes.java.io>"
	"$<TARGET_OBJECTS:classes.java.lang>"
	"$<TARGET_OBJECTS:classes.java.lang.annotation>"
	"$<TARGET_OBJECTS:classes.java.lang.constant>"
	"$<TARGET_OBJECTS:classes.java.lang.interpreter>"
	"$<TARGET_OBJECTS:classes.java.lang.invoke>"
	"$<TARGET_OBJECTS:classes.java.lang.module>"
	"$<TARGET_OBJECTS:classes.java.lang.ref>"
	"$<TARGET_OBJECTS:classes.java.lang.reflect>"
	"$<TARGET_OBJECTS:classes.java.lang.runtime>"
	"$<TARGET_OBJECTS:classes.java.math>"
	"$<TARGET_OBJECTS:classes.java.net>"
	"$<TARGET_OBJECTS:classes.java.net.spi>"
	"$<TARGET_OBJECTS:classes.java.nio>"
	"$<TARGET_OBJECTS:classes.java.nio.channels>"
	"$<TARGET_OBJECTS:classes.java.nio.channels.spi>"
	"$<TARGET_OBJECTS:classes.java.nio.charset>"
	"$<TARGET_OBJECTS:classes.java.nio.charset.spi>"
	"$<TARGET_OBJECTS:classes.java.nio.file>"
	"$<TARGET_OBJECTS:classes.java.nio.file.attrib_1>"
	"$<TARGET_OBJECTS:classes.java.nio.file.spi>"
	"$<TARGET_OBJECTS:classes.java.security>"
	"$<TARGET_OBJECTS:classes.java.security.cert>"
	"$<TARGET_OBJECTS:classes.java.security.interf_2>"
	"$<TARGET_OBJECTS:classes.java.security.spec>"
	"$<TARGET_OBJECTS:classes.java.text>"
	"$<TARGET_OBJECTS:classes.java.text.spi>"
	"$<TARGET_OBJECTS:classes.java.time>"
	"$<TARGET_OBJECTS:classes.java.time.chrono>"
	"$<TARGET_OBJECTS:classes.java.time.format>"
	"$<TARGET_OBJECTS:classes.java.time.temporal>"
	"$<TARGET_OBJECTS:classes.java.time.zone>"
	"$<TARGET_OBJECTS:classes.java.util>"
	"$<TARGET_OBJECTS:classes.java.util.concurrent>"
	"$<TARGET_OBJECTS:classes.java.util.concurrent_3>"
	"$<TARGET_OBJECTS:classes.java.util.concurrent_4>"
	"$<TARGET_OBJECTS:classes.java.util.function>"
	"$<TARGET_OBJECTS:classes.java.util.jar>"
	"$<TARGET_OBJECTS:classes.java.util.random>"
	"$<TARGET_OBJECTS:classes.java.util.regex>"
	"$<TARGET_OBJECTS:classes.java.util.spi>"
	"$<TARGET_OBJECTS:classes.java.util.stream>"
	"$<TARGET_OBJECTS:classes.java.util.zip>"
	"$<TARGET_OBJECTS:classes.javax.crypto>"
	"$<TARGET_OBJECTS:classes.javax.crypto.interfa_5>"
	"$<TARGET_OBJECTS:classes.javax.crypto.spec>"
	"$<TARGET_OBJECTS:classes.javax.net>"
	"$<TARGET_OBJECTS:classes.javax.net.ssl>"
	"$<TARGET_OBJECTS:classes.javax.security.auth>"
	"$<TARGET_OBJECTS:classes.javax.security.auth._6>"
	"$<TARGET_OBJECTS:classes.javax.security.auth._7>"
	"$<TARGET_OBJECTS:classes.javax.security.auth._8>"
	"$<TARGET_OBJECTS:classes.javax.security.auth._9>"
	"$<TARGET_OBJECTS:classes.javax.security.cert>"
	"$<TARGET_OBJECTS:classes.jdk.internal>"
	"$<TARGET_OBJECTS:classes.jdk.internal.access>"
	"$<TARGET_OBJECTS:classes.jdk.internal.access_10>"
	"$<TARGET_OBJECTS:classes.jdk.internal.event>"
	"$<TARGET_OBJECTS:classes.jdk.internal.icu.impl>"
	"$<TARGET_OBJECTS:classes.jdk.internal.icu.im_12>"
	"$<TARGET_OBJECTS:classes.jdk.internal.icu.lang>"
	"$<TARGET_OBJECTS:classes.jdk.internal.icu.text>"
	"$<TARGET_OBJECTS:classes.jdk.internal.icu.util>"
	"$<TARGET_OBJECTS:classes.jdk.internal.invoke>"
	"$<TARGET_OBJECTS:classes.jdk.internal.javac>"
	"$<TARGET_OBJECTS:classes.jdk.internal.jimage>"
	"$<TARGET_OBJECTS:classes.jdk.internal.jimage_13>"
	"$<TARGET_OBJECTS:classes.jdk.internal.jmod>"
	"$<TARGET_OBJECTS:classes.jdk.internal.jrtfs>"
	"$<TARGET_OBJECTS:classes.jdk.internal.loader>"
	"$<TARGET_OBJECTS:classes.jdk.internal.logger>"
	"$<TARGET_OBJECTS:classes.jdk.internal.math>"
	"$<TARGET_OBJECTS:classes.jdk.internal.misc>"
	"$<TARGET_OBJECTS:classes.jdk.internal.module>"
	"$<TARGET_OBJECTS:classes.jdk.internal.org.ob_15>"
	"$<TARGET_OBJECTS:classes.jdk.internal.org.ob_16>"
	"$<TARGET_OBJECTS:classes.jdk.internal.org.ob_17>"
	"$<TARGET_OBJECTS:classes.jdk.internal.org.ob_18>"
	"$<TARGET_OBJECTS:classes.jdk.internal.org.ob_19>"
	"$<TARGET_OBJECTS:classes.jdk.internal.org.ob_20>"
	"$<TARGET_OBJECTS:classes.jdk.internal.org.xm_21>"
	"$<TARGET_OBJECTS:classes.jdk.internal.org.xm_22>"
	"$<TARGET_OBJECTS:classes.jdk.internal.perf>"
	"$<TARGET_OBJECTS:classes.jdk.internal.platform>"
	"$<TARGET_OBJECTS:classes.jdk.internal.ref>"
	"$<TARGET_OBJECTS:classes.jdk.internal.reflect>"
	"$<TARGET_OBJECTS:classes.jdk.internal.util>"
	"$<TARGET_OBJECTS:classes.jdk.internal.util.jar>"
	"$<TARGET_OBJECTS:classes.jdk.internal.util.r_23>"
	"$<TARGET_OBJECTS:classes.jdk.internal.util.xml>"
	"$<TARGET_OBJECTS:classes.jdk.internal.util.x_24>"
	"$<TARGET_OBJECTS:classes.jdk.internal.vm>"
	"$<TARGET_OBJECTS:classes.jdk.internal.vm.ann_25>"
	"$<TARGET_OBJECTS:classes.jdk.internal.vm.vector>"
	"$<TARGET_OBJECTS:classes.META-INF.services>"
	"$<TARGET_OBJECTS:classes.sun.invoke>"
	"$<TARGET_OBJECTS:classes.sun.invoke.empty>"
	"$<TARGET_OBJECTS:classes.sun.invoke.util>"
	"$<TARGET_OBJECTS:classes.sun.launcher>"
	"$<TARGET_OBJECTS:classes.sun.launcher.resources>"
	"$<TARGET_OBJECTS:classes.sun.net>"
	"$<TARGET_OBJECTS:classes.sun.net.dns>"
	"$<TARGET_OBJECTS:classes.sun.net.ext>"
	"$<TARGET_OBJECTS:classes.sun.net.ftp>"
	"$<TARGET_OBJECTS:classes.sun.net.ftp.impl>"
	"$<TARGET_OBJECTS:classes.sun.net.idn>"
	"$<TARGET_OBJECTS:classes.sun.net.sdp>"
	"$<TARGET_OBJECTS:classes.sun.net.smtp>"
	"$<TARGET_OBJECTS:classes.sun.net.spi>"
	"$<TARGET_OBJECTS:classes.sun.net.util>"
	"$<TARGET_OBJECTS:classes.sun.net.www>"
	"$<TARGET_OBJECTS:classes.sun.net.www.content_26>"
	"$<TARGET_OBJECTS:classes.sun.net.www.http>"
	"$<TARGET_OBJECTS:classes.sun.net.www.protoco_27>"
	"$<TARGET_OBJECTS:classes.sun.net.www.protoco_28>"
	"$<TARGET_OBJECTS:classes.sun.net.www.protoco_29>"
	"$<TARGET_OBJECTS:classes.sun.net.www.protoco_30>"
	"$<TARGET_OBJECTS:classes.sun.net.www.protoco_31>"
	"$<TARGET_OBJECTS:classes.sun.net.www.protoco_32>"
	"$<TARGET_OBJECTS:classes.sun.net.www.protoco_33>"
	"$<TARGET_OBJECTS:classes.sun.net.www.protoco_34>"
	"$<TARGET_OBJECTS:classes.sun.net.www.protoco_35>"
	"$<TARGET_OBJECTS:classes.sun.nio>"
	"$<TARGET_OBJECTS:classes.sun.nio.ch>"
	"$<TARGET_OBJECTS:classes.sun.nio.cs>"
	"$<TARGET_OBJECTS:classes.sun.nio.fs>"
	"$<TARGET_OBJECTS:classes.sun.reflect.annotation>"
	"$<TARGET_OBJECTS:classes.sun.reflect.generic_36>"
	"$<TARGET_OBJECTS:classes.sun.reflect.generic_37>"
	"$<TARGET_OBJECTS:classes.sun.reflect.generic_38>"
	"$<TARGET_OBJECTS:classes.sun.reflect.generic_39>"
	"$<TARGET_OBJECTS:classes.sun.reflect.generic_40>"
	"$<TARGET_OBJECTS:classes.sun.reflect.generic_41>"
	"$<TARGET_OBJECTS:classes.sun.reflect.generic_42>"
	"$<TARGET_OBJECTS:classes.sun.reflect.misc>"
	"$<TARGET_OBJECTS:classes.sun.security.action>"
	"$<TARGET_OBJECTS:classes.sun.security.intern_43>"
	"$<TARGET_OBJECTS:classes.sun.security.intern_44>"
	"$<TARGET_OBJECTS:classes.sun.security.jca>"
	"$<TARGET_OBJECTS:classes.sun.security.pkcs>"
	"$<TARGET_OBJECTS:classes.sun.security.pkcs10>"
	"$<TARGET_OBJECTS:classes.sun.security.pkcs12>"
	"$<TARGET_OBJECTS:classes.sun.security.provider>"
	"$<TARGET_OBJECTS:classes.sun.security.provid_45>"
	"$<TARGET_OBJECTS:classes.sun.security.provid_46>"
	"$<TARGET_OBJECTS:classes.sun.security.rsa>"
	"$<TARGET_OBJECTS:classes.sun.security.ssl>"
	"$<TARGET_OBJECTS:classes.sun.security.timestamp>"
	"$<TARGET_OBJECTS:classes.sun.security.tools>"
	"$<TARGET_OBJECTS:classes.sun.security.tools._47>"
	"$<TARGET_OBJECTS:classes.sun.security.util>"
	"$<TARGET_OBJECTS:classes.sun.security.util.math>"
	"$<TARGET_OBJECTS:classes.sun.security.util.m_48>"
	"$<TARGET_OBJECTS:classes.sun.security.validator>"
	"$<TARGET_OBJECTS:classes.sun.security.x509>"
	"$<TARGET_OBJECTS:classes.sun.text>"
	"$<TARGET_OBJECTS:classes.sun.text.resources>"
	"$<TARGET_OBJECTS:classes.sun.text.resources._49>"
	"$<TARGET_OBJECTS:classes.sun.text.spi>"
	"$<TARGET_OBJECTS:classes.sun.util>"
	"$<TARGET_OBJECTS:classes.sun.util.calendar>"
	"$<TARGET_OBJECTS:classes.sun.util.cldr>"
	"$<TARGET_OBJECTS:classes.sun.util.locale>"
	"$<TARGET_OBJECTS:classes.sun.util.locale.pro_50>"
	"$<TARGET_OBJECTS:classes.sun.util.logging>"
	"$<TARGET_OBJECTS:classes.sun.util.resources>"
	"$<TARGET_OBJECTS:classes.sun.util.resources._51>"
	"$<TARGET_OBJECTS:classes.sun.util.spi>"
)

if(JCPP_OS MATCHES "linux")
	set(local_object ${local_object}
		"$<TARGET_OBJECTS:linux-classes>"
		"$<TARGET_OBJECTS:linux-classes.java.io>"
		"$<TARGET_OBJECTS:linux-classes.java.lang>"
		"$<TARGET_OBJECTS:linux-classes.java.net>"
		"$<TARGET_OBJECTS:linux-classes.java.nio.file>"
		"$<TARGET_OBJECTS:linux-classes.jdk.internal._52>"
		"$<TARGET_OBJECTS:linux-classes.jdk.internal._53>"
		"$<TARGET_OBJECTS:linux-classes.jdk.internal._54>"
		"$<TARGET_OBJECTS:linux-classes.jdk.internal._55>"
		"$<TARGET_OBJECTS:linux-classes.jdk.internal._56>"
		"$<TARGET_OBJECTS:linux-classes.sun.net>"
		"$<TARGET_OBJECTS:linux-classes.sun.net.dns>"
		"$<TARGET_OBJECTS:linux-classes.sun.net.sdp>"
		"$<TARGET_OBJECTS:linux-classes.sun.net.www.p_58>"
		"$<TARGET_OBJECTS:linux-classes.sun.net.www.p_60>"
		"$<TARGET_OBJECTS:linux-classes.sun.net.www.p_61>"
		"$<TARGET_OBJECTS:linux-classes.sun.nio.ch>"
		"$<TARGET_OBJECTS:linux-classes.sun.nio.fs>"
		"$<TARGET_OBJECTS:linux-classes.sun.security._62>"
	)
endif()

if(JCPP_OS MATCHES "macos")
	set(local_object ${local_object}
		"$<TARGET_OBJECTS:macos-classes>"
		"$<TARGET_OBJECTS:macos-classes.apple.security>"
		"$<TARGET_OBJECTS:macos-classes.java.io>"
		"$<TARGET_OBJECTS:macos-classes.java.lang>"
		"$<TARGET_OBJECTS:macos-classes.java.net>"
		"$<TARGET_OBJECTS:macos-classes.java.nio.file>"
		"$<TARGET_OBJECTS:macos-classes.jdk.internal._63>"
		"$<TARGET_OBJECTS:macos-classes.jdk.internal._64>"
		"$<TARGET_OBJECTS:macos-classes.jdk.internal._65>"
		"$<TARGET_OBJECTS:macos-classes.sun.net>"
		"$<TARGET_OBJECTS:macos-classes.sun.net.dns>"
		"$<TARGET_OBJECTS:macos-classes.sun.net.sdp>"
		"$<TARGET_OBJECTS:macos-classes.sun.net.www.p_67>"
		"$<TARGET_OBJECTS:macos-classes.sun.net.www.p_69>"
		"$<TARGET_OBJECTS:macos-classes.sun.net.www.p_70>"
		"$<TARGET_OBJECTS:macos-classes.sun.nio.ch>"
		"$<TARGET_OBJECTS:macos-classes.sun.nio.fs>"
		"$<TARGET_OBJECTS:macos-classes.sun.security._71>"
		"$<TARGET_OBJECTS:macos-classes.sun.util.loca_72>"
	)
endif()

if(JCPP_OS MATCHES "windows")
	set(local_object ${local_object}
		"$<TARGET_OBJECTS:windows-classes>"
		"$<TARGET_OBJECTS:windows-classes.java.io>"
		"$<TARGET_OBJECTS:windows-classes.java.lang>"
		"$<TARGET_OBJECTS:windows-classes.java.net>"
		"$<TARGET_OBJECTS:windows-classes.java.nio.file>"
		"$<TARGET_OBJECTS:windows-classes.jdk.interna_73>"
		"$<TARGET_OBJECTS:windows-classes.jdk.interna_74>"
		"$<TARGET_OBJECTS:windows-classes.jdk.interna_75>"
		"$<TARGET_OBJECTS:windows-classes.sun.io>"
		"$<TARGET_OBJECTS:windows-classes.sun.net>"
		"$<TARGET_OBJECTS:windows-classes.sun.net.dns>"
		"$<TARGET_OBJECTS:windows-classes.sun.net.www_77>"
		"$<TARGET_OBJECTS:windows-classes.sun.net.www_79>"
		"$<TARGET_OBJECTS:windows-classes.sun.net.www_80>"
		"$<TARGET_OBJECTS:windows-classes.sun.nio.ch>"
		"$<TARGET_OBJECTS:windows-classes.sun.nio.fs>"
		"$<TARGET_OBJECTS:windows-classes.sun.securit_81>"
		"$<TARGET_OBJECTS:windows-classes.sun.util.lo_83>"
	)
endif()

if(BUILD_STATIC_LIB)
	add_library(${JCPP_PROJECT_NAME}_static STATIC "${local_object}" "${source_SRCS}")

	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_static PROPERTIES OUTPUT_NAME "${JCPP_PROJECT_FULL_NAME}")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_static PROPERTIES VERSION ${JCPP_PROJECT_VERSION} SOVERSION 1)

	jcpp_enable_bigobj(${JCPP_PROJECT_NAME}_static)

	install(TARGETS ${JCPP_PROJECT_NAME}_static
		LIBRARY DESTINATION "${JCPP_INSTALL_LIB_DIR}"
		ARCHIVE DESTINATION "${JCPP_INSTALL_LIB_DIR}"
		RUNTIME DESTINATION "${JCPP_INSTALL_BIN_DIR}"
	)
endif()

if(BUILD_SHARED_LIB)
	add_library(${JCPP_PROJECT_NAME}_shared SHARED "${local_object}" "${source_SRCS}")

	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES OUTPUT_NAME "${JCPP_PROJECT_FULL_NAME}")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES CLEAN_DIRECT_OUTPUT 1)
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES VERSION ${JCPP_PROJECT_VERSION} SOVERSION 1)
if(JCPP_OS MATCHES "linux")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES INSTALL_RPATH "\\\$ORIGIN;\\\$ORIGIN/../lib")
elseif(JCPP_OS MATCHES "macos")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES INSTALL_RPATH ".;../lib")
endif()

	if(JCPP_OS MATCHES "linux")
		set(JCPP_EXT_LIBS ${JCPP_EXT_LIBS}
			pthread dl
		)
	endif()

	if(JCPP_OS MATCHES "macos")
		set(JCPP_EXT_LIBS ${JCPP_EXT_LIBS}
			"-framework CoreFoundation"
			"-framework Foundation"
			"-framework SystemConfiguration"
			"-framework Cocoa"
			"-framework Security"
			"-framework ApplicationServices"
		)
	endif()

	if(JCPP_OS MATCHES "windows")
		set(JCPP_EXT_LIBS ${JCPP_EXT_LIBS}
			wsock32 ws2_32 Iphlpapi Winhttp Secur32 Version Winmm Psapi
		)
	endif()

	target_link_libraries(${JCPP_PROJECT_NAME}_shared
		PUBLIC ${JCPP_DEPENDENCY_LIBS}
		PRIVATE ${JCPP_EXT_LIBS}
	)

	jcpp_enable_bigobj(${JCPP_PROJECT_NAME}_shared)

	jcpp_encode_symbol(${JCPP_PROJECT_NAME}_shared)

	install(TARGETS ${JCPP_PROJECT_NAME}_shared
		LIBRARY DESTINATION "${JCPP_INSTALL_LIB_DIR}"
		ARCHIVE DESTINATION "${JCPP_INSTALL_LIB_DIR}"
		RUNTIME DESTINATION "${JCPP_INSTALL_BIN_DIR}"
	)
endif()

install(
	DIRECTORY "share/include/"
	DESTINATION "${JCPP_INSTALL_INCLUDE_DIR}"
)

if(JCPP_OS MATCHES "linux")
	install(
		DIRECTORY "linux/include/"
		DESTINATION "${JCPP_INSTALL_INCLUDE_DIR}"
	)
endif()

if(JCPP_OS MATCHES "macos")
	install(
		DIRECTORY "macos/include/"
		DESTINATION "${JCPP_INSTALL_INCLUDE_DIR}"
	)
endif()

if(JCPP_OS MATCHES "windows")
	install(
		DIRECTORY "windows/include/"
		DESTINATION "${JCPP_INSTALL_INCLUDE_DIR}"
	)
endif()

if(INSTALL_TO_REPO)
	install(
		FILES "share/dependencies.txt"
		DESTINATION "${JCPP_INSTALL_DIR}"
	)
endif()
