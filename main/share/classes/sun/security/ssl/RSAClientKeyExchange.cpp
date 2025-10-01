#include <sun/security/ssl/RSAClientKeyExchange.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/RSAClientKeyExchange$RSAClientKeyExchangeConsumer.h>
#include <sun/security/ssl/RSAClientKeyExchange$RSAClientKeyExchangeProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $RSAClientKeyExchange$RSAClientKeyExchangeConsumer = ::sun::security::ssl::RSAClientKeyExchange$RSAClientKeyExchangeConsumer;
using $RSAClientKeyExchange$RSAClientKeyExchangeProducer = ::sun::security::ssl::RSAClientKeyExchange$RSAClientKeyExchangeProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _RSAClientKeyExchange_FieldInfo_[] = {
	{"rsaHandshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(RSAClientKeyExchange, rsaHandshakeConsumer)},
	{"rsaHandshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(RSAClientKeyExchange, rsaHandshakeProducer)},
	{}
};

$MethodInfo _RSAClientKeyExchange_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(RSAClientKeyExchange::*)()>(&RSAClientKeyExchange::init$))},
	{}
};

$InnerClassInfo _RSAClientKeyExchange_InnerClassesInfo_[] = {
	{"sun.security.ssl.RSAClientKeyExchange$RSAClientKeyExchangeConsumer", "sun.security.ssl.RSAClientKeyExchange", "RSAClientKeyExchangeConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.RSAClientKeyExchange$RSAClientKeyExchangeProducer", "sun.security.ssl.RSAClientKeyExchange", "RSAClientKeyExchangeProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.RSAClientKeyExchange$RSAClientKeyExchangeMessage", "sun.security.ssl.RSAClientKeyExchange", "RSAClientKeyExchangeMessage", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _RSAClientKeyExchange_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.RSAClientKeyExchange",
	"java.lang.Object",
	nullptr,
	_RSAClientKeyExchange_FieldInfo_,
	_RSAClientKeyExchange_MethodInfo_,
	nullptr,
	nullptr,
	_RSAClientKeyExchange_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.RSAClientKeyExchange$RSAClientKeyExchangeConsumer,sun.security.ssl.RSAClientKeyExchange$RSAClientKeyExchangeProducer,sun.security.ssl.RSAClientKeyExchange$RSAClientKeyExchangeMessage"
};

$Object* allocate$RSAClientKeyExchange($Class* clazz) {
	return $of($alloc(RSAClientKeyExchange));
}

$SSLConsumer* RSAClientKeyExchange::rsaHandshakeConsumer = nullptr;
$HandshakeProducer* RSAClientKeyExchange::rsaHandshakeProducer = nullptr;

void RSAClientKeyExchange::init$() {
}

void clinit$RSAClientKeyExchange($Class* class$) {
	$assignStatic(RSAClientKeyExchange::rsaHandshakeConsumer, $new($RSAClientKeyExchange$RSAClientKeyExchangeConsumer));
	$assignStatic(RSAClientKeyExchange::rsaHandshakeProducer, $new($RSAClientKeyExchange$RSAClientKeyExchangeProducer));
}

RSAClientKeyExchange::RSAClientKeyExchange() {
}

$Class* RSAClientKeyExchange::load$($String* name, bool initialize) {
	$loadClass(RSAClientKeyExchange, name, initialize, &_RSAClientKeyExchange_ClassInfo_, clinit$RSAClientKeyExchange, allocate$RSAClientKeyExchange);
	return class$;
}

$Class* RSAClientKeyExchange::class$ = nullptr;

		} // ssl
	} // security
} // sun