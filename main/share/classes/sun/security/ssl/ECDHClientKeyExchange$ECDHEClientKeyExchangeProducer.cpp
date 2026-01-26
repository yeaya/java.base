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
#include <sun/security/ssl/HandshakeContext.h>
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
using $List = ::java::util::List;
using $SecretKey = ::javax::crypto::SecretKey;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ECDHClientKeyExchange$ECDHClientKeyExchangeMessage = ::sun::security::ssl::ECDHClientKeyExchange$ECDHClientKeyExchangeMessage;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $NamedGroupCredentials = ::sun::security::ssl::NamedGroupCredentials;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLCredentials = ::sun::security::ssl::SSLCredentials;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLKeyDerivation = ::sun::security::ssl::SSLKeyDerivation;
using $SSLKeyExchange = ::sun::security::ssl::SSLKeyExchange;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLPossession = ::sun::security::ssl::SSLPossession;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $SSLTrafficKeyDerivation = ::sun::security::ssl::SSLTrafficKeyDerivation;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer, init$, void)},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
	{}
};

$InnerClassInfo _ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer", "sun.security.ssl.ECDHClientKeyExchange", "ECDHEClientKeyExchangeProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer_MethodInfo_,
	nullptr,
	nullptr,
	_ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ECDHClientKeyExchange"
};

$Object* allocate$ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer($Class* clazz) {
	return $of($alloc(ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer));
}

void ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer::init$() {
}

$bytes* ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$var($SSLCredentials, sslCredentials, nullptr);
	$NamedGroup* ng = nullptr;
	{
		$var($Iterator, i$, $nc($nc(chc)->handshakeCredentials)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SSLCredentials, cd, $cast($SSLCredentials, i$->next()));
			{
				if ($instanceOf($NamedGroupCredentials, cd)) {
					$var($NamedGroupCredentials, creds, $cast($NamedGroupCredentials, cd));
					ng = $nc(creds)->getNamedGroup();
					$assign(sslCredentials, cd);
					break;
				}
			}
		}
	}
	if (sslCredentials == nullptr) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::INTERNAL_ERROR, "No ECDHE credentials negotiated for client key exchange"_s)));
	}
	$var($SSLPossession, sslPossession, $nc(ng)->createPossession($($nc(chc->sslContext)->getSecureRandom())));
	$nc(chc->handshakePossessions)->add(sslPossession);
	$var($ECDHClientKeyExchange$ECDHClientKeyExchangeMessage, cke, $new($ECDHClientKeyExchange$ECDHClientKeyExchangeMessage, static_cast<$HandshakeContext*>(chc), $($nc(sslPossession)->encode())));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced ECDHE ClientKeyExchange handshake message"_s, $$new($ObjectArray, {$of(cke)}));
	}
	cke->write(chc->handshakeOutput);
	$nc(chc->handshakeOutput)->flush();
	$var($SSLKeyExchange, ke, $SSLKeyExchange::valueOf($nc(chc->negotiatedCipherSuite)->keyExchange, chc->negotiatedProtocol));
	if (ke == nullptr) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::INTERNAL_ERROR, "Not supported key exchange type"_s)));
	} else {
		$var($SSLKeyDerivation, masterKD, $nc(ke)->createKeyDerivation(chc));
		$var($SecretKey, masterSecret, $nc(masterKD)->deriveKey("MasterSecret"_s, nullptr));
		$nc(chc->handshakeSession)->setMasterSecret(masterSecret);
		$SSLTrafficKeyDerivation* kd = $SSLTrafficKeyDerivation::valueOf(chc->negotiatedProtocol);
		if (kd == nullptr) {
			$init($Alert);
			$throw($($nc(chc->conContext)->fatal($Alert::INTERNAL_ERROR, $$str({"Not supported key derivation: "_s, chc->negotiatedProtocol}))));
		} else {
			$set(chc, handshakeKeyDerivation, $nc(kd)->createKeyDerivation(chc, masterSecret));
		}
	}
	return nullptr;
}

ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer::ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer() {
}

$Class* ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer::load$($String* name, bool initialize) {
	$loadClass(ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer, name, initialize, &_ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer_ClassInfo_, allocate$ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer);
	return class$;
}

$Class* ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun