#include <com/sun/crypto/provider/DESedeKeyFactory.h>

#include <com/sun/crypto/provider/DESedeKey.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/spec/InvalidKeySpecException.h>
#include <java/security/spec/KeySpec.h>
#include <java/util/Arrays.h>
#include <javax/crypto/SecretKey.h>
#include <javax/crypto/SecretKeyFactorySpi.h>
#include <javax/crypto/spec/DESedeKeySpec.h>
#include <javax/crypto/spec/SecretKeySpec.h>
#include <jcpp.h>

using $DESedeKey = ::com::sun::crypto::provider::DESedeKey;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $InvalidKeySpecException = ::java::security::spec::InvalidKeySpecException;
using $KeySpec = ::java::security::spec::KeySpec;
using $Arrays = ::java::util::Arrays;
using $SecretKey = ::javax::crypto::SecretKey;
using $SecretKeyFactorySpi = ::javax::crypto::SecretKeyFactorySpi;
using $DESedeKeySpec = ::javax::crypto::spec::DESedeKeySpec;
using $SecretKeySpec = ::javax::crypto::spec::SecretKeySpec;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _DESedeKeyFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DESedeKeyFactory::*)()>(&DESedeKeyFactory::init$))},
	{"engineGenerateSecret", "(Ljava/security/spec/KeySpec;)Ljavax/crypto/SecretKey;", nullptr, $PROTECTED, nullptr, "java.security.spec.InvalidKeySpecException"},
	{"engineGetKeySpec", "(Ljavax/crypto/SecretKey;Ljava/lang/Class;)Ljava/security/spec/KeySpec;", "(Ljavax/crypto/SecretKey;Ljava/lang/Class<*>;)Ljava/security/spec/KeySpec;", $PROTECTED, nullptr, "java.security.spec.InvalidKeySpecException"},
	{"engineTranslateKey", "(Ljavax/crypto/SecretKey;)Ljavax/crypto/SecretKey;", nullptr, $PROTECTED, nullptr, "java.security.InvalidKeyException"},
	{}
};

$ClassInfo _DESedeKeyFactory_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.DESedeKeyFactory",
	"javax.crypto.SecretKeyFactorySpi",
	nullptr,
	nullptr,
	_DESedeKeyFactory_MethodInfo_
};

$Object* allocate$DESedeKeyFactory($Class* clazz) {
	return $of($alloc(DESedeKeyFactory));
}

void DESedeKeyFactory::init$() {
	$SecretKeyFactorySpi::init$();
}

$SecretKey* DESedeKeyFactory::engineGenerateSecret($KeySpec* keySpec) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($bytes, encoded, nullptr);
		if ($instanceOf($DESedeKeySpec, keySpec)) {
			$assign(encoded, $nc(($cast($DESedeKeySpec, keySpec)))->getKey());
		} else if ($instanceOf($SecretKeySpec, keySpec)) {
			$assign(encoded, $nc(($cast($SecretKeySpec, keySpec)))->getEncoded());
		} else {
			$throwNew($InvalidKeySpecException, "Inappropriate key specification"_s);
		}
		{
			$var($Throwable, var$0, nullptr);
			$var($SecretKey, var$2, nullptr);
			bool return$1 = false;
			try {
				$assign(var$2, $new($DESedeKey, encoded));
				return$1 = true;
				goto $finally;
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} $finally: {
				$Arrays::fill(encoded, (int8_t)0);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} catch ($InvalidKeyException& e) {
		$throwNew($InvalidKeySpecException, $(e->getMessage()));
	}
	$shouldNotReachHere();
}

$KeySpec* DESedeKeyFactory::engineGetKeySpec($SecretKey* key, $Class* keySpec) {
	$useLocalCurrentObjectStackCache();
	try {
		bool var$0 = ($instanceOf($SecretKey, key)) && ($nc($($nc(key)->getAlgorithm()))->equalsIgnoreCase("DESede"_s));
		if (var$0 && ($nc($(key->getFormat()))->equalsIgnoreCase("RAW"_s))) {
			$load($DESedeKeySpec);
			if ($nc(keySpec)->isAssignableFrom($DESedeKeySpec::class$)) {
				$var($bytes, encoded, key->getEncoded());
				{
					$var($Throwable, var$1, nullptr);
					$var($KeySpec, var$3, nullptr);
					bool return$2 = false;
					try {
						$assign(var$3, $new($DESedeKeySpec, encoded));
						return$2 = true;
						goto $finally;
					} catch ($Throwable& var$4) {
						$assign(var$1, var$4);
					} $finally: {
						if (encoded != nullptr) {
							$Arrays::fill(encoded, (int8_t)0);
						}
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
					if (return$2) {
						return var$3;
					}
				}
			} else {
				$throwNew($InvalidKeySpecException, "Inappropriate key specification"_s);
			}
		} else {
			$throwNew($InvalidKeySpecException, "Inappropriate key format/algorithm"_s);
		}
	} catch ($InvalidKeyException& e) {
		$throwNew($InvalidKeySpecException, "Secret key has wrong size"_s);
	}
	$shouldNotReachHere();
}

$SecretKey* DESedeKeyFactory::engineTranslateKey($SecretKey* key) {
	$useLocalCurrentObjectStackCache();
	try {
		bool var$0 = (key != nullptr) && ($nc($(key->getAlgorithm()))->equalsIgnoreCase("DESede"_s));
		if (var$0 && ($nc($(key->getFormat()))->equalsIgnoreCase("RAW"_s))) {
			if ($instanceOf($DESedeKey, key)) {
				return key;
			}
			$load($DESedeKeySpec);
			$var($DESedeKeySpec, desEdeKeySpec, $cast($DESedeKeySpec, engineGetKeySpec(key, $DESedeKeySpec::class$)));
			return engineGenerateSecret(desEdeKeySpec);
		} else {
			$throwNew($InvalidKeyException, "Inappropriate key format/algorithm"_s);
		}
	} catch ($InvalidKeySpecException& e) {
		$throwNew($InvalidKeyException, "Cannot translate key"_s);
	}
	$shouldNotReachHere();
}

DESedeKeyFactory::DESedeKeyFactory() {
}

$Class* DESedeKeyFactory::load$($String* name, bool initialize) {
	$loadClass(DESedeKeyFactory, name, initialize, &_DESedeKeyFactory_ClassInfo_, allocate$DESedeKeyFactory);
	return class$;
}

$Class* DESedeKeyFactory::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com