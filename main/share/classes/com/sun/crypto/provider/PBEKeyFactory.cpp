#include <com/sun/crypto/provider/PBEKeyFactory.h>

#include <com/sun/crypto/provider/PBEKey.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/spec/InvalidKeySpecException.h>
#include <java/security/spec/KeySpec.h>
#include <java/util/Arrays.h>
#include <java/util/HashSet.h>
#include <java/util/Locale.h>
#include <javax/crypto/SecretKey.h>
#include <javax/crypto/SecretKeyFactorySpi.h>
#include <javax/crypto/spec/PBEKeySpec.h>
#include <jcpp.h>

#undef ENGLISH

using $PBEKey = ::com::sun::crypto::provider::PBEKey;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $Key = ::java::security::Key;
using $InvalidKeySpecException = ::java::security::spec::InvalidKeySpecException;
using $KeySpec = ::java::security::spec::KeySpec;
using $Arrays = ::java::util::Arrays;
using $HashSet = ::java::util::HashSet;
using $Locale = ::java::util::Locale;
using $SecretKey = ::javax::crypto::SecretKey;
using $SecretKeyFactorySpi = ::javax::crypto::SecretKeyFactorySpi;
using $PBEKeySpec = ::javax::crypto::spec::PBEKeySpec;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _PBEKeyFactory_FieldInfo_[] = {
	{"type", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PBEKeyFactory, type)},
	{"validTypes", "Ljava/util/HashSet;", "Ljava/util/HashSet<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(PBEKeyFactory, validTypes)},
	{}
};

$MethodInfo _PBEKeyFactory_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(PBEKeyFactory::*)($String*)>(&PBEKeyFactory::init$))},
	{"engineGenerateSecret", "(Ljava/security/spec/KeySpec;)Ljavax/crypto/SecretKey;", nullptr, $PROTECTED, nullptr, "java.security.spec.InvalidKeySpecException"},
	{"engineGetKeySpec", "(Ljavax/crypto/SecretKey;Ljava/lang/Class;)Ljava/security/spec/KeySpec;", "(Ljavax/crypto/SecretKey;Ljava/lang/Class<*>;)Ljava/security/spec/KeySpec;", $PROTECTED, nullptr, "java.security.spec.InvalidKeySpecException"},
	{"engineTranslateKey", "(Ljavax/crypto/SecretKey;)Ljavax/crypto/SecretKey;", nullptr, $PROTECTED, nullptr, "java.security.InvalidKeyException"},
	{}
};

$InnerClassInfo _PBEKeyFactory_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA512AndAES_256", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithHmacSHA512AndAES_256", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA384AndAES_256", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithHmacSHA384AndAES_256", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA256AndAES_256", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithHmacSHA256AndAES_256", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA224AndAES_256", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithHmacSHA224AndAES_256", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA1AndAES_256", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithHmacSHA1AndAES_256", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA512AndAES_128", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithHmacSHA512AndAES_128", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA384AndAES_128", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithHmacSHA384AndAES_128", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA256AndAES_128", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithHmacSHA256AndAES_128", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA224AndAES_128", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithHmacSHA224AndAES_128", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA1AndAES_128", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithHmacSHA1AndAES_128", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBEKeyFactory$PBEWithMD5AndTripleDES", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithMD5AndTripleDES", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBEKeyFactory$PBEWithSHA1AndRC4_128", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithSHA1AndRC4_128", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBEKeyFactory$PBEWithSHA1AndRC4_40", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithSHA1AndRC4_40", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBEKeyFactory$PBEWithSHA1AndRC2_128", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithSHA1AndRC2_128", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBEKeyFactory$PBEWithSHA1AndRC2_40", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithSHA1AndRC2_40", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBEKeyFactory$PBEWithSHA1AndDESede", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithSHA1AndDESede", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.PBEKeyFactory$PBEWithMD5AndDES", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithMD5AndDES", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PBEKeyFactory_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.crypto.provider.PBEKeyFactory",
	"javax.crypto.SecretKeyFactorySpi",
	nullptr,
	_PBEKeyFactory_FieldInfo_,
	_PBEKeyFactory_MethodInfo_,
	nullptr,
	nullptr,
	_PBEKeyFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA512AndAES_256,com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA384AndAES_256,com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA256AndAES_256,com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA224AndAES_256,com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA1AndAES_256,com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA512AndAES_128,com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA384AndAES_128,com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA256AndAES_128,com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA224AndAES_128,com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA1AndAES_128,com.sun.crypto.provider.PBEKeyFactory$PBEWithMD5AndTripleDES,com.sun.crypto.provider.PBEKeyFactory$PBEWithSHA1AndRC4_128,com.sun.crypto.provider.PBEKeyFactory$PBEWithSHA1AndRC4_40,com.sun.crypto.provider.PBEKeyFactory$PBEWithSHA1AndRC2_128,com.sun.crypto.provider.PBEKeyFactory$PBEWithSHA1AndRC2_40,com.sun.crypto.provider.PBEKeyFactory$PBEWithSHA1AndDESede,com.sun.crypto.provider.PBEKeyFactory$PBEWithMD5AndDES"
};

