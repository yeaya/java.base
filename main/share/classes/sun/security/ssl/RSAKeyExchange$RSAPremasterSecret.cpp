#include <sun/security/ssl/RSAKeyExchange$RSAPremasterSecret.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/Key.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/PrivateKey.h>
#include <java/security/Provider.h>
#include <java/security/PublicKey.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/BadPaddingException.h>
#include <javax/crypto/Cipher.h>
#include <javax/crypto/KeyGenerator.h>
#include <javax/crypto/SecretKey.h>
#include <sun/security/internal/spec/TlsRsaPremasterSecretParameterSpec.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/JsseJce.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/RSAKeyExchange.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLPossession.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/util/KeyUtil.h>
#include <jcpp.h>

#undef CIPHER_RSA_PKCS1
#undef DECRYPT_MODE
#undef SECRET_KEY
#undef TLS12
#undef UNWRAP_MODE
#undef WRAP_MODE

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $Key = ::java::security::Key;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $PrivateKey = ::java::security::PrivateKey;
using $Provider = ::java::security::Provider;
using $PublicKey = ::java::security::PublicKey;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $BadPaddingException = ::javax::crypto::BadPaddingException;
using $Cipher = ::javax::crypto::Cipher;
using $KeyGenerator = ::javax::crypto::KeyGenerator;
using $SecretKey = ::javax::crypto::SecretKey;
using $TlsRsaPremasterSecretParameterSpec = ::sun::security::internal::spec::TlsRsaPremasterSecretParameterSpec;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $JsseJce = ::sun::security::ssl::JsseJce;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLPossession = ::sun::security::ssl::SSLPossession;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $KeyUtil = ::sun::security::util::KeyUtil;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _RSAKeyExchange$RSAPremasterSecret_FieldInfo_[] = {
	{"premasterSecret", "Ljavax/crypto/SecretKey;", nullptr, $FINAL, $field(RSAKeyExchange$RSAPremasterSecret, premasterSecret)},
	{}
};

$MethodInfo _RSAKeyExchange$RSAPremasterSecret_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/crypto/SecretKey;)V", nullptr, 0, $method(static_cast<void(RSAKeyExchange$RSAPremasterSecret::*)($SecretKey*)>(&RSAKeyExchange$RSAPremasterSecret::init$))},
	{"createPremasterSecret", "(Lsun/security/ssl/ClientHandshakeContext;)Lsun/security/ssl/RSAKeyExchange$RSAPremasterSecret;", nullptr, $STATIC, $method(static_cast<RSAKeyExchange$RSAPremasterSecret*(*)($ClientHandshakeContext*)>(&RSAKeyExchange$RSAPremasterSecret::createPremasterSecret)), "java.security.GeneralSecurityException"},
	{"decode", "(Lsun/security/ssl/ServerHandshakeContext;Ljava/security/PrivateKey;[B)Lsun/security/ssl/RSAKeyExchange$RSAPremasterSecret;", nullptr, $STATIC, $method(static_cast<RSAKeyExchange$RSAPremasterSecret*(*)($ServerHandshakeContext*,$PrivateKey*,$bytes*)>(&RSAKeyExchange$RSAPremasterSecret::decode)), "java.security.GeneralSecurityException"},
	{"generatePremasterSecret", "(II[BLjava/security/SecureRandom;)Ljavax/crypto/SecretKey;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$SecretKey*(*)(int32_t,int32_t,$bytes*,$SecureRandom*)>(&RSAKeyExchange$RSAPremasterSecret::generatePremasterSecret)), "java.security.GeneralSecurityException"},
	{"getEncoded", "(Ljava/security/PublicKey;Ljava/security/SecureRandom;)[B", nullptr, 0, $method(static_cast<$bytes*(RSAKeyExchange$RSAPremasterSecret::*)($PublicKey*,$SecureRandom*)>(&RSAKeyExchange$RSAPremasterSecret::getEncoded)), "java.security.GeneralSecurityException"},
	{"safeProviderName", "(Ljavax/crypto/Cipher;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($Cipher*)>(&RSAKeyExchange$RSAPremasterSecret::safeProviderName))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RSAKeyExchange$RSAPremasterSecret_InnerClassesInfo_[] = {
	{"sun.security.ssl.RSAKeyExchange$RSAPremasterSecret", "sun.security.ssl.RSAKeyExchange", "RSAPremasterSecret", $STATIC | $FINAL},
	{}
};

$ClassInfo _RSAKeyExchange$RSAPremasterSecret_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.RSAKeyExchange$RSAPremasterSecret",
	"java.lang.Object",
	"sun.security.ssl.SSLPossession,sun.security.ssl.SSLCredentials",
	_RSAKeyExchange$RSAPremasterSecret_FieldInfo_,
	_RSAKeyExchange$RSAPremasterSecret_MethodInfo_,
	nullptr,
	nullptr,
	_RSAKeyExchange$RSAPremasterSecret_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.RSAKeyExchange"
};

$Object* allocate$RSAKeyExchange$RSAPremasterSecret($Class* clazz) {
	return $of($alloc(RSAKeyExchange$RSAPremasterSecret));
}

int32_t RSAKeyExchange$RSAPremasterSecret::hashCode() {
	 return this->$SSLPossession::hashCode();
}

bool RSAKeyExchange$RSAPremasterSecret::equals(Object$* obj) {
	 return this->$SSLPossession::equals(obj);
}

$Object* RSAKeyExchange$RSAPremasterSecret::clone() {
	 return this->$SSLPossession::clone();
}

$String* RSAKeyExchange$RSAPremasterSecret::toString() {
	 return this->$SSLPossession::toString();
}

void RSAKeyExchange$RSAPremasterSecret::finalize() {
	this->$SSLPossession::finalize();
}

void RSAKeyExchange$RSAPremasterSecret::init$($SecretKey* premasterSecret) {
	$set(this, premasterSecret, premasterSecret);
}

$bytes* RSAKeyExchange$RSAPremasterSecret::getEncoded($PublicKey* publicKey, $SecureRandom* secureRandom) {
	$init($JsseJce);
	$var($Cipher, cipher, $Cipher::getInstance($JsseJce::CIPHER_RSA_PKCS1));
	$nc(cipher)->init($Cipher::WRAP_MODE, static_cast<$Key*>(publicKey), secureRandom);
	return cipher->wrap(this->premasterSecret);
}

RSAKeyExchange$RSAPremasterSecret* RSAKeyExchange$RSAPremasterSecret::createPremasterSecret($ClientHandshakeContext* chc) {
	$init(RSAKeyExchange$RSAPremasterSecret);
	$useLocalCurrentObjectStackCache();
	$var($String, algorithm, $nc($nc(chc)->negotiatedProtocol)->useTLS12PlusSpec() ? "SunTls12RsaPremasterSecret"_s : "SunTlsRsaPremasterSecret"_s);
	$var($KeyGenerator, kg, $KeyGenerator::getInstance(algorithm));
	$var($TlsRsaPremasterSecretParameterSpec, spec, $new($TlsRsaPremasterSecretParameterSpec, $nc(chc)->clientHelloVersion, $nc(chc->negotiatedProtocol)->id));
	$nc(kg)->init(static_cast<$AlgorithmParameterSpec*>(spec), $($nc($nc(chc)->sslContext)->getSecureRandom()));
	return $new(RSAKeyExchange$RSAPremasterSecret, $(kg->generateKey()));
}

