#include <sun/security/ssl/ServerHello$T12ServerHelloProducer$KeyExchangeProperties.h>

#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/SSLPossession.h>
#include <sun/security/ssl/ServerHello$T12ServerHelloProducer.h>
#include <jcpp.h>

using $SSLPossessionArray = $Array<::sun::security::ssl::SSLPossession>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $SSLKeyExchange = ::sun::security::ssl::SSLKeyExchange;
using $SSLPossession = ::sun::security::ssl::SSLPossession;
using $ServerHello$T12ServerHelloProducer = ::sun::security::ssl::ServerHello$T12ServerHelloProducer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _ServerHello$T12ServerHelloProducer$KeyExchangeProperties_FieldInfo_[] = {
	{"cipherSuite", "Lsun/security/ssl/CipherSuite;", nullptr, $FINAL, $field(ServerHello$T12ServerHelloProducer$KeyExchangeProperties, cipherSuite)},
	{"keyExchange", "Lsun/security/ssl/SSLKeyExchange;", nullptr, $FINAL, $field(ServerHello$T12ServerHelloProducer$KeyExchangeProperties, keyExchange)},
	{"possessions", "[Lsun/security/ssl/SSLPossession;", nullptr, $FINAL, $field(ServerHello$T12ServerHelloProducer$KeyExchangeProperties, possessions)},
	{}
};

$MethodInfo _ServerHello$T12ServerHelloProducer$KeyExchangeProperties_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/CipherSuite;Lsun/security/ssl/SSLKeyExchange;[Lsun/security/ssl/SSLPossession;)V", nullptr, $PRIVATE, $method(static_cast<void(ServerHello$T12ServerHelloProducer$KeyExchangeProperties::*)($CipherSuite*,$SSLKeyExchange*,$SSLPossessionArray*)>(&ServerHello$T12ServerHelloProducer$KeyExchangeProperties::init$))},
	{}
};

$InnerClassInfo _ServerHello$T12ServerHelloProducer$KeyExchangeProperties_InnerClassesInfo_[] = {
	{"sun.security.ssl.ServerHello$T12ServerHelloProducer", "sun.security.ssl.ServerHello", "T12ServerHelloProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.ServerHello$T12ServerHelloProducer$KeyExchangeProperties", "sun.security.ssl.ServerHello$T12ServerHelloProducer", "KeyExchangeProperties", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ServerHello$T12ServerHelloProducer$KeyExchangeProperties_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ServerHello$T12ServerHelloProducer$KeyExchangeProperties",
	"java.lang.Object",
	nullptr,
	_ServerHello$T12ServerHelloProducer$KeyExchangeProperties_FieldInfo_,
	_ServerHello$T12ServerHelloProducer$KeyExchangeProperties_MethodInfo_,
	nullptr,
	nullptr,
	_ServerHello$T12ServerHelloProducer$KeyExchangeProperties_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ServerHello"
};

$Object* allocate$ServerHello$T12ServerHelloProducer$KeyExchangeProperties($Class* clazz) {
	return $of($alloc(ServerHello$T12ServerHelloProducer$KeyExchangeProperties));
}

void ServerHello$T12ServerHelloProducer$KeyExchangeProperties::init$($CipherSuite* cipherSuite, $SSLKeyExchange* keyExchange, $SSLPossessionArray* possessions) {
	$set(this, cipherSuite, cipherSuite);
	$set(this, keyExchange, keyExchange);
	$set(this, possessions, possessions);
}

ServerHello$T12ServerHelloProducer$KeyExchangeProperties::ServerHello$T12ServerHelloProducer$KeyExchangeProperties() {
}

$Class* ServerHello$T12ServerHelloProducer$KeyExchangeProperties::load$($String* name, bool initialize) {
	$loadClass(ServerHello$T12ServerHelloProducer$KeyExchangeProperties, name, initialize, &_ServerHello$T12ServerHelloProducer$KeyExchangeProperties_ClassInfo_, allocate$ServerHello$T12ServerHelloProducer$KeyExchangeProperties);
	return class$;
}

$Class* ServerHello$T12ServerHelloProducer$KeyExchangeProperties::class$ = nullptr;

		} // ssl
	} // security
} // sun