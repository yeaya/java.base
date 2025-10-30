#include <sun/security/ssl/ServerKeyExchange.h>

#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <sun/security/ssl/ServerKeyExchange$ServerKeyExchangeConsumer.h>
#include <sun/security/ssl/ServerKeyExchange$ServerKeyExchangeProducer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $ServerKeyExchange$ServerKeyExchangeConsumer = ::sun::security::ssl::ServerKeyExchange$ServerKeyExchangeConsumer;
using $ServerKeyExchange$ServerKeyExchangeProducer = ::sun::security::ssl::ServerKeyExchange$ServerKeyExchangeProducer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _ServerKeyExchange_FieldInfo_[] = {
	{"handshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(ServerKeyExchange, handshakeConsumer)},
	{"handshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(ServerKeyExchange, handshakeProducer)},
	{}
};

$MethodInfo _ServerKeyExchange_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ServerKeyExchange::*)()>(&ServerKeyExchange::init$))},
	{}
};

$InnerClassInfo _ServerKeyExchange_InnerClassesInfo_[] = {
	{"sun.security.ssl.ServerKeyExchange$ServerKeyExchangeConsumer", "sun.security.ssl.ServerKeyExchange", "ServerKeyExchangeConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.ServerKeyExchange$ServerKeyExchangeProducer", "sun.security.ssl.ServerKeyExchange", "ServerKeyExchangeProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ServerKeyExchange_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ServerKeyExchange",
	"java.lang.Object",
	nullptr,
	_ServerKeyExchange_FieldInfo_,
	_ServerKeyExchange_MethodInfo_,
	nullptr,
	nullptr,
	_ServerKeyExchange_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.ServerKeyExchange$ServerKeyExchangeConsumer,sun.security.ssl.ServerKeyExchange$ServerKeyExchangeProducer"
};

$Object* allocate$ServerKeyExchange($Class* clazz) {
	return $of($alloc(ServerKeyExchange));
}

$SSLConsumer* ServerKeyExchange::handshakeConsumer = nullptr;
$HandshakeProducer* ServerKeyExchange::handshakeProducer = nullptr;

void ServerKeyExchange::init$() {
}

void clinit$ServerKeyExchange($Class* class$) {
	$assignStatic(ServerKeyExchange::handshakeConsumer, $new($ServerKeyExchange$ServerKeyExchangeConsumer));
	$assignStatic(ServerKeyExchange::handshakeProducer, $new($ServerKeyExchange$ServerKeyExchangeProducer));
}

ServerKeyExchange::ServerKeyExchange() {
}

$Class* ServerKeyExchange::load$($String* name, bool initialize) {
	$loadClass(ServerKeyExchange, name, initialize, &_ServerKeyExchange_ClassInfo_, clinit$ServerKeyExchange, allocate$ServerKeyExchange);
	return class$;
}

$Class* ServerKeyExchange::class$ = nullptr;

		} // ssl
	} // security
} // sun