#include <sun/security/ssl/ClientKeyExchange$ClientKeyExchangeConsumer.h>

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
#include <java/nio/ByteBuffer.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map$Entry.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/CipherSuite$KeyExchange.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/ClientKeyExchange.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CLIENT_KEY_EXCHANGE
#undef CERTIFICATE
#undef UNEXPECTED_MESSAGE

using $Map$EntryArray = $Array<::java::util::Map$Entry>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HashMap = ::java::util::HashMap;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map$Entry = ::java::util::Map$Entry;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $CipherSuite$KeyExchange = ::sun::security::ssl::CipherSuite$KeyExchange;
using $ClientKeyExchange = ::sun::security::ssl::ClientKeyExchange;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLKeyExchange = ::sun::security::ssl::SSLKeyExchange;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ClientKeyExchange$ClientKeyExchangeConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ClientKeyExchange$ClientKeyExchangeConsumer::*)()>(&ClientKeyExchange$ClientKeyExchangeConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ClientKeyExchange$ClientKeyExchangeConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ClientKeyExchange$ClientKeyExchangeConsumer", "sun.security.ssl.ClientKeyExchange", "ClientKeyExchangeConsumer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ClientKeyExchange$ClientKeyExchangeConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ClientKeyExchange$ClientKeyExchangeConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLConsumer",
	nullptr,
	_ClientKeyExchange$ClientKeyExchangeConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_ClientKeyExchange$ClientKeyExchangeConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ClientKeyExchange"
};

$Object* allocate$ClientKeyExchange$ClientKeyExchangeConsumer($Class* clazz) {
	return $of($alloc(ClientKeyExchange$ClientKeyExchangeConsumer));
}

void ClientKeyExchange$ClientKeyExchangeConsumer::init$() {
}

void ClientKeyExchange$ClientKeyExchangeConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLHandshake);
	$nc($nc(shc)->handshakeConsumers)->remove($($Byte::valueOf($SSLHandshake::CLIENT_KEY_EXCHANGE->id)));
	if ($nc(shc->handshakeConsumers)->containsKey($($Byte::valueOf($SSLHandshake::CERTIFICATE->id)))) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Unexpected ClientKeyExchange handshake message."_s)));
	}
	$var($SSLKeyExchange, ke, $SSLKeyExchange::valueOf($nc(shc->negotiatedCipherSuite)->keyExchange, shc->negotiatedProtocol));
	if (ke != nullptr) {
		{
			$var($Map$EntryArray, arr$, ke->getHandshakeConsumers(shc));
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Map$Entry, hc, arr$->get(i$));
				{
					if ($nc(($cast($Byte, $($nc(hc)->getKey()))))->byteValue() == $SSLHandshake::CLIENT_KEY_EXCHANGE->id) {
						$nc(($cast($SSLConsumer, $(hc->getValue()))))->consume(context, message);
						return;
					}
				}
			}
		}
	}
	$init($Alert);
	$throw($($nc(shc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Unexpected ClientKeyExchange handshake message."_s)));
}

ClientKeyExchange$ClientKeyExchangeConsumer::ClientKeyExchange$ClientKeyExchangeConsumer() {
}

$Class* ClientKeyExchange$ClientKeyExchangeConsumer::load$($String* name, bool initialize) {
	$loadClass(ClientKeyExchange$ClientKeyExchangeConsumer, name, initialize, &_ClientKeyExchange$ClientKeyExchangeConsumer_ClassInfo_, allocate$ClientKeyExchange$ClientKeyExchangeConsumer);
	return class$;
}

$Class* ClientKeyExchange$ClientKeyExchangeConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun