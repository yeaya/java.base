#include <sun/security/ssl/ECPointFormatsExtension$CHECPointFormatsConsumer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ECPointFormatsExtension$ECPointFormatsSpec.h>
#include <sun/security/ssl/ECPointFormatsExtension.h>
#include <sun/security/ssl/HandshakeContext.h>
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
using $NullPointerException = ::java::lang::NullPointerException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Map = ::java::util::Map;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ECPointFormatsExtension = ::sun::security::ssl::ECPointFormatsExtension;
using $ECPointFormatsExtension$ECPointFormatsSpec = ::sun::security::ssl::ECPointFormatsExtension$ECPointFormatsSpec;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ECPointFormatsExtension$CHECPointFormatsConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ECPointFormatsExtension$CHECPointFormatsConsumer::*)()>(&ECPointFormatsExtension$CHECPointFormatsConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ECPointFormatsExtension$CHECPointFormatsConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ECPointFormatsExtension$CHECPointFormatsConsumer", "sun.security.ssl.ECPointFormatsExtension", "CHECPointFormatsConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ECPointFormatsExtension$CHECPointFormatsConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ECPointFormatsExtension$CHECPointFormatsConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_ECPointFormatsExtension$CHECPointFormatsConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_ECPointFormatsExtension$CHECPointFormatsConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ECPointFormatsExtension"
};

$Object* allocate$ECPointFormatsExtension$CHECPointFormatsConsumer($Class* clazz) {
	return $of($alloc(ECPointFormatsExtension$CHECPointFormatsConsumer));
}

void ECPointFormatsExtension$CHECPointFormatsConsumer::init$() {
}

void ECPointFormatsExtension$CHECPointFormatsConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
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
		$throw($($nc($nc(shc)->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Invalid ec_point_formats extension data: peer does not support uncompressed points"_s)));
	}
	$nc($nc(shc)->handshakeExtensions)->put($SSLExtension::CH_EC_POINT_FORMATS, spec);
}

ECPointFormatsExtension$CHECPointFormatsConsumer::ECPointFormatsExtension$CHECPointFormatsConsumer() {
}

$Class* ECPointFormatsExtension$CHECPointFormatsConsumer::load$($String* name, bool initialize) {
	$loadClass(ECPointFormatsExtension$CHECPointFormatsConsumer, name, initialize, &_ECPointFormatsExtension$CHECPointFormatsConsumer_ClassInfo_, allocate$ECPointFormatsExtension$CHECPointFormatsConsumer);
	return class$;
}

$Class* ECPointFormatsExtension$CHECPointFormatsConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun