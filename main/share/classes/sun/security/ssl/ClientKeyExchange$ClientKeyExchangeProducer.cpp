#include <sun/security/ssl/ClientKeyExchange$ClientKeyExchangeProducer.h>

#include <java/lang/Array.h>
#include <java/lang/Byte.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map$Entry.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/CipherSuite$KeyExchange.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ClientKeyExchange.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CLIENT_KEY_EXCHANGE
#undef UNEXPECTED_MESSAGE

using $Map$EntryArray = $Array<::java::util::Map$Entry>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Map$Entry = ::java::util::Map$Entry;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $CipherSuite$KeyExchange = ::sun::security::ssl::CipherSuite$KeyExchange;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ClientKeyExchange = ::sun::security::ssl::ClientKeyExchange;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLKeyExchange = ::sun::security::ssl::SSLKeyExchange;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ClientKeyExchange$ClientKeyExchangeProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ClientKeyExchange$ClientKeyExchangeProducer::*)()>(&ClientKeyExchange$ClientKeyExchangeProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ClientKeyExchange$ClientKeyExchangeProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ClientKeyExchange$ClientKeyExchangeProducer", "sun.security.ssl.ClientKeyExchange", "ClientKeyExchangeProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ClientKeyExchange$ClientKeyExchangeProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ClientKeyExchange$ClientKeyExchangeProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_ClientKeyExchange$ClientKeyExchangeProducer_MethodInfo_,
	nullptr,
	nullptr,
	_ClientKeyExchange$ClientKeyExchangeProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ClientKeyExchange"
};

$Object* allocate$ClientKeyExchange$ClientKeyExchangeProducer($Class* clazz) {
	return $of($alloc(ClientKeyExchange$ClientKeyExchangeProducer));
}

void ClientKeyExchange$ClientKeyExchangeProducer::init$() {
}

$bytes* ClientKeyExchange$ClientKeyExchangeProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$var($SSLKeyExchange, ke, $SSLKeyExchange::valueOf($nc($nc(chc)->negotiatedCipherSuite)->keyExchange, chc->negotiatedProtocol));
	if (ke != nullptr) {
		{
			$var($Map$EntryArray, arr$, ke->getHandshakeProducers(chc));
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Map$Entry, hp, arr$->get(i$));
				{
					$init($SSLHandshake);
					if ($nc(($cast($Byte, $($nc(hp)->getKey()))))->byteValue() == $SSLHandshake::CLIENT_KEY_EXCHANGE->id) {
						return $nc(($cast($HandshakeProducer, $(hp->getValue()))))->produce(context, message);
					}
				}
			}
		}
	}
	$init($Alert);
	$throw($($nc($nc(chc)->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Unexpected ClientKeyExchange handshake message."_s)));
}

ClientKeyExchange$ClientKeyExchangeProducer::ClientKeyExchange$ClientKeyExchangeProducer() {
}

$Class* ClientKeyExchange$ClientKeyExchangeProducer::load$($String* name, bool initialize) {
	$loadClass(ClientKeyExchange$ClientKeyExchangeProducer, name, initialize, &_ClientKeyExchange$ClientKeyExchangeProducer_ClassInfo_, allocate$ClientKeyExchange$ClientKeyExchangeProducer);
	return class$;
}

$Class* ClientKeyExchange$ClientKeyExchangeProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun