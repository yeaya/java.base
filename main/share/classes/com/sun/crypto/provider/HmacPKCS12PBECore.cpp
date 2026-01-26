#include <com/sun/crypto/provider/HmacPKCS12PBECore.h>

#include <com/sun/crypto/provider/HmacCore.h>
#include <com/sun/crypto/provider/PKCS12PBECipherCore.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/Key.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Arrays.h>
#include <javax/crypto/SecretKey.h>
#include <javax/crypto/interfaces/PBEKey.h>
#include <javax/crypto/spec/PBEParameterSpec.h>
#include <javax/crypto/spec/SecretKeySpec.h>
#include <jcpp.h>

#undef MAC_KEY

using $HmacCore = ::com::sun::crypto::provider::HmacCore;
using $PKCS12PBECipherCore = ::com::sun::crypto::provider::PKCS12PBECipherCore;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $Key = ::java::security::Key;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Arrays = ::java::util::Arrays;
using $SecretKey = ::javax::crypto::SecretKey;
using $PBEKey = ::javax::crypto::interfaces::PBEKey;
using $PBEParameterSpec = ::javax::crypto::spec::PBEParameterSpec;
using $SecretKeySpec = ::javax::crypto::spec::SecretKeySpec;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _HmacPKCS12PBECore_FieldInfo_[] = {
	{"algorithm", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(HmacPKCS12PBECore, algorithm)},
	{"bl", "I", nullptr, $PRIVATE | $FINAL, $field(HmacPKCS12PBECore, bl)},
	{}
};

$MethodInfo _HmacPKCS12PBECore_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(HmacPKCS12PBECore, init$, void, $String*, int32_t), "java.security.NoSuchAlgorithmException"},
	{"engineInit", "(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED, $virtualMethod(HmacPKCS12PBECore, engineInit, void, $Key*, $AlgorithmParameterSpec*), "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
	{}
};

$InnerClassInfo _HmacPKCS12PBECore_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256", "com.sun.crypto.provider.HmacPKCS12PBECore", "HmacPKCS12PBE_SHA512_256", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_224", "com.sun.crypto.provider.HmacPKCS12PBECore", "HmacPKCS12PBE_SHA512_224", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA512", "com.sun.crypto.provider.HmacPKCS12PBECore", "HmacPKCS12PBE_SHA512", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA384", "com.sun.crypto.provider.HmacPKCS12PBECore", "HmacPKCS12PBE_SHA384", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA256", "com.sun.crypto.provider.HmacPKCS12PBECore", "HmacPKCS12PBE_SHA256", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA224", "com.sun.crypto.provider.HmacPKCS12PBECore", "HmacPKCS12PBE_SHA224", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA1", "com.sun.crypto.provider.HmacPKCS12PBECore", "HmacPKCS12PBE_SHA1", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _HmacPKCS12PBECore_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.crypto.provider.HmacPKCS12PBECore",
	"com.sun.crypto.provider.HmacCore",
	nullptr,
	_HmacPKCS12PBECore_FieldInfo_,
	_HmacPKCS12PBECore_MethodInfo_,
	nullptr,
	nullptr,
	_HmacPKCS12PBECore_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256,com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_224,com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA512,com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA384,com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA256,com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA224,com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA1"
};

$Object* allocate$HmacPKCS12PBECore($Class* clazz) {
	return $of($alloc(HmacPKCS12PBECore));
}

void HmacPKCS12PBECore::init$($String* algorithm, int32_t bl) {
	$HmacCore::init$(algorithm, bl);
	$set(this, algorithm, algorithm);
	this->bl = bl;
}

void HmacPKCS12PBECore::engineInit($Key* key, $AlgorithmParameterSpec* params) {
	$useLocalCurrentObjectStackCache();
	$var($chars, passwdChars, nullptr);
	$var($bytes, salt, nullptr);
	int32_t iCount = 0;
	if ($instanceOf($PBEKey, key)) {
		$var($PBEKey, pbeKey, $cast($PBEKey, key));
		$assign(passwdChars, $nc(pbeKey)->getPassword());
		$assign(salt, pbeKey->getSalt());
		iCount = pbeKey->getIterationCount();
	} else if ($instanceOf($SecretKey, key)) {
		$var($bytes, passwdBytes, nullptr);
		bool var$0 = !($nc($($nc(key)->getAlgorithm()))->regionMatches(true, 0, "PBE"_s, 0, 3));
		if (var$0 || ($assign(passwdBytes, $nc(key)->getEncoded())) == nullptr) {
			$throwNew($InvalidKeyException, "Missing password"_s);
		}
		$assign(passwdChars, $new($chars, $nc(passwdBytes)->length));
		for (int32_t i = 0; i < passwdChars->length; ++i) {
			passwdChars->set(i, (char16_t)((int32_t)(passwdBytes->get(i) & (uint32_t)127)));
		}
		$Arrays::fill(passwdBytes, (int8_t)0);
	} else {
		$throwNew($InvalidKeyException, "SecretKey of PBE type required"_s);
	}
	$var($bytes, derivedKey, nullptr);
	{
		$var($Throwable, var$1, nullptr);
		try {
			if (params == nullptr) {
				if ((salt == nullptr) || (iCount == 0)) {
					$throwNew($InvalidAlgorithmParameterException, "PBEParameterSpec required for salt and iteration count"_s);
				}
			} else if (!($instanceOf($PBEParameterSpec, params))) {
				$throwNew($InvalidAlgorithmParameterException, "PBEParameterSpec type required"_s);
			} else {
				$var($PBEParameterSpec, pbeParams, $cast($PBEParameterSpec, params));
				if (salt != nullptr) {
					if (!$Arrays::equals(salt, $($nc(pbeParams)->getSalt()))) {
						$throwNew($InvalidAlgorithmParameterException, "Inconsistent value of salt between key and params"_s);
					}
				} else {
					$assign(salt, $nc(pbeParams)->getSalt());
				}
				if (iCount != 0) {
					if (iCount != $nc(pbeParams)->getIterationCount()) {
						$throwNew($InvalidAlgorithmParameterException, "Different iteration count between key and params"_s);
					}
				} else {
					iCount = $nc(pbeParams)->getIterationCount();
				}
			}
			if ($nc(salt)->length < 8) {
				$throwNew($InvalidAlgorithmParameterException, "Salt must be at least 8 bytes long"_s);
			}
			if (iCount <= 0) {
				$throwNew($InvalidAlgorithmParameterException, "IterationCount must be a positive number"_s);
			}
			$assign(derivedKey, $PKCS12PBECipherCore::derive(passwdChars, salt, iCount, engineGetMacLength(), $PKCS12PBECipherCore::MAC_KEY, this->algorithm, this->bl));
		} catch ($Throwable& var$2) {
			$assign(var$1, var$2);
		} /*finally*/ {
			$Arrays::fill(passwdChars, u'\0');
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
	}
	$var($SecretKey, cipherKey, $new($SecretKeySpec, derivedKey, "HmacSHA1"_s));
	$HmacCore::engineInit(cipherKey, nullptr);
}

HmacPKCS12PBECore::HmacPKCS12PBECore() {
}

$Class* HmacPKCS12PBECore::load$($String* name, bool initialize) {
	$loadClass(HmacPKCS12PBECore, name, initialize, &_HmacPKCS12PBECore_ClassInfo_, allocate$HmacPKCS12PBECore);
	return class$;
}

$Class* HmacPKCS12PBECore::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com