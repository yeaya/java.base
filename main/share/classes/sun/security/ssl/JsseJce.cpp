#include <sun/security/ssl/JsseJce.h>

#include <java/math/BigInteger.h>
#include <java/security/Key.h>
#include <java/security/KeyFactory.h>
#include <java/security/PublicKey.h>
#include <java/security/interfaces/RSAPublicKey.h>
#include <java/security/spec/KeySpec.h>
#include <java/security/spec/RSAPublicKeySpec.h>
#include <sun/security/ssl/JsseJce$EcAvailability.h>
#include <sun/security/ssl/Utilities.h>
#include <jcpp.h>

#undef ALLOW_ECC
#undef CIPHER_3DES
#undef CIPHER_AES
#undef CIPHER_AES_GCM
#undef CIPHER_DES
#undef CIPHER_RC4
#undef CIPHER_RSA_PKCS1
#undef SIGNATURE_DSA
#undef SIGNATURE_ECDSA
#undef SIGNATURE_EDDSA
#undef SIGNATURE_RAWDSA
#undef SIGNATURE_RAWECDSA
#undef SIGNATURE_RAWRSA
#undef SIGNATURE_SSLRSA

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;
using $Key = ::java::security::Key;
using $KeyFactory = ::java::security::KeyFactory;
using $PublicKey = ::java::security::PublicKey;
using $RSAKey = ::java::security::interfaces::RSAKey;
using $RSAPublicKey = ::java::security::interfaces::RSAPublicKey;
using $KeySpec = ::java::security::spec::KeySpec;
using $RSAPublicKeySpec = ::java::security::spec::RSAPublicKeySpec;
using $JsseJce$EcAvailability = ::sun::security::ssl::JsseJce$EcAvailability;
using $Utilities = ::sun::security::ssl::Utilities;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _JsseJce_FieldInfo_[] = {
	{"ALLOW_ECC", "Z", nullptr, $STATIC | $FINAL, $staticField(JsseJce, ALLOW_ECC)},
	{"CIPHER_RSA_PKCS1", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JsseJce, CIPHER_RSA_PKCS1)},
	{"CIPHER_RC4", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JsseJce, CIPHER_RC4)},
	{"CIPHER_DES", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JsseJce, CIPHER_DES)},
	{"CIPHER_3DES", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JsseJce, CIPHER_3DES)},
	{"CIPHER_AES", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JsseJce, CIPHER_AES)},
	{"CIPHER_AES_GCM", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JsseJce, CIPHER_AES_GCM)},
	{"CIPHER_CHACHA20_POLY1305", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JsseJce, CIPHER_CHACHA20_POLY1305)},
	{"SIGNATURE_DSA", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JsseJce, SIGNATURE_DSA)},
	{"SIGNATURE_ECDSA", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JsseJce, SIGNATURE_ECDSA)},
	{"SIGNATURE_EDDSA", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JsseJce, SIGNATURE_EDDSA)},
	{"SIGNATURE_RAWDSA", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JsseJce, SIGNATURE_RAWDSA)},
	{"SIGNATURE_RAWECDSA", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JsseJce, SIGNATURE_RAWECDSA)},
	{"SIGNATURE_RAWRSA", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JsseJce, SIGNATURE_RAWRSA)},
	{"SIGNATURE_SSLRSA", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JsseJce, SIGNATURE_SSLRSA)},
	{}
};

$MethodInfo _JsseJce_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(JsseJce::*)()>(&JsseJce::init$))},
	{"getRSAKeyLength", "(Ljava/security/PublicKey;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($PublicKey*)>(&JsseJce::getRSAKeyLength))},
	{"getRSAPublicKeySpec", "(Ljava/security/PublicKey;)Ljava/security/spec/RSAPublicKeySpec;", nullptr, $STATIC, $method(static_cast<$RSAPublicKeySpec*(*)($PublicKey*)>(&JsseJce::getRSAPublicKeySpec))},
	{"isEcAvailable", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&JsseJce::isEcAvailable))},
	{}
};