RSAKeyExchange$RSAPremasterSecret* RSAKeyExchange$RSAPremasterSecret::decode($ServerHandshakeContext* shc, $PrivateKey* privateKey, $bytes* encrypted) {
	$init(RSAKeyExchange$RSAPremasterSecret);
	$useLocalCurrentObjectStackCache();
	$var($bytes, encoded, nullptr);
	bool needFailover = false;
	$init($JsseJce);
	$var($Cipher, cipher, $Cipher::getInstance($JsseJce::CIPHER_RSA_PKCS1));
	try {
		$var($Key, var$0, static_cast<$Key*>(privateKey));
		$var($AlgorithmParameterSpec, var$1, static_cast<$AlgorithmParameterSpec*>($new($TlsRsaPremasterSecretParameterSpec, $nc(shc)->clientHelloVersion, $nc(shc->negotiatedProtocol)->id)));
		$nc(cipher)->init($Cipher::UNWRAP_MODE, var$0, var$1, $($nc($nc(shc)->sslContext)->getSecureRandom()));
		needFailover = !$KeyUtil::isOracleJCEProvider($($nc($(cipher->getProvider()))->getName()));
	} catch ($InvalidKeyException& iue) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$var($String, var$2, $$str({"The Cipher provider "_s, $(safeProviderName(cipher)), " caused exception: "_s}));
			$SSLLogger::warning($$concat(var$2, $(iue->getMessage())), $$new($ObjectArray, 0));
		}
		needFailover = true;
	} catch ($UnsupportedOperationException& iue) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$var($String, var$3, $$str({"The Cipher provider "_s, $(safeProviderName(cipher)), " caused exception: "_s}));
			$SSLLogger::warning($$concat(var$3, $(iue->getMessage())), $$new($ObjectArray, 0));
		}
		needFailover = true;
	}
	$var($SecretKey, preMaster, nullptr);
	if (needFailover) {
		$assign(cipher, $Cipher::getInstance($JsseJce::CIPHER_RSA_PKCS1));
		$nc(cipher)->init($Cipher::DECRYPT_MODE, static_cast<$Key*>(privateKey));
		bool failed = false;
		try {
			$assign(encoded, cipher->doFinal(encrypted));
		} catch ($BadPaddingException& bpe) {
			failed = true;
		}
		$assign(encoded, $KeyUtil::checkTlsPreMasterSecretKey($nc(shc)->clientHelloVersion, $nc(shc->negotiatedProtocol)->id, $($nc(shc->sslContext)->getSecureRandom()), encoded, failed));
		$assign(preMaster, generatePremasterSecret($nc(shc)->clientHelloVersion, $nc(shc->negotiatedProtocol)->id, encoded, $($nc(shc->sslContext)->getSecureRandom())));
	} else {
		$assign(preMaster, $cast($SecretKey, $nc(cipher)->unwrap(encrypted, "TlsRsaPremasterSecret"_s, $Cipher::SECRET_KEY)));
	}
	return $new(RSAKeyExchange$RSAPremasterSecret, preMaster);
}

$String* RSAKeyExchange$RSAPremasterSecret::safeProviderName($Cipher* cipher) {
	$init(RSAKeyExchange$RSAPremasterSecret);
	$useLocalCurrentObjectStackCache();
	try {
		return $nc($($nc(cipher)->getProvider()))->toString();
	} catch ($Exception& e) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Retrieving The Cipher provider name caused exception "_s, $$new($ObjectArray, {$of(e)}));
		}
	}
	try {
		return $str({$($nc(cipher)->toString()), " (provider name not available)"_s});
	} catch ($Exception& e) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Retrieving The Cipher name caused exception "_s, $$new($ObjectArray, {$of(e)}));
		}
	}
	return "(cipher/provider names not available)"_s;
}

$SecretKey* RSAKeyExchange$RSAPremasterSecret::generatePremasterSecret(int32_t clientVersion, int32_t serverVersion, $bytes* encodedSecret, $SecureRandom* generator) {
	$init(RSAKeyExchange$RSAPremasterSecret);
	$useLocalCurrentObjectStackCache();
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Generating a premaster secret"_s, $$new($ObjectArray, 0));
	}
	try {
		$init($ProtocolVersion);
		$var($String, s, (clientVersion >= $ProtocolVersion::TLS12->id) ? "SunTls12RsaPremasterSecret"_s : "SunTlsRsaPremasterSecret"_s);
		$var($KeyGenerator, kg, $KeyGenerator::getInstance(s));
		$nc(kg)->init(static_cast<$AlgorithmParameterSpec*>($$new($TlsRsaPremasterSecretParameterSpec, clientVersion, serverVersion, encodedSecret)), generator);
		return kg->generateKey();
	} catch ($InvalidAlgorithmParameterException& iae) {
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("RSA premaster secret generation error:"_s, $$new($ObjectArray, 0));
			iae->printStackTrace($System::out);
		}
		$throwNew($GeneralSecurityException, "Could not generate premaster secret"_s, iae);
	} catch ($NoSuchAlgorithmException& iae) {
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("RSA premaster secret generation error:"_s, $$new($ObjectArray, 0));
			iae->printStackTrace($System::out);
		}
		$throwNew($GeneralSecurityException, "Could not generate premaster secret"_s, iae);
	}
	$shouldNotReachHere();
}

RSAKeyExchange$RSAPremasterSecret::RSAKeyExchange$RSAPremasterSecret() {
}

$Class* RSAKeyExchange$RSAPremasterSecret::load$($String* name, bool initialize) {
	$loadClass(RSAKeyExchange$RSAPremasterSecret, name, initialize, &_RSAKeyExchange$RSAPremasterSecret_ClassInfo_, allocate$RSAKeyExchange$RSAPremasterSecret);
	return class$;
}

$Class* RSAKeyExchange$RSAPremasterSecret::class$ = nullptr;

		} // ssl
	} // security
} // sun