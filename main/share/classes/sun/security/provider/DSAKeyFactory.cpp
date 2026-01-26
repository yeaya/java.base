#include <sun/security/provider/DSAKeyFactory.h>

#include <java/lang/ClassNotFoundException.h>
#include <java/math/BigInteger.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/Key.h>
#include <java/security/KeyFactorySpi.h>
#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/security/interfaces/DSAParams.h>
#include <java/security/interfaces/DSAPrivateKey.h>
#include <java/security/interfaces/DSAPublicKey.h>
#include <java/security/spec/DSAPrivateKeySpec.h>
#include <java/security/spec/DSAPublicKeySpec.h>
#include <java/security/spec/InvalidKeySpecException.h>
#include <java/security/spec/KeySpec.h>
#include <java/security/spec/PKCS8EncodedKeySpec.h>
#include <java/security/spec/X509EncodedKeySpec.h>
#include <java/util/Arrays.h>
#include <sun/security/pkcs/PKCS8Key.h>
#include <sun/security/provider/DSAPrivateKey.h>
#include <sun/security/provider/DSAPublicKey.h>
#include <sun/security/provider/DSAPublicKeyImpl.h>
#include <sun/security/x509/X509Key.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $Key = ::java::security::Key;
using $KeyFactorySpi = ::java::security::KeyFactorySpi;
using $PrivateKey = ::java::security::PrivateKey;
using $PublicKey = ::java::security::PublicKey;
using $DSAParams = ::java::security::interfaces::DSAParams;
using $1DSAPrivateKey = ::java::security::interfaces::DSAPrivateKey;
using $1DSAPublicKey = ::java::security::interfaces::DSAPublicKey;
using $DSAPrivateKeySpec = ::java::security::spec::DSAPrivateKeySpec;
using $DSAPublicKeySpec = ::java::security::spec::DSAPublicKeySpec;
using $InvalidKeySpecException = ::java::security::spec::InvalidKeySpecException;
using $KeySpec = ::java::security::spec::KeySpec;
using $PKCS8EncodedKeySpec = ::java::security::spec::PKCS8EncodedKeySpec;
using $X509EncodedKeySpec = ::java::security::spec::X509EncodedKeySpec;
using $Arrays = ::java::util::Arrays;
using $PKCS8Key = ::sun::security::pkcs::PKCS8Key;
using $DSAPrivateKey = ::sun::security::provider::DSAPrivateKey;
using $DSAPublicKey = ::sun::security::provider::DSAPublicKey;
using $DSAPublicKeyImpl = ::sun::security::provider::DSAPublicKeyImpl;
using $X509Key = ::sun::security::x509::X509Key;

namespace sun {
	namespace security {
		namespace provider {

$MethodInfo _DSAKeyFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DSAKeyFactory, init$, void)},
	{"engineGeneratePrivate", "(Ljava/security/spec/KeySpec;)Ljava/security/PrivateKey;", nullptr, $PROTECTED, $virtualMethod(DSAKeyFactory, engineGeneratePrivate, $PrivateKey*, $KeySpec*), "java.security.spec.InvalidKeySpecException"},
	{"engineGeneratePublic", "(Ljava/security/spec/KeySpec;)Ljava/security/PublicKey;", nullptr, $PROTECTED, $virtualMethod(DSAKeyFactory, engineGeneratePublic, $PublicKey*, $KeySpec*), "java.security.spec.InvalidKeySpecException"},
	{"engineGetKeySpec", "(Ljava/security/Key;Ljava/lang/Class;)Ljava/security/spec/KeySpec;", "<T::Ljava/security/spec/KeySpec;>(Ljava/security/Key;Ljava/lang/Class<TT;>;)TT;", $PROTECTED, $virtualMethod(DSAKeyFactory, engineGetKeySpec, $KeySpec*, $Key*, $Class*), "java.security.spec.InvalidKeySpecException"},
	{"engineTranslateKey", "(Ljava/security/Key;)Ljava/security/Key;", nullptr, $PROTECTED, $virtualMethod(DSAKeyFactory, engineTranslateKey, $Key*, $Key*), "java.security.InvalidKeyException"},
	{}
};

$ClassInfo _DSAKeyFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.provider.DSAKeyFactory",
	"java.security.KeyFactorySpi",
	nullptr,
	nullptr,
	_DSAKeyFactory_MethodInfo_
};

