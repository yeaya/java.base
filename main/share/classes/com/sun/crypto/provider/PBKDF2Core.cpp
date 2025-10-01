#include <com/sun/crypto/provider/PBKDF2Core.h>

#include <com/sun/crypto/provider/PBKDF2KeyImpl.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
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
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $Key = ::java::security::Key;
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

$FieldInfo _PBKDF2Core_FieldInfo_[] = {
	{"prfAlgo", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(PBKDF2Core, prfAlgo)},
	{}
};

$MethodInfo _PBKDF2Core_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(PBKDF2Core::*)($String*)>(&PBKDF2Core::init$))},
	{"engineGenerateSecret", "(Ljava/security/spec/KeySpec;)Ljavax/crypto/SecretKey;", nullptr, $PROTECTED, nullptr, "java.security.spec.InvalidKeySpecException"},
	{"engineGetKeySpec", "(Ljavax/crypto/SecretKey;Ljava/lang/Class;)Ljava/security/spec/KeySpec;", "(Ljavax/crypto/SecretKey;Ljava/lang/Class<*>;)Ljava/security/spec/KeySpec;", $PROTECTED, nullptr, "java.security.spec.InvalidKeySpecException"},
	{"engineTranslateKey", "(Ljavax/crypto/SecretKey;)Ljavax/crypto/SecretKey;", nullptr, $PROTECTED, nullptr, "java.security.InvalidKeyException"},
	{}
};

$InnerClassInfo _PBKDF2Core_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.PBKDF2Core$HmacSHA512", "com.sun.crypto.provider.PBKDF2Core", "HmacSHA512", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBKDF2Core$HmacSHA384", "com.sun.crypto.provider.PBKDF2Core", "HmacSHA384", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBKDF2Core$HmacSHA256", "com.sun.crypto.provider.PBKDF2Core", "HmacSHA256", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBKDF2Core$HmacSHA224", "com.sun.crypto.provider.PBKDF2Core", "HmacSHA224", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBKDF2Core$HmacSHA1", "com.sun.crypto.provider.PBKDF2Core", "HmacSHA1", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PBKDF2Core_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.crypto.provider.PBKDF2Core",
	"javax.crypto.SecretKeyFactorySpi",
	nullptr,
	_PBKDF2Core_FieldInfo_,
	_PBKDF2Core_MethodInfo_,
	nullptr,
	nullptr,
	_PBKDF2Core_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.PBKDF2Core$HmacSHA512,com.sun.crypto.provider.PBKDF2Core$HmacSHA384,com.sun.crypto.provider.PBKDF2Core$HmacSHA256,com.sun.crypto.provider.PBKDF2Core$HmacSHA224,com.sun.crypto.provider.PBKDF2Core$HmacSHA1"
};

$Object* allocate$PBKDF2Core($Class* clazz) {
	return $of($alloc(PBKDF2Core));
}

void PBKDF2Core::init$($String* prfAlgo) {
	$SecretKeyFactorySpi::init$();
	$set(this, prfAlgo, prfAlgo);
}

$SecretKey* PBKDF2Core::engineGenerateSecret($KeySpec* keySpec) {
	if (!($instanceOf($PBEKeySpec, keySpec))) {
		$throwNew($InvalidKeySpecException, "Invalid key spec"_s);
	}
	$var($PBEKeySpec, ks, $cast($PBEKeySpec, keySpec));
	return $new($PBKDF2KeyImpl, ks, this->prfAlgo);
}

$KeySpec* PBKDF2Core::engineGetKeySpec($SecretKey* key, $Class* keySpecCl) {
	if ($instanceOf($PBEKey, key)) {
		$load($PBEKeySpec);
		if ((keySpecCl != nullptr) && $PBEKeySpec::class$->isAssignableFrom(keySpecCl)) {
			$var($PBEKey, pKey, $cast($PBEKey, key));
			$var($chars, passwd, $nc(pKey)->getPassword());
			$var($bytes, encoded, pKey->getEncoded());
			{
				$var($Throwable, var$0, nullptr);
				$var($KeySpec, var$2, nullptr);
				bool return$1 = false;
				try {
					$var($chars, var$3, passwd);
					$var($bytes, var$4, pKey->getSalt());
					$assign(var$2, $new($PBEKeySpec, var$3, var$4, pKey->getIterationCount(), $nc(encoded)->length * 8));
					return$1 = true;
					goto $finally;
				} catch ($Throwable&) {
					$assign(var$0, $catch());
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
			}
		} else {
			$throwNew($InvalidKeySpecException, "Invalid key spec"_s);
		}
	} else {
		$throwNew($InvalidKeySpecException, "Invalid key format/algorithm"_s);
	}
	$shouldNotReachHere();
}

$SecretKey* PBKDF2Core::engineTranslateKey($SecretKey* key) {
	bool var$0 = (key != nullptr) && ($nc($(key->getAlgorithm()))->equalsIgnoreCase($$str({"PBKDF2With"_s, this->prfAlgo})));
	if (var$0 && ($nc($(key->getFormat()))->equalsIgnoreCase("RAW"_s))) {
		if ($instanceOf($PBKDF2KeyImpl, key)) {
			return key;
		}
		if ($instanceOf($PBEKey, key)) {
			$var($PBEKey, pKey, $cast($PBEKey, key));
			$var($chars, password, pKey->getPassword());
			$var($bytes, encoding, pKey->getEncoded());
			$var($chars, var$1, password);
			$var($bytes, var$2, pKey->getSalt());
			$var($PBEKeySpec, spec, $new($PBEKeySpec, var$1, var$2, pKey->getIterationCount(), $nc(encoding)->length * 8));
			{
				$var($Throwable, var$3, nullptr);
				$var($SecretKey, var$5, nullptr);
				bool return$4 = false;
				try {
					try {
						$assign(var$5, $new($PBKDF2KeyImpl, spec, this->prfAlgo));
						return$4 = true;
						goto $finally;
					} catch ($InvalidKeySpecException&) {
						$var($InvalidKeySpecException, re, $catch());
						$var($InvalidKeyException, ike, $new($InvalidKeyException, "Invalid key component(s)"_s));
						ike->initCause(re);
						$throw(ike);
					}
				} catch ($Throwable&) {
					$assign(var$3, $catch());
				} $finally: {
					if (password != nullptr) {
						$Arrays::fill(password, (char16_t)0);
						spec->clearPassword();
					}
					$Arrays::fill(encoding, (int8_t)0);
				}
				if (var$3 != nullptr) {
					$throw(var$3);
				}
				if (return$4) {
					return var$5;
				}
			}
		}
	}
	$throwNew($InvalidKeyException, "Invalid key format/algorithm"_s);
	$shouldNotReachHere();
}

PBKDF2Core::PBKDF2Core() {
}

$Class* PBKDF2Core::load$($String* name, bool initialize) {
	$loadClass(PBKDF2Core, name, initialize, &_PBKDF2Core_ClassInfo_, allocate$PBKDF2Core);
	return class$;
}

$Class* PBKDF2Core::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com