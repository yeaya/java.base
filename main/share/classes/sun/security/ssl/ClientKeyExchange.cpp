#include <sun/security/ssl/ClientKeyExchange.h>

#include <sun/security/ssl/ClientKeyExchange$ClientKeyExchangeConsumer.h>
#include <sun/security/ssl/ClientKeyExchange$ClientKeyExchangeProducer.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClientKeyExchange$ClientKeyExchangeConsumer = ::sun::security::ssl::ClientKeyExchange$ClientKeyExchangeConsumer;
using $ClientKeyExchange$ClientKeyExchangeProducer = ::sun::security::ssl::ClientKeyExchange$ClientKeyExchangeProducer;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _ClientKeyExchange_FieldInfo_[] = {
	{"handshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(ClientKeyExchange, handshakeConsumer)},
	{"handshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(ClientKeyExchange, handshakeProducer)},
	{}
};

$MethodInfo _ClientKeyExchange_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ClientKeyExchange::*)()>(&ClientKeyExchange::init$))},
	{}
};

$InnerClassInfo _ClientKeyExchange_InnerClassesInfo_[] = {
	{"sun.security.ssl.ClientKeyExchange$ClientKeyExchangeConsumer", "sun.security.ssl.ClientKeyExchange", "ClientKeyExchangeConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.ClientKeyExchange$ClientKeyExchangeProducer", "sun.security.ssl.ClientKeyExchange", "ClientKeyExchangeProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ClientKeyExchange_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ClientKeyExchange",
	"java.lang.Object",
	nullptr,
	_ClientKeyExchange_FieldInfo_,
	_ClientKeyExchange_MethodInfo_,
	nullptr,
	nullptr,
	_ClientKeyExchange_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.ClientKeyExchange$ClientKeyExchangeConsumer,sun.security.ssl.ClientKeyExchange$ClientKeyExchangeProducer"
};

$Object* allocate$ClientKeyExchange($Class* clazz) {
	return $of($alloc(ClientKeyExchange));
}

$SSLConsumer* ClientKeyExchange::handshakeConsumer = nullptr;
$HandshakeProducer* ClientKeyExchange::handshakeProducer = nullptr;

void ClientKeyExchange::init$() {
}

void clinit$ClientKeyExchange($Class* class$) {
	$assignStatic(ClientKeyExchange::handshakeConsumer, $new($ClientKeyExchange$ClientKeyExchangeConsumer));
	$assignStatic(ClientKeyExchange::handshakeProducer, $new($ClientKeyExchange$ClientKeyExchangeProducer));
}

ClientKeyExchange::ClientKeyExchange() {
}

$Class* ClientKeyExchange::load$($String* name, bool initialize) {
	$loadClass(ClientKeyExchange, name, initialize, &_ClientKeyExchange_ClassInfo_, clinit$ClientKeyExchange, allocate$ClientKeyExchange);
	return class$;
}

$Class* ClientKeyExchange::class$ = nullptr;

		} // ssl
	} // security
} // sun