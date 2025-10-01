#include <sun/security/ssl/ECPointFormatsExtension$SHECPointFormatsConsumer.h>

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
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ECPointFormatsExtension$ECPointFormatsSpec.h>
#include <sun/security/ssl/ECPointFormatsExtension.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
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
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ECPointFormatsExtension = ::sun::security::ssl::ECPointFormatsExtension;
using $ECPointFormatsExtension$ECPointFormatsSpec = ::sun::security::ssl::ECPointFormatsExtension$ECPointFormatsSpec;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ECPointFormatsExtension$SHECPointFormatsConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ECPointFormatsExtension$SHECPointFormatsConsumer::*)()>(&ECPointFormatsExtension$SHECPointFormatsConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ECPointFormatsExtension$SHECPointFormatsConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ECPointFormatsExtension$SHECPointFormatsConsumer", "sun.security.ssl.ECPointFormatsExtension", "SHECPointFormatsConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ECPointFormatsExtension$SHECPointFormatsConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ECPointFormatsExtension$SHECPointFormatsConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_ECPointFormatsExtension$SHECPointFormatsConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_ECPointFormatsExtension$SHECPointFormatsConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ECPointFormatsExtension"
};

$Object* allocate$ECPointFormatsExtension$SHECPointFormatsConsumer($Class* clazz) {
	return $of($alloc(ECPointFormatsExtension$SHECPointFormatsConsumer));
}

void ECPointFormatsExtension$SHECPointFormatsConsumer::init$() {
}

void ECPointFormatsExtension$SHECPointFormatsConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
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
	$nc(chc->handshakeExtensions)->put($SSLExtension::CH_EC_POINT_FORMATS, spec);
}

ECPointFormatsExtension$SHECPointFormatsConsumer::ECPointFormatsExtension$SHECPointFormatsConsumer() {
}

$Class* ECPointFormatsExtension$SHECPointFormatsConsumer::load$($String* name, bool initialize) {
	$loadClass(ECPointFormatsExtension$SHECPointFormatsConsumer, name, initialize, &_ECPointFormatsExtension$SHECPointFormatsConsumer_ClassInfo_, allocate$ECPointFormatsExtension$SHECPointFormatsConsumer);
	return class$;
}

$Class* ECPointFormatsExtension$SHECPointFormatsConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun