#include <sun/security/ssl/HelloRequest.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/HelloRequest$HelloRequestConsumer.h>
#include <sun/security/ssl/HelloRequest$HelloRequestKickstartProducer.h>
#include <sun/security/ssl/HelloRequest$HelloRequestProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <sun/security/ssl/SSLProducer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $HelloRequest$HelloRequestConsumer = ::sun::security::ssl::HelloRequest$HelloRequestConsumer;
using $HelloRequest$HelloRequestKickstartProducer = ::sun::security::ssl::HelloRequest$HelloRequestKickstartProducer;
using $HelloRequest$HelloRequestProducer = ::sun::security::ssl::HelloRequest$HelloRequestProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $SSLProducer = ::sun::security::ssl::SSLProducer;

namespace sun {
	namespace security {
		namespace ssl {

$SSLProducer* HelloRequest::kickstartProducer = nullptr;
$SSLConsumer* HelloRequest::handshakeConsumer = nullptr;
$HandshakeProducer* HelloRequest::handshakeProducer = nullptr;

void HelloRequest::init$() {
}

void HelloRequest::clinit$($Class* clazz) {
	$assignStatic(HelloRequest::kickstartProducer, $new($HelloRequest$HelloRequestKickstartProducer));
	$assignStatic(HelloRequest::handshakeConsumer, $new($HelloRequest$HelloRequestConsumer));
	$assignStatic(HelloRequest::handshakeProducer, $new($HelloRequest$HelloRequestProducer));
}

HelloRequest::HelloRequest() {
}

$Class* HelloRequest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"kickstartProducer", "Lsun/security/ssl/SSLProducer;", nullptr, $STATIC | $FINAL, $staticField(HelloRequest, kickstartProducer)},
		{"handshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(HelloRequest, handshakeConsumer)},
		{"handshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(HelloRequest, handshakeProducer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HelloRequest, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.HelloRequest$HelloRequestConsumer", "sun.security.ssl.HelloRequest", "HelloRequestConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.HelloRequest$HelloRequestProducer", "sun.security.ssl.HelloRequest", "HelloRequestProducer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.HelloRequest$HelloRequestKickstartProducer", "sun.security.ssl.HelloRequest", "HelloRequestKickstartProducer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.HelloRequest$HelloRequestMessage", "sun.security.ssl.HelloRequest", "HelloRequestMessage", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.HelloRequest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.ssl.HelloRequest$HelloRequestConsumer,sun.security.ssl.HelloRequest$HelloRequestProducer,sun.security.ssl.HelloRequest$HelloRequestKickstartProducer,sun.security.ssl.HelloRequest$HelloRequestMessage"
	};
	$loadClass(HelloRequest, name, initialize, &classInfo$$, HelloRequest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(HelloRequest);
	});
	return class$;
}

$Class* HelloRequest::class$ = nullptr;

		} // ssl
	} // security
} // sun