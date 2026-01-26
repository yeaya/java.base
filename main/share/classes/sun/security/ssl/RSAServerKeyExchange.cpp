#include <sun/security/ssl/RSAServerKeyExchange.h>

#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/RSAServerKeyExchange$RSAServerKeyExchangeConsumer.h>
#include <sun/security/ssl/RSAServerKeyExchange$RSAServerKeyExchangeProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $RSAServerKeyExchange$RSAServerKeyExchangeConsumer = ::sun::security::ssl::RSAServerKeyExchange$RSAServerKeyExchangeConsumer;
using $RSAServerKeyExchange$RSAServerKeyExchangeProducer = ::sun::security::ssl::RSAServerKeyExchange$RSAServerKeyExchangeProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _RSAServerKeyExchange_FieldInfo_[] = {
	{"rsaHandshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(RSAServerKeyExchange, rsaHandshakeConsumer)},
	{"rsaHandshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(RSAServerKeyExchange, rsaHandshakeProducer)},
	{}
};

$MethodInfo _RSAServerKeyExchange_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(RSAServerKeyExchange, init$, void)},
	{}
};

$InnerClassInfo _RSAServerKeyExchange_InnerClassesInfo_[] = {
	{"sun.security.ssl.RSAServerKeyExchange$RSAServerKeyExchangeConsumer", "sun.security.ssl.RSAServerKeyExchange", "RSAServerKeyExchangeConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.RSAServerKeyExchange$RSAServerKeyExchangeProducer", "sun.security.ssl.RSAServerKeyExchange", "RSAServerKeyExchangeProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.RSAServerKeyExchange$RSAServerKeyExchangeMessage", "sun.security.ssl.RSAServerKeyExchange", "RSAServerKeyExchangeMessage", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _RSAServerKeyExchange_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.RSAServerKeyExchange",
	"java.lang.Object",
	nullptr,
	_RSAServerKeyExchange_FieldInfo_,
	_RSAServerKeyExchange_MethodInfo_,
	nullptr,
	nullptr,
	_RSAServerKeyExchange_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.RSAServerKeyExchange$RSAServerKeyExchangeConsumer,sun.security.ssl.RSAServerKeyExchange$RSAServerKeyExchangeProducer,sun.security.ssl.RSAServerKeyExchange$RSAServerKeyExchangeMessage"
};

$Object* allocate$RSAServerKeyExchange($Class* clazz) {
	return $of($alloc(RSAServerKeyExchange));
}

$SSLConsumer* RSAServerKeyExchange::rsaHandshakeConsumer = nullptr;
$HandshakeProducer* RSAServerKeyExchange::rsaHandshakeProducer = nullptr;

void RSAServerKeyExchange::init$() {
}

void clinit$RSAServerKeyExchange($Class* class$) {
	$assignStatic(RSAServerKeyExchange::rsaHandshakeConsumer, $new($RSAServerKeyExchange$RSAServerKeyExchangeConsumer));
	$assignStatic(RSAServerKeyExchange::rsaHandshakeProducer, $new($RSAServerKeyExchange$RSAServerKeyExchangeProducer));
}

RSAServerKeyExchange::RSAServerKeyExchange() {
}

$Class* RSAServerKeyExchange::load$($String* name, bool initialize) {
	$loadClass(RSAServerKeyExchange, name, initialize, &_RSAServerKeyExchange_ClassInfo_, clinit$RSAServerKeyExchange, allocate$RSAServerKeyExchange);
	return class$;
}

$Class* RSAServerKeyExchange::class$ = nullptr;

		} // ssl
	} // security
} // sun