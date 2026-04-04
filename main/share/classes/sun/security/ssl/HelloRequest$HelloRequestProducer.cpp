#include <sun/security/ssl/HelloRequest$HelloRequestProducer.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/HelloRequest$HelloRequestMessage.h>
#include <sun/security/ssl/HelloRequest.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <jcpp.h>

#undef CLIENT_HELLO

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HelloRequest$HelloRequestMessage = ::sun::security::ssl::HelloRequest$HelloRequestMessage;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void HelloRequest$HelloRequestProducer::init$() {
}

$bytes* HelloRequest$HelloRequestProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$var($HelloRequest$HelloRequestMessage, hrm, $new($HelloRequest$HelloRequestMessage, shc));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced HelloRequest handshake message"_s, $$new($ObjectArray, {hrm}));
	}
	hrm->write($nc(shc)->handshakeOutput);
	$nc(shc->handshakeOutput)->flush();
	$init($SSLHandshake);
	$nc(shc->handshakeConsumers)->put($($Byte::valueOf($SSLHandshake::CLIENT_HELLO->id)), $SSLHandshake::CLIENT_HELLO);
	return nullptr;
}

HelloRequest$HelloRequestProducer::HelloRequest$HelloRequestProducer() {
}

$Class* HelloRequest$HelloRequestProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(HelloRequest$HelloRequestProducer, init$, void)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(HelloRequest$HelloRequestProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.HelloRequest$HelloRequestProducer", "sun.security.ssl.HelloRequest", "HelloRequestProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.HelloRequest$HelloRequestProducer",
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
		"sun.security.ssl.HelloRequest"
	};
	$loadClass(HelloRequest$HelloRequestProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HelloRequest$HelloRequestProducer);
	});
	return class$;
}

$Class* HelloRequest$HelloRequestProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun