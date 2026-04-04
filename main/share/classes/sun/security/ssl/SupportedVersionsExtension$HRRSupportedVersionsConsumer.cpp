#include <sun/security/ssl/SupportedVersionsExtension$HRRSupportedVersionsConsumer.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Map.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SupportedVersionsExtension$SHSupportedVersionsSpec.h>
#include <sun/security/ssl/SupportedVersionsExtension.h>
#include <jcpp.h>

#undef HRR_SUPPORTED_VERSIONS

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SupportedVersionsExtension$SHSupportedVersionsSpec = ::sun::security::ssl::SupportedVersionsExtension$SHSupportedVersionsSpec;

namespace sun {
	namespace security {
		namespace ssl {

void SupportedVersionsExtension$HRRSupportedVersionsConsumer::init$() {
}

void SupportedVersionsExtension$HRRSupportedVersionsConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::HRR_SUPPORTED_VERSIONS)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine($$str({"Ignore unavailable extension: "_s, $SSLExtension::HRR_SUPPORTED_VERSIONS->name$}), $$new($ObjectArray, 0));
		}
		return;
	}
	$var($SupportedVersionsExtension$SHSupportedVersionsSpec, spec, $new($SupportedVersionsExtension$SHSupportedVersionsSpec, chc, buffer));
	$nc(chc->handshakeExtensions)->put($SSLExtension::HRR_SUPPORTED_VERSIONS, spec);
}

SupportedVersionsExtension$HRRSupportedVersionsConsumer::SupportedVersionsExtension$HRRSupportedVersionsConsumer() {
}

$Class* SupportedVersionsExtension$HRRSupportedVersionsConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SupportedVersionsExtension$HRRSupportedVersionsConsumer, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(SupportedVersionsExtension$HRRSupportedVersionsConsumer, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SupportedVersionsExtension$HRRSupportedVersionsConsumer", "sun.security.ssl.SupportedVersionsExtension", "HRRSupportedVersionsConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SupportedVersionsExtension$HRRSupportedVersionsConsumer",
		"java.lang.Object",
		"sun.security.ssl.SSLExtension$ExtensionConsumer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.SupportedVersionsExtension"
	};
	$loadClass(SupportedVersionsExtension$HRRSupportedVersionsConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SupportedVersionsExtension$HRRSupportedVersionsConsumer);
	});
	return class$;
}

$Class* SupportedVersionsExtension$HRRSupportedVersionsConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun