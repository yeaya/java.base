#include <sun/security/ssl/SSLMasterKeyDerivation$LegacyMasterKeyDerivation.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/ProviderException.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/KeyGenerator.h>
#include <javax/crypto/SecretKey.h>
#include <sun/security/internal/spec/TlsMasterSecretParameterSpec.h>
#include <sun/security/ssl/CipherSuite$HashAlg.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/RandomCookie.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLMasterKeyDerivation.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <jcpp.h>

#undef DTLS10
#undef H_NONE
#undef TLS11
#undef TLS12

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $ProviderException = ::java::security::ProviderException;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $KeyGenerator = ::javax::crypto::KeyGenerator;
using $SecretKey = ::javax::crypto::SecretKey;
using $TlsMasterSecretParameterSpec = ::sun::security::internal::spec::TlsMasterSecretParameterSpec;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $CipherSuite$HashAlg = ::sun::security::ssl::CipherSuite$HashAlg;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

void SSLMasterKeyDerivation$LegacyMasterKeyDerivation::init$($HandshakeContext* context, $SecretKey* preMasterSecret) {
	$set(this, context, context);
	$set(this, preMasterSecret, preMasterSecret);
}

$SecretKey* SSLMasterKeyDerivation$LegacyMasterKeyDerivation::deriveKey($String* algorithm, $AlgorithmParameterSpec* params) {
	$useLocalObjectStack();
	$CipherSuite* cipherSuite = $nc(this->context)->negotiatedCipherSuite;
	$ProtocolVersion* protocolVersion = this->context->negotiatedProtocol;
	$var($String, masterAlg, nullptr);
	$CipherSuite$HashAlg* hashAlg = nullptr;
	int8_t majorVersion = $nc(protocolVersion)->major;
	int8_t minorVersion = protocolVersion->minor;
	if (protocolVersion->isDTLS) {
		if (protocolVersion->id == $ProtocolVersion::DTLS10->id) {
			majorVersion = $ProtocolVersion::TLS11->major;
			minorVersion = $ProtocolVersion::TLS11->minor;
			$assign(masterAlg, "SunTlsMasterSecret"_s);
			$init($CipherSuite$HashAlg);
			hashAlg = $CipherSuite$HashAlg::H_NONE;
		} else {
			majorVersion = $ProtocolVersion::TLS12->major;
			minorVersion = $ProtocolVersion::TLS12->minor;
			$assign(masterAlg, "SunTls12MasterSecret"_s);
			hashAlg = $nc(cipherSuite)->hashAlg;
		}
	} else if (protocolVersion->id >= $ProtocolVersion::TLS12->id) {
		$assign(masterAlg, "SunTls12MasterSecret"_s);
		hashAlg = $nc(cipherSuite)->hashAlg;
	} else {
		$assign(masterAlg, "SunTlsMasterSecret"_s);
		$init($CipherSuite$HashAlg);
		hashAlg = $CipherSuite$HashAlg::H_NONE;
	}
	$var($TlsMasterSecretParameterSpec, spec, nullptr);
	if ($nc(this->context->handshakeSession)->useExtendedMasterSecret) {
		$assign(masterAlg, "SunTlsExtendedMasterSecret"_s);
		$nc(this->context->handshakeHash)->utilize();
		$var($bytes, sessionHash, this->context->handshakeHash->digest());
		$assign(spec, $new($TlsMasterSecretParameterSpec, this->preMasterSecret, (majorVersion & 0xff), (minorVersion & 0xff), sessionHash, $nc(hashAlg)->name$, $nc(hashAlg)->hashLength, $nc(hashAlg)->blockSize));
	} else {
		$assign(spec, $new($TlsMasterSecretParameterSpec, this->preMasterSecret, (majorVersion & 0xff), (minorVersion & 0xff), $nc(this->context->clientHelloRandom)->randomBytes, $nc(this->context->serverHelloRandom)->randomBytes, $nc(hashAlg)->name$, $nc(hashAlg)->hashLength, $nc(hashAlg)->blockSize));
	}
	try {
		$var($KeyGenerator, kg, $KeyGenerator::getInstance(masterAlg));
		$nc(kg)->init(spec);
		return kg->generateKey();
	} catch ($InvalidAlgorithmParameterException& iae) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("handshake"_s)) {
			$SSLLogger::fine("RSA master secret generation error."_s, $$new($ObjectArray, {iae}));
		}
		$throwNew($ProviderException, iae);
	} catch ($NoSuchAlgorithmException& iae) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("handshake"_s)) {
			$SSLLogger::fine("RSA master secret generation error."_s, $$new($ObjectArray, {iae}));
		}
		$throwNew($ProviderException, iae);
	}
	$shouldNotReachHere();
}

SSLMasterKeyDerivation$LegacyMasterKeyDerivation::SSLMasterKeyDerivation$LegacyMasterKeyDerivation() {
}

$Class* SSLMasterKeyDerivation$LegacyMasterKeyDerivation::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"context", "Lsun/security/ssl/HandshakeContext;", nullptr, $FINAL, $field(SSLMasterKeyDerivation$LegacyMasterKeyDerivation, context)},
		{"preMasterSecret", "Ljavax/crypto/SecretKey;", nullptr, $FINAL, $field(SSLMasterKeyDerivation$LegacyMasterKeyDerivation, preMasterSecret)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljavax/crypto/SecretKey;)V", nullptr, 0, $method(SSLMasterKeyDerivation$LegacyMasterKeyDerivation, init$, void, $HandshakeContext*, $SecretKey*)},
		{"deriveKey", "(Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;)Ljavax/crypto/SecretKey;", nullptr, $PUBLIC, $virtualMethod(SSLMasterKeyDerivation$LegacyMasterKeyDerivation, deriveKey, $SecretKey*, $String*, $AlgorithmParameterSpec*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLMasterKeyDerivation$LegacyMasterKeyDerivation", "sun.security.ssl.SSLMasterKeyDerivation", "LegacyMasterKeyDerivation", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SSLMasterKeyDerivation$LegacyMasterKeyDerivation",
		"java.lang.Object",
		"sun.security.ssl.SSLKeyDerivation",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.SSLMasterKeyDerivation"
	};
	$loadClass(SSLMasterKeyDerivation$LegacyMasterKeyDerivation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLMasterKeyDerivation$LegacyMasterKeyDerivation);
	});
	return class$;
}

$Class* SSLMasterKeyDerivation$LegacyMasterKeyDerivation::class$ = nullptr;

		} // ssl
	} // security
} // sun