$Object* allocate$PBEKeyFactory($Class* clazz) {
	return $of($alloc(PBEKeyFactory));
}

$HashSet* PBEKeyFactory::validTypes = nullptr;

void PBEKeyFactory::init$($String* keytype) {
	$SecretKeyFactorySpi::init$();
	$set(this, type, keytype);
}

$SecretKey* PBEKeyFactory::engineGenerateSecret($KeySpec* keySpec) {
	if (!($instanceOf($PBEKeySpec, keySpec))) {
		$throwNew($InvalidKeySpecException, "Invalid key spec"_s);
	}
	return $new($PBEKey, $cast($PBEKeySpec, keySpec), this->type, true);
}

$KeySpec* PBEKeyFactory::engineGetKeySpec($SecretKey* key, $Class* keySpecCl) {
	$init($Locale);
	bool var$0 = ($instanceOf($SecretKey, key)) && ($nc(PBEKeyFactory::validTypes)->contains($($nc($($nc(key)->getAlgorithm()))->toUpperCase($Locale::ENGLISH))));
	if (var$0 && ($nc($($nc(key)->getFormat()))->equalsIgnoreCase("RAW"_s))) {
		$load($PBEKeySpec);
		if ((keySpecCl != nullptr) && $PBEKeySpec::class$->isAssignableFrom(keySpecCl)) {
			$var($bytes, passwdBytes, key->getEncoded());
			$var($chars, passwdChars, $new($chars, $nc(passwdBytes)->length));
			for (int32_t i = 0; i < passwdChars->length; ++i) {
				passwdChars->set(i, (char16_t)((int32_t)(passwdBytes->get(i) & (uint32_t)127)));
			}
			$var($PBEKeySpec, ret, $new($PBEKeySpec, passwdChars));
			$Arrays::fill(passwdChars, u' ');
			$Arrays::fill(passwdBytes, (int8_t)0);
			return ret;
		} else {
			$throwNew($InvalidKeySpecException, "Invalid key spec"_s);
		}
	} else {
		$throwNew($InvalidKeySpecException, "Invalid key format/algorithm"_s);
	}
}