$Object* allocate$DSAKeyFactory($Class* clazz) {
	return $of($alloc(DSAKeyFactory));
}

void DSAKeyFactory::init$() {
	$KeyFactorySpi::init$();
}

$PublicKey* DSAKeyFactory::engineGeneratePublic($KeySpec* keySpec) {
	$useLocalCurrentObjectStackCache();
	try {
		if ($instanceOf($DSAPublicKeySpec, keySpec)) {
			$var($DSAPublicKeySpec, dsaPubKeySpec, $cast($DSAPublicKeySpec, keySpec));
			$var($BigInteger, var$0, $nc(dsaPubKeySpec)->getY());
			$var($BigInteger, var$1, dsaPubKeySpec->getP());
			$var($BigInteger, var$2, dsaPubKeySpec->getQ());
			return static_cast<$PublicKey*>(static_cast<$X509Key*>(static_cast<$DSAPublicKey*>($new($DSAPublicKeyImpl, var$0, var$1, var$2, $(dsaPubKeySpec->getG())))));
		} else if ($instanceOf($X509EncodedKeySpec, keySpec)) {
			return static_cast<$PublicKey*>(static_cast<$X509Key*>(static_cast<$DSAPublicKey*>($new($DSAPublicKeyImpl, $($nc(($cast($X509EncodedKeySpec, keySpec)))->getEncoded())))));
		} else {
			$throwNew($InvalidKeySpecException, "Inappropriate key specification"_s);
		}
	} catch ($InvalidKeyException& e) {
		$throwNew($InvalidKeySpecException, $$str({"Inappropriate key specification: "_s, $(e->getMessage())}));
	}
	$shouldNotReachHere();
}

$PrivateKey* DSAKeyFactory::engineGeneratePrivate($KeySpec* keySpec) {
	$useLocalCurrentObjectStackCache();
	try {
		if ($instanceOf($DSAPrivateKeySpec, keySpec)) {
			$var($DSAPrivateKeySpec, dsaPrivKeySpec, $cast($DSAPrivateKeySpec, keySpec));
			$var($BigInteger, var$0, $nc(dsaPrivKeySpec)->getX());
			$var($BigInteger, var$1, dsaPrivKeySpec->getP());
			$var($BigInteger, var$2, dsaPrivKeySpec->getQ());
			return static_cast<$PrivateKey*>(static_cast<$PKCS8Key*>($new($DSAPrivateKey, var$0, var$1, var$2, $(dsaPrivKeySpec->getG()))));
		} else if ($instanceOf($PKCS8EncodedKeySpec, keySpec)) {
			$var($bytes, encoded, $nc(($cast($PKCS8EncodedKeySpec, keySpec)))->getEncoded());
			{
				$var($Throwable, var$3, nullptr);
				$var($PrivateKey, var$5, nullptr);
				bool return$4 = false;
				try {
					$assign(var$5, static_cast<$PrivateKey*>(static_cast<$PKCS8Key*>($new($DSAPrivateKey, encoded))));
					return$4 = true;
					goto $finally;
				} catch ($Throwable& var$6) {
					$assign(var$3, var$6);
				} $finally: {
					$Arrays::fill(encoded, (int8_t)0);
				}
				if (var$3 != nullptr) {
					$throw(var$3);
				}
				if (return$4) {
					return var$5;
				}
			}
		} else {
			$throwNew($InvalidKeySpecException, "Inappropriate key specification"_s);
		}
	} catch ($InvalidKeyException& e) {
		$throwNew($InvalidKeySpecException, $$str({"Inappropriate key specification: "_s, $(e->getMessage())}));
	}
	$shouldNotReachHere();
}

