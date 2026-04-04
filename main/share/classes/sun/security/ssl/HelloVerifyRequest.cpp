#include <sun/security/ssl/HelloVerifyRequest.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/HelloVerifyRequest$HelloVerifyRequestConsumer.h>
#include <sun/security/ssl/HelloVerifyRequest$HelloVerifyRequestProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $HelloVerifyRequest$HelloVerifyRequestConsumer = ::sun::security::ssl::HelloVerifyRequest$HelloVerifyRequestConsumer;
using $HelloVerifyRequest$HelloVerifyRequestProducer = ::sun::security::ssl::HelloVerifyRequest$HelloVerifyRequestProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;

namespace sun {
	namespace security {
		namespace ssl {

$SSLConsumer* HelloVerifyRequest::handshakeConsumer = nullptr;
$HandshakeProducer* HelloVerifyRequest::handshakeProducer = nullptr;

void HelloVerifyRequest::init$() {
}

void HelloVerifyRequest::clinit$($Class* clazz) {
	$assignStatic(HelloVerifyRequest::handshakeConsumer, $new($HelloVerifyRequest$HelloVerifyRequestConsumer));
	$assignStatic(HelloVerifyRequest::handshakeProducer, $new($HelloVerifyRequest$HelloVerifyRequestProducer));
}

HelloVerifyRequest::HelloVerifyRequest() {
}

$Class* HelloVerifyRequest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"handshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(HelloVerifyRequest, handshakeConsumer)},
		{"handshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(HelloVerifyRequest, handshakeProducer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HelloVerifyRequest, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.HelloVerifyRequest$HelloVerifyRequestConsumer", "sun.security.ssl.HelloVerifyRequest", "HelloVerifyRequestConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.HelloVerifyRequest$HelloVerifyRequestProducer", "sun.security.ssl.HelloVerifyRequest", "HelloVerifyRequestProducer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.HelloVerifyRequest$HelloVerifyRequestMessage", "sun.security.ssl.HelloVerifyRequest", "HelloVerifyRequestMessage", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.HelloVerifyRequest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.ssl.HelloVerifyRequest$HelloVerifyRequestConsumer,sun.security.ssl.HelloVerifyRequest$HelloVerifyRequestProducer,sun.security.ssl.HelloVerifyRequest$HelloVerifyRequestMessage"
	};
	$loadClass(HelloVerifyRequest, name, initialize, &classInfo$$, HelloVerifyRequest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(HelloVerifyRequest);
	});
	return class$;
}

$Class* HelloVerifyRequest::class$ = nullptr;

		} // ssl
	} // security
} // sun