#include <sun/security/ssl/ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/crypto/SecretKey.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/CipherSuite$KeyExchange.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ECDHClientKeyExchange$ECDHClientKeyExchangeMessage.h>
#include <sun/security/ssl/ECDHClientKeyExchange.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/NamedGroup.h>
#include <sun/security/ssl/NamedGroupCredentials.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLCredentials.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLKeyDerivation.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLPossession.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/SSLTrafficKeyDerivation.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef INTERNAL_ERROR

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Iterator = ::java::util::Iterator;
using $SecretKey = ::javax::crypto::SecretKey;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ECDHClientKeyExchange$ECDHClientKeyExchangeMessage = ::sun::security::ssl::ECDHClientKeyExchange$ECDHClientKeyExchangeMessage;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $NamedGroupCredentials = ::sun::security::ssl::NamedGroupCredentials;
using $SSLCredentials = ::sun::security::ssl::SSLCredentials;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLKeyDerivation = ::sun::security::ssl::SSLKeyDerivation;
using $SSLKeyExchange = ::sun::security::ssl::SSLKeyExchange;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLPossession = ::sun::security::ssl::SSLPossession;
using $SSLTrafficKeyDerivation = ::sun::security::ssl::SSLTrafficKeyDerivation;

namespace sun {
	namespace security {
		namespace ssl {

void ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer::init$() {
}

$bytes* ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$var($SSLCredentials, sslCredentials, nullptr);
	$NamedGroup* ng = nullptr;
	{
		$var($Iterator, i$, $nc($nc(chc)->handshakeCredentials)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SSLCredentials, cd, $cast($SSLCredentials, i$->next()));
			if ($instanceOf($NamedGroupCredentials, cd)) {
				$var($NamedGroupCredentials, creds, $cast($NamedGroupCredentials, cd));
				ng = creds->getNamedGroup();
				$assign(sslCredentials, cd);
				break;
			}
		}
	}
	if (sslCredentials == nullptr) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::INTERNAL_ERROR, "No ECDHE credentials negotiated for client key exchange"_s)));
	}
	$var($SSLPossession, sslPossession, $nc(ng)->createPossession($($nc(chc->sslContext)->getSecureRandom())));
	$nc(chc->handshakePossessions)->add(sslPossession);
	$var($ECDHClientKeyExchange$ECDHClientKeyExchangeMessage, cke, $new($ECDHClientKeyExchange$ECDHClientKeyExchangeMessage, chc, $($nc(sslPossession)->encode())));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced ECDHE ClientKeyExchange handshake message"_s, $$new($ObjectArray, {cke}));
	}
	cke->write(chc->handshakeOutput);
	$nc(chc->handshakeOutput)->flush();
	$var($SSLKeyExchange, ke, $SSLKeyExchange::valueOf($nc(chc->negotiatedCipherSuite)->keyExchange, chc->negotiatedProtocol));
	if (ke == nullptr) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::INTERNAL_ERROR, "Not supported key exchange type"_s)));
	} else {
		$var($SSLKeyDerivation, masterKD, ke->createKeyDerivation(chc));
		$var($SecretKey, masterSecret, $nc(masterKD)->deriveKey("MasterSecret"_s, nullptr));
		$nc(chc->handshakeSession)->setMasterSecret(masterSecret);
		$SSLTrafficKeyDerivation* kd = $SSLTrafficKeyDerivation::valueOf(chc->negotiatedProtocol);
		if (kd == nullptr) {
			$init($Alert);
			$throw($($nc(chc->conContext)->fatal($Alert::INTERNAL_ERROR, $$str({"Not supported key derivation: "_s, chc->negotiatedProtocol}))));
		} else {
			$set(chc, handshakeKeyDerivation, kd->createKeyDerivation(chc, masterSecret));
		}
	}
	return nullptr;
}

ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer::ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer() {
}

$Class* ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer, init$, void)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer", "sun.security.ssl.ECDHClientKeyExchange", "ECDHEClientKeyExchangeProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer",
		"java.lang.Object",
		"sun.security.ssl.HandshakeProducer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.ECDHClientKeyExchange"
	};
	$loadClass(ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer);
	});
	return class$;
}

$Class* ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun