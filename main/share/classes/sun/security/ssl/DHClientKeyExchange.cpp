#include <sun/security/ssl/DHClientKeyExchange.h>

#include <sun/security/ssl/DHClientKeyExchange$DHClientKeyExchangeConsumer.h>
#include <sun/security/ssl/DHClientKeyExchange$DHClientKeyExchangeProducer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DHClientKeyExchange$DHClientKeyExchangeConsumer = ::sun::security::ssl::DHClientKeyExchange$DHClientKeyExchangeConsumer;
using $DHClientKeyExchange$DHClientKeyExchangeProducer = ::sun::security::ssl::DHClientKeyExchange$DHClientKeyExchangeProducer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _DHClientKeyExchange_FieldInfo_[] = {
	{"dhHandshakeConsumer", "Lsun/security/ssl/DHClientKeyExchange$DHClientKeyExchangeConsumer;", nullptr, $STATIC | $FINAL, $staticField(DHClientKeyExchange, dhHandshakeConsumer)},
	{"dhHandshakeProducer", "Lsun/security/ssl/DHClientKeyExchange$DHClientKeyExchangeProducer;", nullptr, $STATIC | $FINAL, $staticField(DHClientKeyExchange, dhHandshakeProducer)},
	{}
};

$MethodInfo _DHClientKeyExchange_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DHClientKeyExchange::*)()>(&DHClientKeyExchange::init$))},
	{}
};

$InnerClassInfo _DHClientKeyExchange_InnerClassesInfo_[] = {
	{"sun.security.ssl.DHClientKeyExchange$DHClientKeyExchangeConsumer", "sun.security.ssl.DHClientKeyExchange", "DHClientKeyExchangeConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.DHClientKeyExchange$DHClientKeyExchangeProducer", "sun.security.ssl.DHClientKeyExchange", "DHClientKeyExchangeProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.DHClientKeyExchange$DHClientKeyExchangeMessage", "sun.security.ssl.DHClientKeyExchange", "DHClientKeyExchangeMessage", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _DHClientKeyExchange_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.DHClientKeyExchange",
	"java.lang.Object",
	nullptr,
	_DHClientKeyExchange_FieldInfo_,
	_DHClientKeyExchange_MethodInfo_,
	nullptr,
	nullptr,
	_DHClientKeyExchange_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.DHClientKeyExchange$DHClientKeyExchangeConsumer,sun.security.ssl.DHClientKeyExchange$DHClientKeyExchangeProducer,sun.security.ssl.DHClientKeyExchange$DHClientKeyExchangeMessage"
};

$Object* allocate$DHClientKeyExchange($Class* clazz) {
	return $of($alloc(DHClientKeyExchange));
}

$DHClientKeyExchange$DHClientKeyExchangeConsumer* DHClientKeyExchange::dhHandshakeConsumer = nullptr;
$DHClientKeyExchange$DHClientKeyExchangeProducer* DHClientKeyExchange::dhHandshakeProducer = nullptr;

void DHClientKeyExchange::init$() {
}

void clinit$DHClientKeyExchange($Class* class$) {
	$assignStatic(DHClientKeyExchange::dhHandshakeConsumer, $new($DHClientKeyExchange$DHClientKeyExchangeConsumer));
	$assignStatic(DHClientKeyExchange::dhHandshakeProducer, $new($DHClientKeyExchange$DHClientKeyExchangeProducer));
}

DHClientKeyExchange::DHClientKeyExchange() {
}

$Class* DHClientKeyExchange::load$($String* name, bool initialize) {
	$loadClass(DHClientKeyExchange, name, initialize, &_DHClientKeyExchange_ClassInfo_, clinit$DHClientKeyExchange, allocate$DHClientKeyExchange);
	return class$;
}

$Class* DHClientKeyExchange::class$ = nullptr;

		} // ssl
	} // security
} // sun