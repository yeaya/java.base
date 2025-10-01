#ifndef _sun_security_util_KeyUtil_h_
#define _sun_security_util_KeyUtil_h_
//$ class sun.security.util.KeyUtil
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		class AlgorithmParameters;
		class Key;
		class SecureRandom;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class KeySpec;
		}
	}
}
namespace javax {
	namespace crypto {
		namespace interfaces {
			class DHPublicKey;
		}
	}
}
namespace javax {
	namespace crypto {
		namespace spec {
			class DHPublicKeySpec;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $export KeyUtil : public ::java::lang::Object {
	$class(KeyUtil, $NO_CLASS_INIT, ::java::lang::Object)
public:
	KeyUtil();
	void init$();
	static $bytes* checkTlsPreMasterSecretKey(int32_t clientVersion, int32_t serverVersion, ::java::security::SecureRandom* random, $bytes* encoded, bool isFailOver);
	static int32_t getKeySize(::java::security::Key* key);
	static int32_t getKeySize(::java::security::AlgorithmParameters* parameters);
	static bool isOracleJCEProvider($String* providerName);
	static $bytes* trimZeroes($bytes* b);
	static void validate(::java::security::Key* key);
	static void validate(::java::security::spec::KeySpec* keySpec);
	static void validateDHPublicKey(::javax::crypto::interfaces::DHPublicKey* publicKey);
	static void validateDHPublicKey(::javax::crypto::spec::DHPublicKeySpec* publicKeySpec);
	static void validateDHPublicKey(::java::math::BigInteger* p, ::java::math::BigInteger* g, ::java::math::BigInteger* y);
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_KeyUtil_h_