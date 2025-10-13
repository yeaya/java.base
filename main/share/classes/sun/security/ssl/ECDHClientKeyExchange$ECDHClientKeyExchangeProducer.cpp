#include <sun/security/ssl/ECDHClientKeyExchange$ECDHClientKeyExchangeProducer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/PublicKey.h>
#include <java/security/SecureRandom.h>
#include <java/security/interfaces/ECPublicKey.h>
#include <java/security/interfaces/XECPublicKey.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/ECParameterSpec.h>
#include <java/security/spec/NamedParameterSpec.h>
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
#include <sun/security/ssl/X509Authentication$X509Credentials.h>
#include <jcpp.h>

#undef ILLEGAL_PARAMETER
#undef INTERNAL_ERROR

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Key = ::java::security::Key;
using $PublicKey = ::java::security::PublicKey;
using $SecureRandom = ::java::security::SecureRandom;
using $ECKey = ::java::security::interfaces::ECKey;
using $ECPublicKey = ::java::security::interfaces::ECPublicKey;
using $XECKey = ::java::security::interfaces::XECKey;
using $XECPublicKey = ::java::security::interfaces::XECPublicKey;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $ECParameterSpec = ::java::security::spec::ECParameterSpec;
using $NamedParameterSpec = ::java::security::spec::NamedParameterSpec;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $SecretKey = ::javax::crypto::SecretKey;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $CipherSuite$KeyExchange = ::sun::security::ssl::CipherSuite$KeyExchange;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ECDHClientKeyExchange = ::sun::security::ssl::ECDHClientKeyExchange;
using $ECDHClientKeyExchange$ECDHClientKeyExchangeMessage = ::sun::security::ssl::ECDHClientKeyExchange$ECDHClientKeyExchangeMessage;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
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
using $X509Authentication$X509Credentials = ::sun::security::ssl::X509Authentication$X509Credentials;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ECDHClientKeyExchange$ECDHClientKeyExchangeProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ECDHClientKeyExchange$ECDHClientKeyExchangeProducer::*)()>(&ECDHClientKeyExchange$ECDHClientKeyExchangeProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ECDHClientKeyExchange$ECDHClientKeyExchangeProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ECDHClientKeyExchange$ECDHClientKeyExchangeProducer", "sun.security.ssl.ECDHClientKeyExchange", "ECDHClientKeyExchangeProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ECDHClientKeyExchange$ECDHClientKeyExchangeProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ECDHClientKeyExchange$ECDHClientKeyExchangeProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_ECDHClientKeyExchange$ECDHClientKeyExchangeProducer_MethodInfo_,
	nullptr,
	nullptr,
	_ECDHClientKeyExchange$ECDHClientKeyExchangeProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ECDHClientKeyExchange"
};

$Object* allocate$ECDHClientKeyExchange$ECDHClientKeyExchangeProducer($Class* clazz) {
	return $of($alloc(ECDHClientKeyExchange$ECDHClientKeyExchangeProducer));
}

void ECDHClientKeyExchange$ECDHClientKeyExchangeProducer::init$() {
}

$bytes* ECDHClientKeyExchange$ECDHClientKeyExchangeProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$var($X509Authentication$X509Credentials, x509Credentials, nullptr);
	{
		$var($Iterator, i$, $nc($nc(chc)->handshakeCredentials)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SSLCredentials, credential, $cast($SSLCredentials, i$->next()));
			{
				if ($instanceOf($X509Authentication$X509Credentials, credential)) {
					$assign(x509Credentials, $cast($X509Authentication$X509Credentials, credential));
					break;
				}
			}
		}
	}
	if (x509Credentials == nullptr) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::INTERNAL_ERROR, "No server certificate for ECDH client key exchange"_s)));
	}
	$var($PublicKey, publicKey, $nc(x509Credentials)->popPublicKey);
	$NamedGroup* namedGroup = nullptr;
	$var($String, algorithm, $nc(publicKey)->getAlgorithm());
	if ($nc(algorithm)->equals("EC"_s)) {
		$var($ECParameterSpec, params, $nc(($cast($ECPublicKey, publicKey)))->getParams());
		namedGroup = $NamedGroup::valueOf(params);
	} else if (algorithm->equals("XDH"_s)) {
		$var($AlgorithmParameterSpec, params, $nc(($cast($XECPublicKey, publicKey)))->getParams());
		if ($instanceOf($NamedParameterSpec, params)) {
			$var($String, name, $nc(($cast($NamedParameterSpec, params)))->getName());
			namedGroup = $NamedGroup::nameOf(name);
		}
	} else {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "Not EC/XDH server certificate for ECDH client key exchange"_s)));
	}
	if (namedGroup == nullptr) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "Unsupported EC/XDH server cert for ECDH client key exchange"_s)));
	}
	$var($SSLPossession, sslPossession, $nc(namedGroup)->createPossession($($nc(chc->sslContext)->getSecureRandom())));
	$nc(chc->handshakePossessions)->add(sslPossession);
	$var($ECDHClientKeyExchange$ECDHClientKeyExchangeMessage, cke, $new($ECDHClientKeyExchange$ECDHClientKeyExchangeMessage, static_cast<$HandshakeContext*>(chc), $($nc(sslPossession)->encode())));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced ECDH ClientKeyExchange handshake message"_s, $$new($ObjectArray, {$of(cke)}));
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

ECDHClientKeyExchange$ECDHClientKeyExchangeProducer::ECDHClientKeyExchange$ECDHClientKeyExchangeProducer() {
}

$Class* ECDHClientKeyExchange$ECDHClientKeyExchangeProducer::load$($String* name, bool initialize) {
	$loadClass(ECDHClientKeyExchange$ECDHClientKeyExchangeProducer, name, initialize, &_ECDHClientKeyExchange$ECDHClientKeyExchangeProducer_ClassInfo_, allocate$ECDHClientKeyExchange$ECDHClientKeyExchangeProducer);
	return class$;
}

$Class* ECDHClientKeyExchange$ECDHClientKeyExchangeProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun