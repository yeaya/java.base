#include <sun/security/ssl/SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/ProviderException.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/KeyGenerator.h>
#include <javax/crypto/SecretKey.h>
#include <javax/crypto/spec/IvParameterSpec.h>
#include <javax/crypto/spec/SecretKeySpec.h>
#include <sun/security/internal/spec/TlsKeyMaterialParameterSpec.h>
#include <sun/security/internal/spec/TlsKeyMaterialSpec.h>
#include <sun/security/ssl/CipherSuite$HashAlg.h>
#include <sun/security/ssl/CipherSuite$MacAlg.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/CipherType.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/RandomCookie.h>
#include <sun/security/ssl/SSLCipher.h>
#include <sun/security/ssl/SSLTrafficKeyDerivation.h>
#include <jcpp.h>

#undef AEAD_CIPHER
#undef BLOCK_CIPHER
#undef DTLS10
#undef H_NONE
#undef TLS11
#undef TLS12

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $ProviderException = ::java::security::ProviderException;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $KeyGenerator = ::javax::crypto::KeyGenerator;
using $SecretKey = ::javax::crypto::SecretKey;
using $IvParameterSpec = ::javax::crypto::spec::IvParameterSpec;
using $SecretKeySpec = ::javax::crypto::spec::SecretKeySpec;
using $TlsKeyMaterialParameterSpec = ::sun::security::internal::spec::TlsKeyMaterialParameterSpec;
using $TlsKeyMaterialSpec = ::sun::security::internal::spec::TlsKeyMaterialSpec;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $CipherSuite$HashAlg = ::sun::security::ssl::CipherSuite$HashAlg;
using $CipherType = ::sun::security::ssl::CipherType;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLCipher = ::sun::security::ssl::SSLCipher;

namespace sun {
	namespace security {
		namespace ssl {

void SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation::init$($HandshakeContext* context, $SecretKey* masterSecret) {
	$useLocalObjectStack();
	$CipherSuite* cipherSuite = $nc(context)->negotiatedCipherSuite;
	$ProtocolVersion* protocolVersion = context->negotiatedProtocol;
	int32_t hashSize = $nc(cipherSuite)->macAlg->size;
	bool is_exportable = cipherSuite->exportable;
	$SSLCipher* cipher = cipherSuite->bulkCipher;
	int32_t expandedKeySize = is_exportable ? $nc(cipher)->expandedKeySize : 0;
	$var($String, keyMaterialAlg, nullptr);
	$CipherSuite$HashAlg* hashAlg = nullptr;
	int8_t majorVersion = $nc(protocolVersion)->major;
	int8_t minorVersion = protocolVersion->minor;
	if (protocolVersion->isDTLS) {
		if (protocolVersion->id == $ProtocolVersion::DTLS10->id) {
			majorVersion = $ProtocolVersion::TLS11->major;
			minorVersion = $ProtocolVersion::TLS11->minor;
			$assign(keyMaterialAlg, "SunTlsKeyMaterial"_s);
			$init($CipherSuite$HashAlg);
			hashAlg = $CipherSuite$HashAlg::H_NONE;
		} else {
			majorVersion = $ProtocolVersion::TLS12->major;
			minorVersion = $ProtocolVersion::TLS12->minor;
			$assign(keyMaterialAlg, "SunTls12KeyMaterial"_s);
			hashAlg = cipherSuite->hashAlg;
		}
	} else if (protocolVersion->id >= $ProtocolVersion::TLS12->id) {
		$assign(keyMaterialAlg, "SunTls12KeyMaterial"_s);
		hashAlg = cipherSuite->hashAlg;
	} else {
		$assign(keyMaterialAlg, "SunTlsKeyMaterial"_s);
		$init($CipherSuite$HashAlg);
		hashAlg = $CipherSuite$HashAlg::H_NONE;
	}
	int32_t ivSize = $nc(cipher)->ivSize;
	$init($CipherType);
	if (cipher->cipherType == $CipherType::AEAD_CIPHER) {
		ivSize = cipher->fixedIvSize;
	} else if (cipher->cipherType == $CipherType::BLOCK_CIPHER && protocolVersion->useTLS11PlusSpec()) {
		ivSize = 0;
	}
	$var($TlsKeyMaterialParameterSpec, spec, $new($TlsKeyMaterialParameterSpec, masterSecret, (majorVersion & 0xff), (minorVersion & 0xff), $nc(context->clientHelloRandom)->randomBytes, $nc(context->serverHelloRandom)->randomBytes, cipher->algorithm, cipher->keySize, expandedKeySize, ivSize, hashSize, $nc(hashAlg)->name$, $nc(hashAlg)->hashLength, $nc(hashAlg)->blockSize));
	try {
		$var($KeyGenerator, kg, $KeyGenerator::getInstance(keyMaterialAlg));
		$nc(kg)->init(spec);
		$set(this, keyMaterialSpec, $cast($TlsKeyMaterialSpec, kg->generateKey()));
	} catch ($GeneralSecurityException& e) {
		$throwNew($ProviderException, e);
	}
}

$SecretKey* SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation::getTrafficKey($String* algorithm) {
	$useLocalObjectStack();
	{
		$var($String, s11334$, algorithm);
		int32_t tmp11334$ = -1;
		switch ($nc(s11334$)->hashCode()) {
		case (int32_t)0x9f4be63b:
			if (s11334$->equals("clientMacKey"_s)) {
				tmp11334$ = 0;
			}
			break;
		case 0x668ea7b3:
			if (s11334$->equals("serverMacKey"_s)) {
				tmp11334$ = 1;
			}
			break;
		case (int32_t)0x9a7f2aeb:
			if (s11334$->equals("clientWriteKey"_s)) {
				tmp11334$ = 2;
			}
			break;
		case (int32_t)0x9c176e63:
			if (s11334$->equals("serverWriteKey"_s)) {
				tmp11334$ = 3;
			}
			break;
		case 0x7898bf21:
			if (s11334$->equals("clientWriteIv"_s)) {
				tmp11334$ = 4;
			}
			break;
		case (int32_t)0x99ae2ca9:
			if (s11334$->equals("serverWriteIv"_s)) {
				tmp11334$ = 5;
			}
			break;
		}
		{
			$var($IvParameterSpec, cliIvSpec, nullptr);
			$var($IvParameterSpec, srvIvSpec, nullptr);
			switch (tmp11334$) {
			case 0:
				return $nc(this->keyMaterialSpec)->getClientMacKey();
			case 1:
				return $nc(this->keyMaterialSpec)->getServerMacKey();
			case 2:
				return $nc(this->keyMaterialSpec)->getClientCipherKey();
			case 3:
				return $nc(this->keyMaterialSpec)->getServerCipherKey();
			case 4:
				$assign(cliIvSpec, $nc(this->keyMaterialSpec)->getClientIv());
				return (cliIvSpec == nullptr) ? ($SecretKey*)nullptr : $cast($SecretKey, $new($SecretKeySpec, $(cliIvSpec->getIV()), "TlsIv"_s));
			case 5:
				$assign(srvIvSpec, $nc(this->keyMaterialSpec)->getServerIv());
				return (srvIvSpec == nullptr) ? ($SecretKey*)nullptr : $cast($SecretKey, $new($SecretKeySpec, $(srvIvSpec->getIV()), "TlsIv"_s));
			}
		}
	}
	return nullptr;
}

$SecretKey* SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation::deriveKey($String* algorithm, $AlgorithmParameterSpec* params) {
	return getTrafficKey(algorithm);
}

SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation::SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation() {
}

$Class* SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"keyMaterialSpec", "Lsun/security/internal/spec/TlsKeyMaterialSpec;", nullptr, $PRIVATE | $FINAL, $field(SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation, keyMaterialSpec)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljavax/crypto/SecretKey;)V", nullptr, 0, $method(SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation, init$, void, $HandshakeContext*, $SecretKey*)},
		{"deriveKey", "(Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;)Ljavax/crypto/SecretKey;", nullptr, $PUBLIC, $virtualMethod(SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation, deriveKey, $SecretKey*, $String*, $AlgorithmParameterSpec*), "java.io.IOException"},
		{"getTrafficKey", "(Ljava/lang/String;)Ljavax/crypto/SecretKey;", nullptr, 0, $method(SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation, getTrafficKey, $SecretKey*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation", "sun.security.ssl.SSLTrafficKeyDerivation", "LegacyTrafficKeyDerivation", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation",
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
		"sun.security.ssl.SSLTrafficKeyDerivation"
	};
	$loadClass(SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation);
	});
	return class$;
}

$Class* SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation::class$ = nullptr;

		} // ssl
	} // security
} // sun