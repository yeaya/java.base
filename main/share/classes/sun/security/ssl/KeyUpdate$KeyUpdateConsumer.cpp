#include <sun/security/ssl/KeyUpdate$KeyUpdateConsumer.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/SecretKey.h>
#include <javax/crypto/spec/IvParameterSpec.h>
#include <javax/net/ssl/SSLEngineResult$HandshakeStatus.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/InputRecord.h>
#include <sun/security/ssl/KeyUpdate$KeyUpdateMessage.h>
#include <sun/security/ssl/KeyUpdate$KeyUpdateRequest.h>
#include <sun/security/ssl/KeyUpdate.h>
#include <sun/security/ssl/PostHandshakeContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLCipher$SSLReadCipher.h>
#include <sun/security/ssl/SSLCipher.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLKeyDerivation.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLTrafficKeyDerivation.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef ILLEGAL_PARAMETER
#undef INTERNAL_ERROR
#undef NOTREQUESTED
#undef REQUESTED

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $SecretKey = ::javax::crypto::SecretKey;
using $IvParameterSpec = ::javax::crypto::spec::IvParameterSpec;
using $Alert = ::sun::security::ssl::Alert;
using $Authenticator = ::sun::security::ssl::Authenticator;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $KeyUpdate = ::sun::security::ssl::KeyUpdate;
using $KeyUpdate$KeyUpdateMessage = ::sun::security::ssl::KeyUpdate$KeyUpdateMessage;
using $KeyUpdate$KeyUpdateRequest = ::sun::security::ssl::KeyUpdate$KeyUpdateRequest;
using $PostHandshakeContext = ::sun::security::ssl::PostHandshakeContext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLCipher$SSLReadCipher = ::sun::security::ssl::SSLCipher$SSLReadCipher;
using $SSLKeyDerivation = ::sun::security::ssl::SSLKeyDerivation;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLTrafficKeyDerivation = ::sun::security::ssl::SSLTrafficKeyDerivation;

namespace sun {
	namespace security {
		namespace ssl {

void KeyUpdate$KeyUpdateConsumer::init$() {
}

void KeyUpdate$KeyUpdateConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$useLocalObjectStack();
	$var($PostHandshakeContext, hc, $cast($PostHandshakeContext, context));
	$var($KeyUpdate$KeyUpdateMessage, km, $new($KeyUpdate$KeyUpdateMessage, hc, message));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Consuming KeyUpdate post-handshake message"_s, $$new($ObjectArray, {km}));
	}
	$SSLTrafficKeyDerivation* kdg = $SSLTrafficKeyDerivation::valueOf($nc($nc(hc)->conContext)->protocolVersion);
	if (kdg == nullptr) {
		$init($Alert);
		$throw($(hc->conContext->fatal($Alert::INTERNAL_ERROR, $$str({"Not supported key derivation: "_s, hc->conContext->protocolVersion}))));
	}
	$var($SSLKeyDerivation, skd, kdg->createKeyDerivation(hc, $nc($nc(hc->conContext->inputRecord)->readCipher)->baseSecret));
	if (skd == nullptr) {
		$init($Alert);
		$throw($(hc->conContext->fatal($Alert::INTERNAL_ERROR, "no key derivation"_s)));
	}
	$var($SecretKey, nplus1, $nc(skd)->deriveKey("TlsUpdateNplus1"_s, nullptr));
	$var($SSLKeyDerivation, kd, kdg->createKeyDerivation(hc, nplus1));
	$var($SecretKey, key, $nc(kd)->deriveKey("TlsKey"_s, nullptr));
	$var($IvParameterSpec, ivSpec, $new($IvParameterSpec, $($$nc(kd->deriveKey("TlsIv"_s, nullptr))->getEncoded())));
	try {
		$var($Authenticator, var$0, $Authenticator::valueOf(hc->conContext->protocolVersion));
		$var($ProtocolVersion, var$1, hc->conContext->protocolVersion);
		$var($SSLCipher$SSLReadCipher, rc, $nc(hc->negotiatedCipherSuite)->bulkCipher->createReadCipher(var$0, var$1, key, ivSpec, $($nc(hc->sslContext)->getSecureRandom())));
		if (rc == nullptr) {
			$init($Alert);
			$throw($(hc->conContext->fatal($Alert::ILLEGAL_PARAMETER, $$str({"Illegal cipher suite ("_s, hc->negotiatedCipherSuite, ") and protocol version ("_s, hc->negotiatedProtocol, ")"_s}))));
		}
		$set($nc(rc), baseSecret, nplus1);
		hc->conContext->inputRecord->changeReadCiphers(rc);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::fine("KeyUpdate: read key updated"_s, $$new($ObjectArray, 0));
		}
	} catch ($GeneralSecurityException& gse) {
		$init($Alert);
		$throw($(hc->conContext->fatal($Alert::INTERNAL_ERROR, "Failure to derive read secrets"_s, gse)));
	}
	$init($KeyUpdate$KeyUpdateRequest);
	if (km->status == $KeyUpdate$KeyUpdateRequest::REQUESTED) {
		$init($KeyUpdate);
		$nc($KeyUpdate::handshakeProducer)->produce(hc, $$new($KeyUpdate$KeyUpdateMessage, hc, $KeyUpdate$KeyUpdateRequest::NOTREQUESTED));
		return;
	}
	hc->conContext->finishPostHandshake();
}

KeyUpdate$KeyUpdateConsumer::KeyUpdate$KeyUpdateConsumer() {
}

$Class* KeyUpdate$KeyUpdateConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(KeyUpdate$KeyUpdateConsumer, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(KeyUpdate$KeyUpdateConsumer, consume, void, $ConnectionContext*, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.KeyUpdate$KeyUpdateConsumer", "sun.security.ssl.KeyUpdate", "KeyUpdateConsumer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.KeyUpdate$KeyUpdateConsumer",
		"java.lang.Object",
		"sun.security.ssl.SSLConsumer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.KeyUpdate"
	};
	$loadClass(KeyUpdate$KeyUpdateConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyUpdate$KeyUpdateConsumer);
	});
	return class$;
}

$Class* KeyUpdate$KeyUpdateConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun