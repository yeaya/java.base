#include <sun/security/ssl/Finished$T13FinishedConsumer.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map.h>
#include <javax/crypto/SecretKey.h>
#include <javax/crypto/spec/IvParameterSpec.h>
#include <javax/crypto/spec/SecretKeySpec.h>
#include <javax/net/ssl/SSLEngineResult$HandshakeStatus.h>
#include <javax/net/ssl/SSLException.h>
#include <javax/net/ssl/SSLSessionContext.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/CipherSuite$HashAlg.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ContentType.h>
#include <sun/security/ssl/Finished$FinishedMessage.h>
#include <sun/security/ssl/Finished.h>
#include <sun/security/ssl/HKDF.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/InputRecord.h>
#include <sun/security/ssl/NewSessionTicket.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLCipher$SSLReadCipher.h>
#include <sun/security/ssl/SSLCipher.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLKeyDerivation.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLProducer.h>
#include <sun/security/ssl/SSLSecretDerivation.h>
#include <sun/security/ssl/SSLSessionContextImpl.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/SSLTrafficKeyDerivation.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CERTIFICATE
#undef CERTIFICATE_VERIFY
#undef CHANGE_CIPHER_SPEC
#undef FINISHED
#undef ILLEGAL_PARAMETER
#undef INTERNAL_ERROR
#undef UNEXPECTED_MESSAGE

using $SSLHandshakeArray = $Array<::sun::security::ssl::SSLHandshake>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $SecretKey = ::javax::crypto::SecretKey;
using $IvParameterSpec = ::javax::crypto::spec::IvParameterSpec;
using $SecretKeySpec = ::javax::crypto::spec::SecretKeySpec;
using $Alert = ::sun::security::ssl::Alert;
using $Authenticator = ::sun::security::ssl::Authenticator;
using $CipherSuite$HashAlg = ::sun::security::ssl::CipherSuite$HashAlg;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ContentType = ::sun::security::ssl::ContentType;
using $Finished = ::sun::security::ssl::Finished;
using $Finished$FinishedMessage = ::sun::security::ssl::Finished$FinishedMessage;
using $HKDF = ::sun::security::ssl::HKDF;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $NewSessionTicket = ::sun::security::ssl::NewSessionTicket;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLCipher$SSLReadCipher = ::sun::security::ssl::SSLCipher$SSLReadCipher;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLKeyDerivation = ::sun::security::ssl::SSLKeyDerivation;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLSecretDerivation = ::sun::security::ssl::SSLSecretDerivation;
using $SSLSessionContextImpl = ::sun::security::ssl::SSLSessionContextImpl;
using $SSLTrafficKeyDerivation = ::sun::security::ssl::SSLTrafficKeyDerivation;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void Finished$T13FinishedConsumer::init$() {
}

void Finished$T13FinishedConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$var($HandshakeContext, hc, $cast($HandshakeContext, context));
	if ($nc($nc(hc)->sslConfig)->isClientMode) {
		onConsumeFinished($cast($ClientHandshakeContext, context), message);
	} else {
		onConsumeFinished($cast($ServerHandshakeContext, context), message);
	}
}

void Finished$T13FinishedConsumer::onConsumeFinished($ClientHandshakeContext* chc, $ByteBuffer* message) {
	$useLocalObjectStack();
	if (!$nc(chc)->isResumption) {
		$init($SSLHandshake);
		bool var$0 = $nc(chc->handshakeConsumers)->containsKey($($Byte::valueOf($SSLHandshake::CERTIFICATE->id)));
		if (var$0 || chc->handshakeConsumers->containsKey($($Byte::valueOf($SSLHandshake::CERTIFICATE_VERIFY->id)))) {
			$init($Alert);
			$throw($($nc(chc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Unexpected Finished handshake message"_s)));
		}
	}
	$var($Finished$FinishedMessage, fm, $new($Finished$FinishedMessage, chc, message));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Consuming server Finished handshake message"_s, $$new($ObjectArray, {fm}));
	}
	if ($nc(chc->conContext)->secureRenegotiation) {
		$set(chc->conContext, serverVerifyData, fm->verifyData);
	}
	$init($ContentType);
	$nc(chc->conContext->consumers)->remove($($Byte::valueOf($ContentType::CHANGE_CIPHER_SPEC->id)));
	$nc(chc->handshakeHash)->update();
	$var($SSLKeyDerivation, kd, chc->handshakeKeyDerivation);
	if (kd == nullptr) {
		$init($Alert);
		$throw($(chc->conContext->fatal($Alert::INTERNAL_ERROR, "no key derivation"_s)));
	}
	$SSLTrafficKeyDerivation* kdg = $SSLTrafficKeyDerivation::valueOf(chc->negotiatedProtocol);
	if (kdg == nullptr) {
		$init($Alert);
		$throw($(chc->conContext->fatal($Alert::INTERNAL_ERROR, $$str({"Not supported key derivation: "_s, chc->negotiatedProtocol}))));
	}
	if (!chc->isResumption && $nc(chc->handshakeSession)->isRejoinable()) {
		$$sure($SSLSessionContextImpl, $nc(chc->sslContext)->engineGetClientSessionContext())->put(chc->handshakeSession);
	}
	try {
		$var($SecretKey, saltSecret, $nc(kd)->deriveKey("TlsSaltSecret"_s, nullptr));
		$CipherSuite$HashAlg* hashAlg = $nc(chc->negotiatedCipherSuite)->hashAlg;
		$var($HKDF, hkdf, $new($HKDF, $nc(hashAlg)->name$));
		$var($bytes, zeros, $new($bytes, hashAlg->hashLength));
		$var($SecretKeySpec, sharedSecret, $new($SecretKeySpec, zeros, "TlsZeroSecret"_s));
		$var($SecretKey, masterSecret, hkdf->extract(saltSecret, sharedSecret, "TlsMasterSecret"_s));
		$var($SSLKeyDerivation, secretKD, $new($SSLSecretDerivation, chc, masterSecret));
		$var($SecretKey, readSecret, secretKD->deriveKey("TlsServerAppTrafficSecret"_s, nullptr));
		$var($SSLKeyDerivation, writeKD, kdg->createKeyDerivation(chc, readSecret));
		$var($SecretKey, readKey, $nc(writeKD)->deriveKey("TlsKey"_s, nullptr));
		$var($SecretKey, readIvSecret, writeKD->deriveKey("TlsIv"_s, nullptr));
		$var($IvParameterSpec, readIv, $new($IvParameterSpec, $($nc(readIvSecret)->getEncoded())));
		$var($Authenticator, var$1, $Authenticator::valueOf(chc->negotiatedProtocol));
		$var($ProtocolVersion, var$2, chc->negotiatedProtocol);
		$var($SSLCipher$SSLReadCipher, readCipher, chc->negotiatedCipherSuite->bulkCipher->createReadCipher(var$1, var$2, readKey, readIv, $($nc(chc->sslContext)->getSecureRandom())));
		if (readCipher == nullptr) {
			$init($Alert);
			$throw($(chc->conContext->fatal($Alert::ILLEGAL_PARAMETER, $$str({"Illegal cipher suite ("_s, chc->negotiatedCipherSuite, ") and protocol version ("_s, chc->negotiatedProtocol, ")"_s}))));
		}
		$set(chc, baseReadSecret, readSecret);
		$nc(chc->conContext->inputRecord)->changeReadCiphers(readCipher);
		$set(chc, handshakeKeyDerivation, secretKD);
	} catch ($GeneralSecurityException& gse) {
		$init($Alert);
		$throw($(chc->conContext->fatal($Alert::INTERNAL_ERROR, "Failure to derive application secrets"_s, gse)));
	}
	$init($SSLHandshake);
	$nc(chc->handshakeProducers)->put($($Byte::valueOf($SSLHandshake::FINISHED->id)), $SSLHandshake::FINISHED);
	$var($SSLHandshakeArray, probableHandshakeMessages, $new($SSLHandshakeArray, {
		$SSLHandshake::CERTIFICATE,
		$SSLHandshake::CERTIFICATE_VERIFY,
		$SSLHandshake::FINISHED
	}));
	{
		$var($SSLHandshakeArray, arr$, probableHandshakeMessages);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$SSLHandshake* hs = arr$->get(i$);
			{
				$var($HandshakeProducer, handshakeProducer, $cast($HandshakeProducer, chc->handshakeProducers->remove($($Byte::valueOf($nc(hs)->id)))));
				if (handshakeProducer != nullptr) {
					handshakeProducer->produce(chc, nullptr);
				}
			}
		}
	}
}

void Finished$T13FinishedConsumer::onConsumeFinished($ServerHandshakeContext* shc, $ByteBuffer* message) {
	$useLocalObjectStack();
	if (!$nc(shc)->isResumption) {
		$init($SSLHandshake);
		bool var$0 = $nc(shc->handshakeConsumers)->containsKey($($Byte::valueOf($SSLHandshake::CERTIFICATE->id)));
		if (var$0 || shc->handshakeConsumers->containsKey($($Byte::valueOf($SSLHandshake::CERTIFICATE_VERIFY->id)))) {
			$init($Alert);
			$throw($($nc(shc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Unexpected Finished handshake message"_s)));
		}
	}
	$var($Finished$FinishedMessage, fm, $new($Finished$FinishedMessage, shc, message));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Consuming client Finished handshake message"_s, $$new($ObjectArray, {fm}));
	}
	if ($nc(shc->conContext)->secureRenegotiation) {
		$set(shc->conContext, clientVerifyData, fm->verifyData);
	}
	$var($SSLKeyDerivation, kd, shc->handshakeKeyDerivation);
	if (kd == nullptr) {
		$init($Alert);
		$throw($(shc->conContext->fatal($Alert::INTERNAL_ERROR, "no key derivation"_s)));
	}
	$SSLTrafficKeyDerivation* kdg = $SSLTrafficKeyDerivation::valueOf(shc->negotiatedProtocol);
	if (kdg == nullptr) {
		$init($Alert);
		$throw($(shc->conContext->fatal($Alert::INTERNAL_ERROR, $$str({"Not supported key derivation: "_s, shc->negotiatedProtocol}))));
	}
	try {
		$var($SecretKey, readSecret, $nc(kd)->deriveKey("TlsClientAppTrafficSecret"_s, nullptr));
		$var($SSLKeyDerivation, readKD, kdg->createKeyDerivation(shc, readSecret));
		$var($SecretKey, readKey, $nc(readKD)->deriveKey("TlsKey"_s, nullptr));
		$var($SecretKey, readIvSecret, readKD->deriveKey("TlsIv"_s, nullptr));
		$var($IvParameterSpec, readIv, $new($IvParameterSpec, $($nc(readIvSecret)->getEncoded())));
		$var($Authenticator, var$1, $Authenticator::valueOf(shc->negotiatedProtocol));
		$var($ProtocolVersion, var$2, shc->negotiatedProtocol);
		$var($SSLCipher$SSLReadCipher, readCipher, $nc(shc->negotiatedCipherSuite)->bulkCipher->createReadCipher(var$1, var$2, readKey, readIv, $($nc(shc->sslContext)->getSecureRandom())));
		if (readCipher == nullptr) {
			$init($Alert);
			$throw($(shc->conContext->fatal($Alert::ILLEGAL_PARAMETER, $$str({"Illegal cipher suite ("_s, shc->negotiatedCipherSuite, ") and protocol version ("_s, shc->negotiatedProtocol, ")"_s}))));
		}
		$set(shc, baseReadSecret, readSecret);
		$nc(shc->conContext->inputRecord)->changeReadCiphers(readCipher);
		$nc(shc->handshakeHash)->update();
		$var($SSLSecretDerivation, sd, $cast($SSLSecretDerivation, kd)->forContext(shc));
		$var($SecretKey, resumptionMasterSecret, $nc(sd)->deriveKey("TlsResumptionMasterSecret"_s, nullptr));
		$nc(shc->handshakeSession)->setResumptionMasterSecret(resumptionMasterSecret);
	} catch ($GeneralSecurityException& gse) {
		$init($Alert);
		$throw($(shc->conContext->fatal($Alert::INTERNAL_ERROR, "Failure to derive application secrets"_s, gse)));
	}
	$set(shc->conContext, conSession, $nc(shc->handshakeSession)->finish());
	$set(shc->conContext, protocolVersion, shc->negotiatedProtocol);
	shc->handshakeFinished = true;
	if (!$nc(shc->sslContext)->isDTLS()) {
		shc->conContext->finishHandshake();
	}
	$Finished::recordEvent(shc->conContext->conSession);
	$init($NewSessionTicket);
	$nc($NewSessionTicket::t13PosthandshakeProducer)->produce(shc);
}

Finished$T13FinishedConsumer::Finished$T13FinishedConsumer() {
}

$Class* Finished$T13FinishedConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Finished$T13FinishedConsumer, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(Finished$T13FinishedConsumer, consume, void, $ConnectionContext*, $ByteBuffer*), "java.io.IOException"},
		{"onConsumeFinished", "(Lsun/security/ssl/ClientHandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(Finished$T13FinishedConsumer, onConsumeFinished, void, $ClientHandshakeContext*, $ByteBuffer*), "java.io.IOException"},
		{"onConsumeFinished", "(Lsun/security/ssl/ServerHandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(Finished$T13FinishedConsumer, onConsumeFinished, void, $ServerHandshakeContext*, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.Finished$T13FinishedConsumer", "sun.security.ssl.Finished", "T13FinishedConsumer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.Finished$T13FinishedConsumer",
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
		"sun.security.ssl.Finished"
	};
	$loadClass(Finished$T13FinishedConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Finished$T13FinishedConsumer);
	});
	return class$;
}

$Class* Finished$T13FinishedConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun