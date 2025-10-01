#include <sun/security/ssl/DHServerKeyExchange.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/ssl/DHServerKeyExchange$DHServerKeyExchangeConsumer.h>
#include <sun/security/ssl/DHServerKeyExchange$DHServerKeyExchangeProducer.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DHServerKeyExchange$DHServerKeyExchangeConsumer = ::sun::security::ssl::DHServerKeyExchange$DHServerKeyExchangeConsumer;
using $DHServerKeyExchange$DHServerKeyExchangeProducer = ::sun::security::ssl::DHServerKeyExchange$DHServerKeyExchangeProducer;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _DHServerKeyExchange_FieldInfo_[] = {
	{"dhHandshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(DHServerKeyExchange, dhHandshakeConsumer)},
	{"dhHandshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(DHServerKeyExchange, dhHandshakeProducer)},
	{}
};

$MethodInfo _DHServerKeyExchange_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DHServerKeyExchange::*)()>(&DHServerKeyExchange::init$))},
	{}
};

$InnerClassInfo _DHServerKeyExchange_InnerClassesInfo_[] = {
	{"sun.security.ssl.DHServerKeyExchange$DHServerKeyExchangeConsumer", "sun.security.ssl.DHServerKeyExchange", "DHServerKeyExchangeConsumer", $STATIC | $FINAL},
	{"sun.security.ssl.DHServerKeyExchange$DHServerKeyExchangeProducer", "sun.security.ssl.DHServerKeyExchange", "DHServerKeyExchangeProducer", $STATIC | $FINAL},
	{"sun.security.ssl.DHServerKeyExchange$DHServerKeyExchangeMessage", "sun.security.ssl.DHServerKeyExchange", "DHServerKeyExchangeMessage", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _DHServerKeyExchange_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.DHServerKeyExchange",
	"java.lang.Object",
	nullptr,
	_DHServerKeyExchange_FieldInfo_,
	_DHServerKeyExchange_MethodInfo_,
	nullptr,
	nullptr,
	_DHServerKeyExchange_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.DHServerKeyExchange$DHServerKeyExchangeConsumer,sun.security.ssl.DHServerKeyExchange$DHServerKeyExchangeProducer,sun.security.ssl.DHServerKeyExchange$DHServerKeyExchangeMessage"
};

$Object* allocate$DHServerKeyExchange($Class* clazz) {
	return $of($alloc(DHServerKeyExchange));
}

$SSLConsumer* DHServerKeyExchange::dhHandshakeConsumer = nullptr;
$HandshakeProducer* DHServerKeyExchange::dhHandshakeProducer = nullptr;

void DHServerKeyExchange::init$() {
}

void clinit$DHServerKeyExchange($Class* class$) {
	$assignStatic(DHServerKeyExchange::dhHandshakeConsumer, $new($DHServerKeyExchange$DHServerKeyExchangeConsumer));
	$assignStatic(DHServerKeyExchange::dhHandshakeProducer, $new($DHServerKeyExchange$DHServerKeyExchangeProducer));
}

DHServerKeyExchange::DHServerKeyExchange() {
}

$Class* DHServerKeyExchange::load$($String* name, bool initialize) {
	$loadClass(DHServerKeyExchange, name, initialize, &_DHServerKeyExchange_ClassInfo_, clinit$DHServerKeyExchange, allocate$DHServerKeyExchange);
	return class$;
}

$Class* DHServerKeyExchange::class$ = nullptr;

		} // ssl
	} // security
} // sun