$KeySpec* DSAKeyFactory::engineGetKeySpec($Key* key, $Class* keySpec) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($DSAParams, params, nullptr);
	try {
		if ($instanceOf($1DSAPublicKey, key)) {
			$Class* dsaPubKeySpec = $Class::forName("java.security.spec.DSAPublicKeySpec"_s);
			$Class* x509KeySpec = $Class::forName("java.security.spec.X509EncodedKeySpec"_s);
			if ($nc(keySpec)->isAssignableFrom(dsaPubKeySpec)) {
				$var($1DSAPublicKey, dsaPubKey, $cast($1DSAPublicKey, key));
				$assign(params, $nc(dsaPubKey)->getParams());
				$var($BigInteger, var$0, dsaPubKey->getY());
				$var($BigInteger, var$1, $nc(params)->getP());
				$var($BigInteger, var$2, params->getQ());
				return $cast($KeySpec, keySpec->cast($$new($DSAPublicKeySpec, var$0, var$1, var$2, $(params->getG()))));
			} else if (keySpec->isAssignableFrom(x509KeySpec)) {
				return $cast($KeySpec, keySpec->cast($$new($X509EncodedKeySpec, $($nc(key)->getEncoded()))));
			} else {
				$throwNew($InvalidKeySpecException, "Inappropriate key specification"_s);
			}
		} else if ($instanceOf($1DSAPrivateKey, key)) {
			$Class* dsaPrivKeySpec = $Class::forName("java.security.spec.DSAPrivateKeySpec"_s);
			$Class* pkcs8KeySpec = $Class::forName("java.security.spec.PKCS8EncodedKeySpec"_s);
			if ($nc(keySpec)->isAssignableFrom(dsaPrivKeySpec)) {
				$var($1DSAPrivateKey, dsaPrivKey, $cast($1DSAPrivateKey, key));
				$assign(params, $nc(dsaPrivKey)->getParams());
				$var($BigInteger, var$3, dsaPrivKey->getX());
				$var($BigInteger, var$4, $nc(params)->getP());
				$var($BigInteger, var$5, params->getQ());
				return $cast($KeySpec, keySpec->cast($$new($DSAPrivateKeySpec, var$3, var$4, var$5, $(params->getG()))));
			} else if (keySpec->isAssignableFrom(pkcs8KeySpec)) {
				$var($bytes, encoded, $nc(key)->getEncoded());
				{
					$var($Throwable, var$6, nullptr);
					$var($KeySpec, var$8, nullptr);
					bool return$7 = false;
					try {
						$assign(var$8, $cast($KeySpec, keySpec->cast($$new($PKCS8EncodedKeySpec, encoded))));
						return$7 = true;
						goto $finally;
					} catch ($Throwable& var$9) {
						$assign(var$6, var$9);
					} $finally: {
						$Arrays::fill(encoded, (int8_t)0);
					}
					if (var$6 != nullptr) {
						$throw(var$6);
					}
					if (return$7) {
						return var$8;
					}
				}
			} else {
				$throwNew($InvalidKeySpecException, "Inappropriate key specification"_s);
			}
		} else {
			$throwNew($InvalidKeySpecException, "Inappropriate key type"_s);
		}
	} catch ($ClassNotFoundException& e) {
		$throwNew($InvalidKeySpecException, $$str({"Unsupported key specification: "_s, $(e->getMessage())}));
	}
	$shouldNotReachHere();
}

$Key* DSAKeyFactory::engineTranslateKey($Key* key) {
	$useLocalCurrentObjectStackCache();
	try {
		if ($instanceOf($1DSAPublicKey, key)) {
			if ($instanceOf($DSAPublicKey, key)) {
				return key;
			}
			$load($DSAPublicKeySpec);
			$var($DSAPublicKeySpec, dsaPubKeySpec, $cast($DSAPublicKeySpec, engineGetKeySpec(key, $DSAPublicKeySpec::class$)));
			return engineGeneratePublic(dsaPubKeySpec);
		} else if ($instanceOf($1DSAPrivateKey, key)) {
			if ($instanceOf($DSAPrivateKey, key)) {
				return key;
			}
			$load($DSAPrivateKeySpec);
			$var($DSAPrivateKeySpec, dsaPrivKeySpec, $cast($DSAPrivateKeySpec, engineGetKeySpec(key, $DSAPrivateKeySpec::class$)));
			return engineGeneratePrivate(dsaPrivKeySpec);
		} else {
			$throwNew($InvalidKeyException, "Wrong algorithm type"_s);
		}
	} catch ($InvalidKeySpecException& e) {
		$throwNew($InvalidKeyException, $$str({"Cannot translate key: "_s, $(e->getMessage())}));
	}
	$shouldNotReachHere();
}

DSAKeyFactory::DSAKeyFactory() {
}

$Class* DSAKeyFactory::load$($String* name, bool initialize) {
	$loadClass(DSAKeyFactory, name, initialize, &_DSAKeyFactory_ClassInfo_, allocate$DSAKeyFactory);
	return class$;
}

$Class* DSAKeyFactory::class$ = nullptr;

		} // provider
	} // security
} // sun