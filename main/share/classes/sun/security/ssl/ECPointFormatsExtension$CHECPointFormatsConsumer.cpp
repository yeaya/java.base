#include <sun/security/ssl/ECPointFormatsExtension$CHECPointFormatsConsumer.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ECPointFormatsExtension$ECPointFormatsSpec.h>
#include <sun/security/ssl/ECPointFormatsExtension.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_EC_POINT_FORMATS
#undef UNEXPECTED_MESSAGE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Alert = ::sun::security::ssl::Alert;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ECPointFormatsExtension$ECPointFormatsSpec = ::sun::security::ssl::ECPointFormatsExtension$ECPointFormatsSpec;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void ECPointFormatsExtension$CHECPointFormatsConsumer::init$() {
}

void ECPointFormatsExtension$CHECPointFormatsConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::CH_EC_POINT_FORMATS)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Ignore unavailable ec_point_formats extension"_s, $$new($ObjectArray, 0));
		}
		return;
	}
	$var($ECPointFormatsExtension$ECPointFormatsSpec, spec, $new($ECPointFormatsExtension$ECPointFormatsSpec, shc, buffer));
	if (!spec->hasUncompressedFormat()) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Invalid ec_point_formats extension data: peer does not support uncompressed points"_s)));
	}
	$nc(shc->handshakeExtensions)->put($SSLExtension::CH_EC_POINT_FORMATS, spec);
}

ECPointFormatsExtension$CHECPointFormatsConsumer::ECPointFormatsExtension$CHECPointFormatsConsumer() {
}

$Class* ECPointFormatsExtension$CHECPointFormatsConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ECPointFormatsExtension$CHECPointFormatsConsumer, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(ECPointFormatsExtension$CHECPointFormatsConsumer, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ECPointFormatsExtension$CHECPointFormatsConsumer", "sun.security.ssl.ECPointFormatsExtension", "CHECPointFormatsConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ECPointFormatsExtension$CHECPointFormatsConsumer",
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
		"sun.security.ssl.ECPointFormatsExtension"
	};
	$loadClass(ECPointFormatsExtension$CHECPointFormatsConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ECPointFormatsExtension$CHECPointFormatsConsumer);
	});
	return class$;
}

$Class* ECPointFormatsExtension$CHECPointFormatsConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun