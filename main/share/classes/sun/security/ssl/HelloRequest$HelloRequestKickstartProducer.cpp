#include <sun/security/ssl/HelloRequest$HelloRequestKickstartProducer.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/HelloRequest$HelloRequestMessage.h>
#include <sun/security/ssl/HelloRequest.h>
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
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void HelloRequest$HelloRequestKickstartProducer::init$() {
}

$bytes* HelloRequest$HelloRequestKickstartProducer::produce($ConnectionContext* context) {
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

HelloRequest$HelloRequestKickstartProducer::HelloRequest$HelloRequestKickstartProducer() {
}

$Class* HelloRequest$HelloRequestKickstartProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(HelloRequest$HelloRequestKickstartProducer, init$, void)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;)[B", nullptr, $PUBLIC, $virtualMethod(HelloRequest$HelloRequestKickstartProducer, produce, $bytes*, $ConnectionContext*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.HelloRequest$HelloRequestKickstartProducer", "sun.security.ssl.HelloRequest", "HelloRequestKickstartProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.HelloRequest$HelloRequestKickstartProducer",
		"java.lang.Object",
		"sun.security.ssl.SSLProducer",
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
	$loadClass(HelloRequest$HelloRequestKickstartProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HelloRequest$HelloRequestKickstartProducer);
	});
	return class$;
}

$Class* HelloRequest$HelloRequestKickstartProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun