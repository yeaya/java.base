#include <sun/security/ssl/ECPointFormatsExtension$SHECPointFormatsConsumer.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ECPointFormatsExtension$ECPointFormatsSpec.h>
#include <sun/security/ssl/ECPointFormatsExtension.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_EC_POINT_FORMATS
#undef UNEXPECTED_MESSAGE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ECPointFormatsExtension$ECPointFormatsSpec = ::sun::security::ssl::ECPointFormatsExtension$ECPointFormatsSpec;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;

namespace sun {
	namespace security {
		namespace ssl {

void ECPointFormatsExtension$SHECPointFormatsConsumer::init$() {
}

void ECPointFormatsExtension$SHECPointFormatsConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	$var($ECPointFormatsExtension$ECPointFormatsSpec, requestedSpec, $cast($ECPointFormatsExtension$ECPointFormatsSpec, $nc($nc(chc)->handshakeExtensions)->get($SSLExtension::CH_EC_POINT_FORMATS)));
	if (requestedSpec == nullptr) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Unexpected ec_point_formats extension in ServerHello"_s)));
	}
	$var($ECPointFormatsExtension$ECPointFormatsSpec, spec, $new($ECPointFormatsExtension$ECPointFormatsSpec, chc, buffer));
	if (!spec->hasUncompressedFormat()) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Invalid ec_point_formats extension data: peer does not support uncompressed points"_s)));
	}
	chc->handshakeExtensions->put($SSLExtension::CH_EC_POINT_FORMATS, spec);
}

ECPointFormatsExtension$SHECPointFormatsConsumer::ECPointFormatsExtension$SHECPointFormatsConsumer() {
}

$Class* ECPointFormatsExtension$SHECPointFormatsConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ECPointFormatsExtension$SHECPointFormatsConsumer, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(ECPointFormatsExtension$SHECPointFormatsConsumer, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ECPointFormatsExtension$SHECPointFormatsConsumer", "sun.security.ssl.ECPointFormatsExtension", "SHECPointFormatsConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ECPointFormatsExtension$SHECPointFormatsConsumer",
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
	$loadClass(ECPointFormatsExtension$SHECPointFormatsConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ECPointFormatsExtension$SHECPointFormatsConsumer);
	});
	return class$;
}

$Class* ECPointFormatsExtension$SHECPointFormatsConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun