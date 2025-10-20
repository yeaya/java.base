#include <sun/security/util/KeyUtil.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/Key.h>
#include <java/security/SecureRandom.h>
#include <java/security/interfaces/DSAKey.h>
#include <java/security/interfaces/DSAParams.h>
#include <java/security/interfaces/ECKey.h>
#include <java/security/interfaces/EdECKey.h>
#include <java/security/interfaces/RSAKey.h>
#include <java/security/interfaces/XECKey.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/ECParameterSpec.h>
#include <java/security/spec/InvalidParameterSpecException.h>
#include <java/security/spec/KeySpec.h>
#include <java/security/spec/NamedParameterSpec.h>
#include <java/util/Arrays.h>
#include <javax/crypto/SecretKey.h>
#include <javax/crypto/interfaces/DHKey.h>
#include <javax/crypto/interfaces/DHPublicKey.h>
#include <javax/crypto/spec/DHParameterSpec.h>
#include <javax/crypto/spec/DHPublicKeySpec.h>
#include <sun/security/jca/JCAUtil.h>
#include <sun/security/util/ECKeySizeParameterSpec.h>
#include <sun/security/util/Length.h>
#include <jcpp.h>

#undef ONE
#undef ZERO

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $BigInteger = ::java::math::BigInteger;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $Key = ::java::security::Key;
using $SecureRandom = ::java::security::SecureRandom;
using $DSAKey = ::java::security::interfaces::DSAKey;
using $DSAParams = ::java::security::interfaces::DSAParams;
using $ECKey = ::java::security::interfaces::ECKey;
using $EdECKey = ::java::security::interfaces::EdECKey;
using $RSAKey = ::java::security::interfaces::RSAKey;
using $XECKey = ::java::security::interfaces::XECKey;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $ECParameterSpec = ::java::security::spec::ECParameterSpec;
using $InvalidParameterSpecException = ::java::security::spec::InvalidParameterSpecException;
using $KeySpec = ::java::security::spec::KeySpec;
using $NamedParameterSpec = ::java::security::spec::NamedParameterSpec;
using $Arrays = ::java::util::Arrays;
using $SecretKey = ::javax::crypto::SecretKey;
using $DHKey = ::javax::crypto::interfaces::DHKey;
using $DHPublicKey = ::javax::crypto::interfaces::DHPublicKey;
using $DHParameterSpec = ::javax::crypto::spec::DHParameterSpec;
using $DHPublicKeySpec = ::javax::crypto::spec::DHPublicKeySpec;
using $JCAUtil = ::sun::security::jca::JCAUtil;
using $ECKeySizeParameterSpec = ::sun::security::util::ECKeySizeParameterSpec;
using $Length = ::sun::security::util::Length;

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _KeyUtil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeyUtil::*)()>(&KeyUtil::init$))},
	{"checkTlsPreMasterSecretKey", "(IILjava/security/SecureRandom;[BZ)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)(int32_t,int32_t,$SecureRandom*,$bytes*,bool)>(&KeyUtil::checkTlsPreMasterSecretKey))},
	{"getKeySize", "(Ljava/security/Key;)I", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int32_t(*)($Key*)>(&KeyUtil::getKeySize))},
	{"getKeySize", "(Ljava/security/AlgorithmParameters;)I", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int32_t(*)($AlgorithmParameters*)>(&KeyUtil::getKeySize))},
	{"isOracleJCEProvider", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<bool(*)($String*)>(&KeyUtil::isOracleJCEProvider))},
	{"trimZeroes", "([B)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($bytes*)>(&KeyUtil::trimZeroes))},
	{"validate", "(Ljava/security/Key;)V", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<void(*)($Key*)>(&KeyUtil::validate)), "java.security.InvalidKeyException"},
	{"validate", "(Ljava/security/spec/KeySpec;)V", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<void(*)($KeySpec*)>(&KeyUtil::validate)), "java.security.InvalidKeyException"},
	{"validateDHPublicKey", "(Ljavax/crypto/interfaces/DHPublicKey;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($DHPublicKey*)>(&KeyUtil::validateDHPublicKey)), "java.security.InvalidKeyException"},
	{"validateDHPublicKey", "(Ljavax/crypto/spec/DHPublicKeySpec;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($DHPublicKeySpec*)>(&KeyUtil::validateDHPublicKey)), "java.security.InvalidKeyException"},
	{"validateDHPublicKey", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($BigInteger*,$BigInteger*,$BigInteger*)>(&KeyUtil::validateDHPublicKey)), "java.security.InvalidKeyException"},
	{}
};

$ClassInfo _KeyUtil_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.util.KeyUtil",
	"java.lang.Object",
	nullptr,
	nullptr,
	_KeyUtil_MethodInfo_
};

$Object* allocate$KeyUtil($Class* clazz) {
	return $of($alloc(KeyUtil));
}

void KeyUtil::init$() {
}

int32_t KeyUtil::getKeySize($Key* key) {
	$useLocalCurrentObjectStackCache();
	int32_t size = -1;
	if ($instanceOf($Length, key)) {
		try {
			$var($Length, ruler, $cast($Length, key));
			size = $nc(ruler)->length();
		} catch ($UnsupportedOperationException&) {
			$catch();
		}
		if (size >= 0) {
			return size;
		}
	}
	if ($instanceOf($SecretKey, key)) {
		$var($SecretKey, sk, $cast($SecretKey, key));
		$var($String, format, $nc(sk)->getFormat());
		if ("RAW"_s->equals(format)) {
			$var($bytes, encoded, sk->getEncoded());
			if (encoded != nullptr) {
				size = (encoded->length * 8);
				$Arrays::fill(encoded, (int8_t)0);
			}
		}
	} else if ($instanceOf($RSAKey, key)) {
		$var($RSAKey, pubk, $cast($RSAKey, key));
		size = $nc($($nc(pubk)->getModulus()))->bitLength();
	} else if ($instanceOf($ECKey, key)) {
		$var($ECKey, pubk, $cast($ECKey, key));
		size = $nc($($nc($($nc(pubk)->getParams()))->getOrder()))->bitLength();
	} else if ($instanceOf($DSAKey, key)) {
		$var($DSAKey, pubk, $cast($DSAKey, key));
		$var($DSAParams, params, $nc(pubk)->getParams());
		size = (params != nullptr) ? $nc($($nc(params)->getP()))->bitLength() : -1;
	} else if ($instanceOf($DHKey, key)) {
		$var($DHKey, pubk, $cast($DHKey, key));
		size = $nc($($nc($($nc(pubk)->getParams()))->getP()))->bitLength();
	} else if ($instanceOf($XECKey, key)) {
		$var($XECKey, pubk, $cast($XECKey, key));
		$var($AlgorithmParameterSpec, params, $nc(pubk)->getParams());
		if ($instanceOf($NamedParameterSpec, params)) {
			$var($String, name, $nc(($cast($NamedParameterSpec, params)))->getName());
			if ($nc(name)->equalsIgnoreCase($($nc($NamedParameterSpec::X25519)->getName()))) {
				size = 255;
			} else {
				if (name->equalsIgnoreCase($($nc($NamedParameterSpec::X448)->getName()))) {
					size = 448;
				} else {
					size = -1;
				}
			}
		} else {
			size = -1;
		}
	} else if ($instanceOf($EdECKey, key)) {
		$var($String, nc, $nc($($nc(($cast($EdECKey, key)))->getParams()))->getName());
		if ($nc(nc)->equalsIgnoreCase($($nc($NamedParameterSpec::ED25519)->getName()))) {
			size = 255;
		} else {
			if (nc->equalsIgnoreCase($($nc($NamedParameterSpec::ED448)->getName()))) {
				size = 448;
			} else {
				size = -1;
			}
		}
	}
	return size;
}

int32_t KeyUtil::getKeySize($AlgorithmParameters* parameters) {
	$useLocalCurrentObjectStackCache();
	$var($String, algorithm, $nc(parameters)->getAlgorithm());
	{
		$var($String, s5767$, algorithm);
		int32_t tmp5767$ = -1;
		switch ($nc(s5767$)->hashCode()) {
		case 2206:
			{
				if (s5767$->equals("EC"_s)) {
					tmp5767$ = 0;
				}
				break;
			}
		case (int32_t)0x8A33DDBC:
			{
				if (s5767$->equals("DiffieHellman"_s)) {
					tmp5767$ = 1;
				}
				break;
			}
		}
		switch (tmp5767$) {
		case 0:
			{
				try {
					$load($ECKeySizeParameterSpec);
					$var($ECKeySizeParameterSpec, ps, $cast($ECKeySizeParameterSpec, parameters->getParameterSpec($ECKeySizeParameterSpec::class$)));
					if (ps != nullptr) {
						return ps->getKeySize();
					}
				} catch ($InvalidParameterSpecException&) {
					$catch();
				}
				try {
					$load($ECParameterSpec);
					$var($ECParameterSpec, ps, $cast($ECParameterSpec, parameters->getParameterSpec($ECParameterSpec::class$)));
					if (ps != nullptr) {
						return $nc($(ps->getOrder()))->bitLength();
					}
				} catch ($InvalidParameterSpecException&) {
					$catch();
				}
				break;
			}
		case 1:
			{
				try {
					$load($DHParameterSpec);
					$var($DHParameterSpec, ps, $cast($DHParameterSpec, parameters->getParameterSpec($DHParameterSpec::class$)));
					if (ps != nullptr) {
						return $nc($(ps->getP()))->bitLength();
					}
				} catch ($InvalidParameterSpecException&) {
					$catch();
				}
				break;
			}
		}
	}
	return -1;
}

void KeyUtil::validate($Key* key) {
	if (key == nullptr) {
		$throwNew($NullPointerException, "The key to be validated cannot be null"_s);
	}
	if ($instanceOf($DHPublicKey, key)) {
		validateDHPublicKey($cast($DHPublicKey, key));
	}
}

void KeyUtil::validate($KeySpec* keySpec) {
	if (keySpec == nullptr) {
		$throwNew($NullPointerException, "The key spec to be validated cannot be null"_s);
	}
	if ($instanceOf($DHPublicKeySpec, keySpec)) {
		validateDHPublicKey($cast($DHPublicKeySpec, keySpec));
	}
}

bool KeyUtil::isOracleJCEProvider($String* providerName) {
	bool var$0 = providerName != nullptr;
	if (var$0) {
		bool var$2 = providerName->equals("SunJCE"_s);
		bool var$1 = var$2 || $nc(providerName)->equals("SunMSCAPI"_s);
		var$0 = (var$1 || providerName->startsWith("SunPKCS11"_s));
	}
	return var$0;
}

$bytes* KeyUtil::checkTlsPreMasterSecretKey(int32_t clientVersion, int32_t serverVersion, $SecureRandom* random$renamed, $bytes* encoded$renamed, bool isFailOver) {
	$useLocalCurrentObjectStackCache();
	$var($SecureRandom, random, random$renamed);
	$var($bytes, encoded, encoded$renamed);
	if (random == nullptr) {
		$assign(random, $JCAUtil::getSecureRandom());
	}
	$var($bytes, replacer, $new($bytes, 48));
	$nc(random)->nextBytes(replacer);
	if (!isFailOver && (encoded != nullptr)) {
		if (encoded->length != 48) {
			return replacer;
		}
		int32_t encodedVersion = (((int32_t)(encoded->get(0) & (uint32_t)255)) << 8) | ((int32_t)(encoded->get(1) & (uint32_t)255));
		if (clientVersion != encodedVersion) {
			if (clientVersion > 769 || serverVersion != encodedVersion) {
				$assign(encoded, replacer);
			}
		}
		return encoded;
	}
	return replacer;
}

void KeyUtil::validateDHPublicKey($DHPublicKey* publicKey) {
	$useLocalCurrentObjectStackCache();
	$var($DHParameterSpec, paramSpec, $nc(publicKey)->getParams());
	$var($BigInteger, p, $nc(paramSpec)->getP());
	$var($BigInteger, g, paramSpec->getG());
	$var($BigInteger, y, publicKey->getY());
	validateDHPublicKey(p, g, y);
}

void KeyUtil::validateDHPublicKey($DHPublicKeySpec* publicKeySpec) {
	$useLocalCurrentObjectStackCache();
	$var($BigInteger, var$0, $nc(publicKeySpec)->getP());
	$var($BigInteger, var$1, publicKeySpec->getG());
	validateDHPublicKey(var$0, var$1, $(publicKeySpec->getY()));
}

void KeyUtil::validateDHPublicKey($BigInteger* p, $BigInteger* g, $BigInteger* y) {
	$useLocalCurrentObjectStackCache();
	$init($BigInteger);
	$var($BigInteger, leftOpen, $BigInteger::ONE);
	$var($BigInteger, rightOpen, $nc(p)->subtract($BigInteger::ONE));
	if ($nc(y)->compareTo(leftOpen) <= 0) {
		$throwNew($InvalidKeyException, "Diffie-Hellman public key is too small"_s);
	}
	if ($nc(y)->compareTo(rightOpen) >= 0) {
		$throwNew($InvalidKeyException, "Diffie-Hellman public key is too large"_s);
	}
	$var($BigInteger, r, p->remainder(y));
	if ($nc(r)->equals($BigInteger::ZERO)) {
		$throwNew($InvalidKeyException, "Invalid Diffie-Hellman parameters"_s);
	}
}

$bytes* KeyUtil::trimZeroes($bytes* b) {
	int32_t i = 0;
	while ((i < $nc(b)->length - 1) && (b->get(i) == 0)) {
		++i;
	}
	if (i == 0) {
		return b;
	}
	$var($bytes, t, $new($bytes, $nc(b)->length - i));
	$System::arraycopy(b, i, t, 0, t->length);
	return t;
}

KeyUtil::KeyUtil() {
}

$Class* KeyUtil::load$($String* name, bool initialize) {
	$loadClass(KeyUtil, name, initialize, &_KeyUtil_ClassInfo_, allocate$KeyUtil);
	return class$;
}

$Class* KeyUtil::class$ = nullptr;

		} // util
	} // security
} // sun