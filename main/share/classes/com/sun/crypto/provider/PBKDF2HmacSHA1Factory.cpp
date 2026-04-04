#include <com/sun/crypto/provider/PBKDF2HmacSHA1Factory.h>
#include <com/sun/crypto/provider/PBKDF2KeyImpl.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/spec/InvalidKeySpecException.h>
#include <java/security/spec/KeySpec.h>
#include <java/util/Arrays.h>
#include <javax/crypto/SecretKey.h>
#include <javax/crypto/SecretKeyFactorySpi.h>
#include <javax/crypto/interfaces/PBEKey.h>
#include <javax/crypto/spec/PBEKeySpec.h>
#include <jcpp.h>

using $PBKDF2KeyImpl = ::com::sun::crypto::provider::PBKDF2KeyImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $InvalidKeySpecException = ::java::security::spec::InvalidKeySpecException;
using $KeySpec = ::java::security::spec::KeySpec;
using $Arrays = ::java::util::Arrays;
using $SecretKey = ::javax::crypto::SecretKey;
using $SecretKeyFactorySpi = ::javax::crypto::SecretKeyFactorySpi;
using $PBEKey = ::javax::crypto::interfaces::PBEKey;
using $PBEKeySpec = ::javax::crypto::spec::PBEKeySpec;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void PBKDF2HmacSHA1Factory::init$() {
	$SecretKeyFactorySpi::init$();
}

$SecretKey* PBKDF2HmacSHA1Factory::engineGenerateSecret($KeySpec* keySpec) {
	if (!($instanceOf($PBEKeySpec, keySpec))) {
		$throwNew($InvalidKeySpecException, "Invalid key spec"_s);
	}
	$var($PBEKeySpec, ks, $cast($PBEKeySpec, keySpec));
	return $new($PBKDF2KeyImpl, ks, "HmacSHA1"_s);
}

$KeySpec* PBKDF2HmacSHA1Factory::engineGetKeySpec($SecretKey* key, $Class* keySpecCl) {
	$useLocalObjectStack();
	if ($instanceOf($PBEKey, key)) {
		$load($PBEKeySpec);
		if ((keySpecCl != nullptr) && $PBEKeySpec::class$->isAssignableFrom(keySpecCl)) {
			$var($PBEKey, pKey, $cast($PBEKey, key));
			$var($chars, passwd, pKey->getPassword());
			$var($bytes, encoded, pKey->getEncoded());
			$var($Throwable, var$0, nullptr);
			$var($KeySpec, var$2, nullptr);
			bool return$1 = false;
			try {
				$var($bytes, var$3, pKey->getSalt());
				$assign(var$2, $new($PBEKeySpec, passwd, var$3, pKey->getIterationCount(), $nc(encoded)->length * 8));
				return$1 = true;
				goto $finally;
			} catch ($Throwable& var$4) {
				$assign(var$0, var$4);
			} $finally: {
				if (passwd != nullptr) {
					$Arrays::fill(passwd, (char16_t)0);
				}
				$Arrays::fill(encoded, (int8_t)0);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		} else {
			$throwNew($InvalidKeySpecException, "Invalid key spec"_s);
		}
	} else {
		$throwNew($InvalidKeySpecException, "Invalid key format/algorithm"_s);
	}
	$shouldNotReachHere();
}

$SecretKey* PBKDF2HmacSHA1Factory::engineTranslateKey($SecretKey* key) {
	$useLocalObjectStack();
	bool var$0 = (key != nullptr) && ($$nc(key->getAlgorithm())->equalsIgnoreCase("PBKDF2WithHmacSHA1"_s));
	if (var$0 && ($$nc(key->getFormat())->equalsIgnoreCase("RAW"_s))) {
		if ($instanceOf($PBKDF2KeyImpl, key)) {
			return key;
		}
		if ($instanceOf($PBEKey, key)) {
			$var($PBEKey, pKey, $cast($PBEKey, key));
			$var($chars, password, pKey->getPassword());
			$var($bytes, encoding, pKey->getEncoded());
			$var($bytes, var$1, pKey->getSalt());
			$var($PBEKeySpec, spec, $new($PBEKeySpec, password, var$1, pKey->getIterationCount(), $nc(encoding)->length * 8));
			$var($Throwable, var$2, nullptr);
			$var($SecretKey, var$4, nullptr);
			bool return$3 = false;
			try {
				try {
					$assign(var$4, $new($PBKDF2KeyImpl, spec, "HmacSHA1"_s));
					return$3 = true;
					goto $finally;
				} catch ($InvalidKeySpecException& re) {
					$var($InvalidKeyException, ike, $new($InvalidKeyException, "Invalid key component(s)"_s));
					ike->initCause(re);
					$throw(ike);
				}
			} catch ($Throwable& var$5) {
				$assign(var$2, var$5);
			} $finally: {
				if (password != nullptr) {
					$Arrays::fill(password, (char16_t)0);
					spec->clearPassword();
				}
				$Arrays::fill(encoding, (int8_t)0);
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
			if (return$3) {
				return var$4;
			}
		}
	}
	$throwNew($InvalidKeyException, "Invalid key format/algorithm"_s);
	$shouldNotReachHere();
}

PBKDF2HmacSHA1Factory::PBKDF2HmacSHA1Factory() {
}

$Class* PBKDF2HmacSHA1Factory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PBKDF2HmacSHA1Factory, init$, void)},
		{"engineGenerateSecret", "(Ljava/security/spec/KeySpec;)Ljavax/crypto/SecretKey;", nullptr, $PROTECTED, $virtualMethod(PBKDF2HmacSHA1Factory, engineGenerateSecret, $SecretKey*, $KeySpec*), "java.security.spec.InvalidKeySpecException"},
		{"engineGetKeySpec", "(Ljavax/crypto/SecretKey;Ljava/lang/Class;)Ljava/security/spec/KeySpec;", "(Ljavax/crypto/SecretKey;Ljava/lang/Class<*>;)Ljava/security/spec/KeySpec;", $PROTECTED, $virtualMethod(PBKDF2HmacSHA1Factory, engineGetKeySpec, $KeySpec*, $SecretKey*, $Class*), "java.security.spec.InvalidKeySpecException"},
		{"engineTranslateKey", "(Ljavax/crypto/SecretKey;)Ljavax/crypto/SecretKey;", nullptr, $PROTECTED, $virtualMethod(PBKDF2HmacSHA1Factory, engineTranslateKey, $SecretKey*, $SecretKey*), "java.security.InvalidKeyException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.PBKDF2HmacSHA1Factory",
		"javax.crypto.SecretKeyFactorySpi",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PBKDF2HmacSHA1Factory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PBKDF2HmacSHA1Factory);
	});
	return class$;
}

$Class* PBKDF2HmacSHA1Factory::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com