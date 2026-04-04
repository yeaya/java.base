#include <sun/security/ssl/HelloVerifyRequest$HelloVerifyRequestProducer.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/HelloVerifyRequest$HelloVerifyRequestMessage.h>
#include <sun/security/ssl/HelloVerifyRequest.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <jcpp.h>

#undef CLIENT_HELLO
#undef HELLO_VERIFY_REQUEST

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HelloVerifyRequest$HelloVerifyRequestMessage = ::sun::security::ssl::HelloVerifyRequest$HelloVerifyRequestMessage;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void HelloVerifyRequest$HelloVerifyRequestProducer::init$() {
}

$bytes* HelloVerifyRequest$HelloVerifyRequestProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLHandshake);
	$nc($nc(shc)->handshakeProducers)->remove($($Byte::valueOf($SSLHandshake::HELLO_VERIFY_REQUEST->id)));
	$var($HelloVerifyRequest$HelloVerifyRequestMessage, hvrm, $new($HelloVerifyRequest$HelloVerifyRequestMessage, shc, message));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced HelloVerifyRequest handshake message"_s, $$new($ObjectArray, {hvrm}));
	}
	hvrm->write(shc->handshakeOutput);
	$nc(shc->handshakeOutput)->flush();
	$nc(shc->handshakeHash)->finish();
	$nc(shc->handshakeExtensions)->clear();
	$nc(shc->handshakeConsumers)->put($($Byte::valueOf($SSLHandshake::CLIENT_HELLO->id)), $SSLHandshake::CLIENT_HELLO);
	return nullptr;
}

HelloVerifyRequest$HelloVerifyRequestProducer::HelloVerifyRequest$HelloVerifyRequestProducer() {
}

$Class* HelloVerifyRequest$HelloVerifyRequestProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(HelloVerifyRequest$HelloVerifyRequestProducer, init$, void)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(HelloVerifyRequest$HelloVerifyRequestProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.HelloVerifyRequest$HelloVerifyRequestProducer", "sun.security.ssl.HelloVerifyRequest", "HelloVerifyRequestProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.HelloVerifyRequest$HelloVerifyRequestProducer",
		"java.lang.Object",
		"sun.security.ssl.HandshakeProducer",
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
	$loadClass(HelloVerifyRequest$HelloVerifyRequestProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HelloVerifyRequest$HelloVerifyRequestProducer);
	});
	return class$;
}

$Class* HelloVerifyRequest$HelloVerifyRequestProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun