#include <sun/security/ssl/DHClientKeyExchange$DHClientKeyExchangeProducer.h>

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
#include <sun/security/ssl/DHClientKeyExchange$DHClientKeyExchangeMessage.h>
#include <sun/security/ssl/DHClientKeyExchange.h>
#include <sun/security/ssl/DHKeyExchange$DHECredentials.h>
#include <sun/security/ssl/DHKeyExchange$DHEPossession.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLCredentials.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLKeyDerivation.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/SSLTrafficKeyDerivation.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef HANDSHAKE_FAILURE
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
using $DHClientKeyExchange$DHClientKeyExchangeMessage = ::sun::security::ssl::DHClientKeyExchange$DHClientKeyExchangeMessage;
using $DHKeyExchange$DHECredentials = ::sun::security::ssl::DHKeyExchange$DHECredentials;
using $DHKeyExchange$DHEPossession = ::sun::security::ssl::DHKeyExchange$DHEPossession;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLCredentials = ::sun::security::ssl::SSLCredentials;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLKeyDerivation = ::sun::security::ssl::SSLKeyDerivation;
using $SSLKeyExchange = ::sun::security::ssl::SSLKeyExchange;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $SSLTrafficKeyDerivation = ::sun::security::ssl::SSLTrafficKeyDerivation;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _DHClientKeyExchange$DHClientKeyExchangeProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DHClientKeyExchange$DHClientKeyExchangeProducer::*)()>(&DHClientKeyExchange$DHClientKeyExchangeProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _DHClientKeyExchange$DHClientKeyExchangeProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.DHClientKeyExchange$DHClientKeyExchangeProducer", "sun.security.ssl.DHClientKeyExchange", "DHClientKeyExchangeProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _DHClientKeyExchange$DHClientKeyExchangeProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.DHClientKeyExchange$DHClientKeyExchangeProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_DHClientKeyExchange$DHClientKeyExchangeProducer_MethodInfo_,
	nullptr,
	nullptr,
	_DHClientKeyExchange$DHClientKeyExchangeProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.DHClientKeyExchange"
};

$Object* allocate$DHClientKeyExchange$DHClientKeyExchangeProducer($Class* clazz) {
	return $of($alloc(DHClientKeyExchange$DHClientKeyExchangeProducer));
}

void DHClientKeyExchange$DHClientKeyExchangeProducer::init$() {
}

$bytes* DHClientKeyExchange$DHClientKeyExchangeProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$var($DHKeyExchange$DHECredentials, dheCredentials, nullptr);
	{
		$var($Iterator, i$, $nc($nc(chc)->handshakeCredentials)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SSLCredentials, cd, $cast($SSLCredentials, i$->next()));
			{
				if ($instanceOf($DHKeyExchange$DHECredentials, cd)) {
					$assign(dheCredentials, $cast($DHKeyExchange$DHECredentials, cd));
					break;
				}
			}
		}
	}
	if (dheCredentials == nullptr) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "No DHE credentials negotiated for client key exchange"_s)));
	}
	$var($DHKeyExchange$DHEPossession, dhePossession, $new($DHKeyExchange$DHEPossession, dheCredentials, $($nc(chc->sslContext)->getSecureRandom())));
	$nc(chc->handshakePossessions)->add(dhePossession);
	$var($DHClientKeyExchange$DHClientKeyExchangeMessage, ckem, $new($DHClientKeyExchange$DHClientKeyExchangeMessage, chc));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced DH ClientKeyExchange handshake message"_s, $$new($ObjectArray, {$of(ckem)}));
	}
	ckem->write(chc->handshakeOutput);
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

DHClientKeyExchange$DHClientKeyExchangeProducer::DHClientKeyExchange$DHClientKeyExchangeProducer() {
}

$Class* DHClientKeyExchange$DHClientKeyExchangeProducer::load$($String* name, bool initialize) {
	$loadClass(DHClientKeyExchange$DHClientKeyExchangeProducer, name, initialize, &_DHClientKeyExchange$DHClientKeyExchangeProducer_ClassInfo_, allocate$DHClientKeyExchange$DHClientKeyExchangeProducer);
	return class$;
}

$Class* DHClientKeyExchange$DHClientKeyExchangeProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun