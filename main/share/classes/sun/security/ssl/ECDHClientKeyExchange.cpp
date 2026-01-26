#include <sun/security/ssl/ECDHClientKeyExchange.h>

#include <sun/security/ssl/ECDHClientKeyExchange$ECDHClientKeyExchangeConsumer.h>
#include <sun/security/ssl/ECDHClientKeyExchange$ECDHClientKeyExchangeProducer.h>
#include <sun/security/ssl/ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer.h>
#include <sun/security/ssl/ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ECDHClientKeyExchange$ECDHClientKeyExchangeConsumer = ::sun::security::ssl::ECDHClientKeyExchange$ECDHClientKeyExchangeConsumer;
using $ECDHClientKeyExchange$ECDHClientKeyExchangeProducer = ::sun::security::ssl::ECDHClientKeyExchange$ECDHClientKeyExchangeProducer;
using $ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer = ::sun::security::ssl::ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer;
using $ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer = ::sun::security::ssl::ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _ECDHClientKeyExchange_FieldInfo_[] = {
	{"ecdhHandshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(ECDHClientKeyExchange, ecdhHandshakeConsumer)},
	{"ecdhHandshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(ECDHClientKeyExchange, ecdhHandshakeProducer)},
	{"ecdheHandshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(ECDHClientKeyExchange, ecdheHandshakeConsumer)},
	{"ecdheHandshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(ECDHClientKeyExchange, ecdheHandshakeProducer)},
	{}
};

$MethodInfo _ECDHClientKeyExchange_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ECDHClientKeyExchange, init$, void)},
	{}
};

$InnerClassInfo _ECDHClientKeyExchange_InnerClassesInfo_[] = {
	{"sun.security.ssl.ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer", "sun.security.ssl.ECDHClientKeyExchange", "ECDHEClientKeyExchangeConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer", "sun.security.ssl.ECDHClientKeyExchange", "ECDHEClientKeyExchangeProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.ECDHClientKeyExchange$ECDHClientKeyExchangeConsumer", "sun.security.ssl.ECDHClientKeyExchange", "ECDHClientKeyExchangeConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.ECDHClientKeyExchange$ECDHClientKeyExchangeProducer", "sun.security.ssl.ECDHClientKeyExchange", "ECDHClientKeyExchangeProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.ECDHClientKeyExchange$ECDHClientKeyExchangeMessage", "sun.security.ssl.ECDHClientKeyExchange", "ECDHClientKeyExchangeMessage", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ECDHClientKeyExchange_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ECDHClientKeyExchange",
	"java.lang.Object",
	nullptr,
	_ECDHClientKeyExchange_FieldInfo_,
	_ECDHClientKeyExchange_MethodInfo_,
	nullptr,
	nullptr,
	_ECDHClientKeyExchange_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer,sun.security.ssl.ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer,sun.security.ssl.ECDHClientKeyExchange$ECDHClientKeyExchangeConsumer,sun.security.ssl.ECDHClientKeyExchange$ECDHClientKeyExchangeProducer,sun.security.ssl.ECDHClientKeyExchange$ECDHClientKeyExchangeMessage"
};

$Object* allocate$ECDHClientKeyExchange($Class* clazz) {
	return $of($alloc(ECDHClientKeyExchange));
}

$SSLConsumer* ECDHClientKeyExchange::ecdhHandshakeConsumer = nullptr;
$HandshakeProducer* ECDHClientKeyExchange::ecdhHandshakeProducer = nullptr;
$SSLConsumer* ECDHClientKeyExchange::ecdheHandshakeConsumer = nullptr;
$HandshakeProducer* ECDHClientKeyExchange::ecdheHandshakeProducer = nullptr;

void ECDHClientKeyExchange::init$() {
}

void clinit$ECDHClientKeyExchange($Class* class$) {
	$assignStatic(ECDHClientKeyExchange::ecdhHandshakeConsumer, $new($ECDHClientKeyExchange$ECDHClientKeyExchangeConsumer));
	$assignStatic(ECDHClientKeyExchange::ecdhHandshakeProducer, $new($ECDHClientKeyExchange$ECDHClientKeyExchangeProducer));
	$assignStatic(ECDHClientKeyExchange::ecdheHandshakeConsumer, $new($ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer));
	$assignStatic(ECDHClientKeyExchange::ecdheHandshakeProducer, $new($ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer));
}

ECDHClientKeyExchange::ECDHClientKeyExchange() {
}

$Class* ECDHClientKeyExchange::load$($String* name, bool initialize) {
	$loadClass(ECDHClientKeyExchange, name, initialize, &_ECDHClientKeyExchange_ClassInfo_, clinit$ECDHClientKeyExchange, allocate$ECDHClientKeyExchange);
	return class$;
}

$Class* ECDHClientKeyExchange::class$ = nullptr;

		} // ssl
	} // security
} // sun