#include <sun/security/ssl/HelloVerifyRequest$HelloVerifyRequestConsumer.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ClientHello$ClientHelloMessage.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <sun/security/ssl/HelloVerifyRequest$HelloVerifyRequestMessage.h>
#include <sun/security/ssl/HelloVerifyRequest.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CLIENT_HELLO
#undef HELLO_VERIFY_REQUEST
#undef SERVER_HELLO
#undef UNEXPECTED_MESSAGE

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HelloVerifyRequest$HelloVerifyRequestMessage = ::sun::security::ssl::HelloVerifyRequest$HelloVerifyRequestMessage;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

void HelloVerifyRequest$HelloVerifyRequestConsumer::init$() {
}

void HelloVerifyRequest$HelloVerifyRequestConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLHandshake);
	$nc($nc(chc)->handshakeConsumers)->remove($($Byte::valueOf($SSLHandshake::HELLO_VERIFY_REQUEST->id)));
	if (!chc->handshakeConsumers->isEmpty()) {
		chc->handshakeConsumers->remove($($Byte::valueOf($SSLHandshake::SERVER_HELLO->id)));
	}
	if (!chc->handshakeConsumers->isEmpty()) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "No more message expected before HelloVerifyRequest is processed"_s)));
	}
	$nc(chc->handshakeHash)->finish();
	$var($HelloVerifyRequest$HelloVerifyRequestMessage, hvrm, $new($HelloVerifyRequest$HelloVerifyRequestMessage, chc, message));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Consuming HelloVerifyRequest handshake message"_s, $$new($ObjectArray, {hvrm}));
	}
	$nc(chc->initialClientHelloMsg)->setHelloCookie(hvrm->cookie);
	$SSLHandshake::CLIENT_HELLO->produce(context, hvrm);
}

HelloVerifyRequest$HelloVerifyRequestConsumer::HelloVerifyRequest$HelloVerifyRequestConsumer() {
}

$Class* HelloVerifyRequest$HelloVerifyRequestConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(HelloVerifyRequest$HelloVerifyRequestConsumer, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(HelloVerifyRequest$HelloVerifyRequestConsumer, consume, void, $ConnectionContext*, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.HelloVerifyRequest$HelloVerifyRequestConsumer", "sun.security.ssl.HelloVerifyRequest", "HelloVerifyRequestConsumer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.HelloVerifyRequest$HelloVerifyRequestConsumer",
		"java.lang.Object",
		"sun.security.ssl.SSLConsumer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.HelloVerifyRequest"
	};
	$loadClass(HelloVerifyRequest$HelloVerifyRequestConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HelloVerifyRequest$HelloVerifyRequestConsumer);
	});
	return class$;
}

$Class* HelloVerifyRequest$HelloVerifyRequestConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun