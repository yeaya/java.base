#include <sun/security/ssl/ECDHServerKeyExchange.h>
#include <sun/security/ssl/ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer.h>
#include <sun/security/ssl/ECDHServerKeyExchange$ECDHServerKeyExchangeProducer.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer = ::sun::security::ssl::ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer;
using $ECDHServerKeyExchange$ECDHServerKeyExchangeProducer = ::sun::security::ssl::ECDHServerKeyExchange$ECDHServerKeyExchangeProducer;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;

namespace sun {
	namespace security {
		namespace ssl {

$SSLConsumer* ECDHServerKeyExchange::ecdheHandshakeConsumer = nullptr;
$HandshakeProducer* ECDHServerKeyExchange::ecdheHandshakeProducer = nullptr;

void ECDHServerKeyExchange::init$() {
}

void ECDHServerKeyExchange::clinit$($Class* clazz) {
	$assignStatic(ECDHServerKeyExchange::ecdheHandshakeConsumer, $new($ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer));
	$assignStatic(ECDHServerKeyExchange::ecdheHandshakeProducer, $new($ECDHServerKeyExchange$ECDHServerKeyExchangeProducer));
}

ECDHServerKeyExchange::ECDHServerKeyExchange() {
}

$Class* ECDHServerKeyExchange::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ecdheHandshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(ECDHServerKeyExchange, ecdheHandshakeConsumer)},
		{"ecdheHandshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(ECDHServerKeyExchange, ecdheHandshakeProducer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ECDHServerKeyExchange, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer", "sun.security.ssl.ECDHServerKeyExchange", "ECDHServerKeyExchangeConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.ECDHServerKeyExchange$ECDHServerKeyExchangeProducer", "sun.security.ssl.ECDHServerKeyExchange", "ECDHServerKeyExchangeProducer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.ECDHServerKeyExchange$ECDHServerKeyExchangeMessage", "sun.security.ssl.ECDHServerKeyExchange", "ECDHServerKeyExchangeMessage", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ECDHServerKeyExchange",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.ssl.ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer,sun.security.ssl.ECDHServerKeyExchange$ECDHServerKeyExchangeProducer,sun.security.ssl.ECDHServerKeyExchange$ECDHServerKeyExchangeMessage"
	};
	$loadClass(ECDHServerKeyExchange, name, initialize, &classInfo$$, ECDHServerKeyExchange::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ECDHServerKeyExchange);
	});
	return class$;
}

$Class* ECDHServerKeyExchange::class$ = nullptr;

		} // ssl
	} // security
} // sun