$InnerClassInfo _JsseJce_InnerClassesInfo_[] = {
	{"sun.security.ssl.JsseJce$EcAvailability", "sun.security.ssl.JsseJce", "EcAvailability", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JsseJce_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.JsseJce",
	"java.lang.Object",
	nullptr,
	_JsseJce_FieldInfo_,
	_JsseJce_MethodInfo_,
	nullptr,
	nullptr,
	_JsseJce_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.JsseJce$EcAvailability"
};

$Object* allocate$JsseJce($Class* clazz) {
	return $of($alloc(JsseJce));
}

bool JsseJce::ALLOW_ECC = false;
$String* JsseJce::CIPHER_RSA_PKCS1 = nullptr;
$String* JsseJce::CIPHER_RC4 = nullptr;
$String* JsseJce::CIPHER_DES = nullptr;
$String* JsseJce::CIPHER_3DES = nullptr;
$String* JsseJce::CIPHER_AES = nullptr;
$String* JsseJce::CIPHER_AES_GCM = nullptr;
$String* JsseJce::CIPHER_CHACHA20_POLY1305 = nullptr;
$String* JsseJce::SIGNATURE_DSA = nullptr;
$String* JsseJce::SIGNATURE_ECDSA = nullptr;
$String* JsseJce::SIGNATURE_EDDSA = nullptr;
$String* JsseJce::SIGNATURE_RAWDSA = nullptr;
$String* JsseJce::SIGNATURE_RAWECDSA = nullptr;
$String* JsseJce::SIGNATURE_RAWRSA = nullptr;
$String* JsseJce::SIGNATURE_SSLRSA = nullptr;

void JsseJce::init$() {
}

bool JsseJce::isEcAvailable() {
	$init(JsseJce);
	$init($JsseJce$EcAvailability);
	return $JsseJce$EcAvailability::isAvailable;
}

int32_t JsseJce::getRSAKeyLength($PublicKey* key) {
	$init(JsseJce);
	$useLocalCurrentObjectStackCache();
	$var($BigInteger, modulus, nullptr);
	if ($instanceOf($RSAPublicKey, key)) {
		$assign(modulus, $nc(($cast($RSAPublicKey, key)))->getModulus());
	} else {
		$var($RSAPublicKeySpec, spec, getRSAPublicKeySpec(key));
		$assign(modulus, $nc(spec)->getModulus());
	}
	return $nc(modulus)->bitLength();
}

$RSAPublicKeySpec* JsseJce::getRSAPublicKeySpec($PublicKey* key) {
	$init(JsseJce);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($RSAPublicKey, key)) {
		$var($RSAPublicKey, rsaKey, $cast($RSAPublicKey, key));
		$var($BigInteger, var$0, $nc(rsaKey)->getModulus());
		return $new($RSAPublicKeySpec, var$0, $(rsaKey->getPublicExponent()));
	}
	try {
		$var($KeyFactory, factory, $KeyFactory::getInstance("RSA"_s));
		$load($RSAPublicKeySpec);
		return $cast($RSAPublicKeySpec, $nc(factory)->getKeySpec(key, $RSAPublicKeySpec::class$));
	} catch ($Exception& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

void clinit$JsseJce($Class* class$) {
	$assignStatic(JsseJce::CIPHER_RSA_PKCS1, "RSA/ECB/PKCS1Padding"_s);
	$assignStatic(JsseJce::CIPHER_RC4, "RC4"_s);
	$assignStatic(JsseJce::CIPHER_DES, "DES/CBC/NoPadding"_s);
	$assignStatic(JsseJce::CIPHER_3DES, "DESede/CBC/NoPadding"_s);
	$assignStatic(JsseJce::CIPHER_AES, "AES/CBC/NoPadding"_s);
	$assignStatic(JsseJce::CIPHER_AES_GCM, "AES/GCM/NoPadding"_s);
	$assignStatic(JsseJce::CIPHER_CHACHA20_POLY1305, "ChaCha20-Poly1305"_s);
	$assignStatic(JsseJce::SIGNATURE_DSA, "DSA"_s);
	$assignStatic(JsseJce::SIGNATURE_ECDSA, "SHA1withECDSA"_s);
	$assignStatic(JsseJce::SIGNATURE_EDDSA, "EdDSA"_s);
	$assignStatic(JsseJce::SIGNATURE_RAWDSA, "RawDSA"_s);
	$assignStatic(JsseJce::SIGNATURE_RAWECDSA, "NONEwithECDSA"_s);
	$assignStatic(JsseJce::SIGNATURE_RAWRSA, "NONEwithRSA"_s);
	$assignStatic(JsseJce::SIGNATURE_SSLRSA, "MD5andSHA1withRSA"_s);
	JsseJce::ALLOW_ECC = $Utilities::getBooleanProperty("com.sun.net.ssl.enableECC"_s, true);
}

JsseJce::JsseJce() {
}

$Class* JsseJce::load$($String* name, bool initialize) {
	$loadClass(JsseJce, name, initialize, &_JsseJce_ClassInfo_, clinit$JsseJce, allocate$JsseJce);
	return class$;
}

$Class* JsseJce::class$ = nullptr;

		} // ssl
	} // security
} // sun