$SecretKey* PBEKeyFactory::engineTranslateKey($SecretKey* key) {
	try {
		$init($Locale);
		bool var$0 = (key != nullptr) && ($nc(PBEKeyFactory::validTypes)->contains($($nc($(key->getAlgorithm()))->toUpperCase($Locale::ENGLISH))));
		if (var$0 && ($nc($(key->getFormat()))->equalsIgnoreCase("RAW"_s))) {
			if ($instanceOf($PBEKey, key)) {
				return key;
			}
			$load($PBEKeySpec);
			$var($PBEKeySpec, pbeKeySpec, $cast($PBEKeySpec, engineGetKeySpec(key, $PBEKeySpec::class$)));
			{
				$var($Throwable, var$1, nullptr);
				$var($SecretKey, var$3, nullptr);
				bool return$2 = false;
				try {
					$assign(var$3, engineGenerateSecret(pbeKeySpec));
					return$2 = true;
					goto $finally;
				} catch ($Throwable&) {
					$assign(var$1, $catch());
				} $finally: {
					$nc(pbeKeySpec)->clearPassword();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
				if (return$2) {
					return var$3;
				}
			}
		} else {
			$throwNew($InvalidKeyException, "Invalid key format/algorithm"_s);
		}
	} catch ($InvalidKeySpecException&) {
		$var($InvalidKeySpecException, ikse, $catch());
		$throwNew($InvalidKeyException, $$str({"Cannot translate key: "_s, $(ikse->getMessage())}));
	}
	$shouldNotReachHere();
}

void clinit$PBEKeyFactory($Class* class$) {
	{
		$assignStatic(PBEKeyFactory::validTypes, $new($HashSet, 17));
		$init($Locale);
		$nc(PBEKeyFactory::validTypes)->add($("PBEWithMD5AndDES"_s->toUpperCase($Locale::ENGLISH)));
		$nc(PBEKeyFactory::validTypes)->add($("PBEWithSHA1AndDESede"_s->toUpperCase($Locale::ENGLISH)));
		$nc(PBEKeyFactory::validTypes)->add($("PBEWithSHA1AndRC2_40"_s->toUpperCase($Locale::ENGLISH)));
		$nc(PBEKeyFactory::validTypes)->add($("PBEWithSHA1AndRC2_128"_s->toUpperCase($Locale::ENGLISH)));
		$nc(PBEKeyFactory::validTypes)->add($("PBEWithSHA1AndRC4_40"_s->toUpperCase($Locale::ENGLISH)));
		$nc(PBEKeyFactory::validTypes)->add($("PBEWithSHA1AndRC4_128"_s->toUpperCase($Locale::ENGLISH)));
		$nc(PBEKeyFactory::validTypes)->add($("PBEWithMD5AndTripleDES"_s->toUpperCase($Locale::ENGLISH)));
		$nc(PBEKeyFactory::validTypes)->add($("PBEWithHmacSHA1AndAES_128"_s->toUpperCase($Locale::ENGLISH)));
		$nc(PBEKeyFactory::validTypes)->add($("PBEWithHmacSHA224AndAES_128"_s->toUpperCase($Locale::ENGLISH)));
		$nc(PBEKeyFactory::validTypes)->add($("PBEWithHmacSHA256AndAES_128"_s->toUpperCase($Locale::ENGLISH)));
		$nc(PBEKeyFactory::validTypes)->add($("PBEWithHmacSHA384AndAES_128"_s->toUpperCase($Locale::ENGLISH)));
		$nc(PBEKeyFactory::validTypes)->add($("PBEWithHmacSHA512AndAES_128"_s->toUpperCase($Locale::ENGLISH)));
		$nc(PBEKeyFactory::validTypes)->add($("PBEWithHmacSHA1AndAES_256"_s->toUpperCase($Locale::ENGLISH)));
		$nc(PBEKeyFactory::validTypes)->add($("PBEWithHmacSHA224AndAES_256"_s->toUpperCase($Locale::ENGLISH)));
		$nc(PBEKeyFactory::validTypes)->add($("PBEWithHmacSHA256AndAES_256"_s->toUpperCase($Locale::ENGLISH)));
		$nc(PBEKeyFactory::validTypes)->add($("PBEWithHmacSHA384AndAES_256"_s->toUpperCase($Locale::ENGLISH)));
		$nc(PBEKeyFactory::validTypes)->add($("PBEWithHmacSHA512AndAES_256"_s->toUpperCase($Locale::ENGLISH)));
	}
}

PBEKeyFactory::PBEKeyFactory() {
}

$Class* PBEKeyFactory::load$($String* name, bool initialize) {
	$loadClass(PBEKeyFactory, name, initialize, &_PBEKeyFactory_ClassInfo_, clinit$PBEKeyFactory, allocate$PBEKeyFactory);
	return class$;
}

$Class* PBEKeyFactory::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com