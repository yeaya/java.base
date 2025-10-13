#ifndef _sun_security_rsa_RSAKeyFactory_h_
#define _sun_security_rsa_RSAKeyFactory_h_
//$ class sun.security.rsa.RSAKeyFactory
//$ extends java.security.KeyFactorySpi

#include <java/security/KeyFactorySpi.h>

#pragma push_macro("MAX_MODLEN")
#undef MAX_MODLEN
#pragma push_macro("MAX_MODLEN_RESTRICT_EXP")
#undef MAX_MODLEN_RESTRICT_EXP
#pragma push_macro("MAX_RESTRICTED_EXPLEN")
#undef MAX_RESTRICTED_EXPLEN
#pragma push_macro("MIN_MODLEN")
#undef MIN_MODLEN
#pragma push_macro("PKCS8_KEYSPEC_CLS")
#undef PKCS8_KEYSPEC_CLS
#pragma push_macro("RSA_PRIVCRT_KEYSPEC_CLS")
#undef RSA_PRIVCRT_KEYSPEC_CLS
#pragma push_macro("RSA_PRIV_KEYSPEC_CLS")
#undef RSA_PRIV_KEYSPEC_CLS
#pragma push_macro("RSA_PUB_KEYSPEC_CLS")
#undef RSA_PUB_KEYSPEC_CLS
#pragma push_macro("X509_KEYSPEC_CLS")
#undef X509_KEYSPEC_CLS

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		class Key;
		class PrivateKey;
		class PublicKey;
	}
}
namespace java {
	namespace security {
		namespace interfaces {
			class RSAKey;
		}
	}
}
namespace java {
	namespace security {
		namespace spec {
			class KeySpec;
		}
	}
}
namespace sun {
	namespace security {
		namespace rsa {
			class RSAUtil$KeyType;
		}
	}
}

namespace sun {
	namespace security {
		namespace rsa {

class $export RSAKeyFactory : public ::java::security::KeyFactorySpi {
	$class(RSAKeyFactory, 0, ::java::security::KeyFactorySpi)
public:
	RSAKeyFactory();
	void init$();
	void init$(::sun::security::rsa::RSAUtil$KeyType* type);
	static void checkKeyAlgo(::java::security::Key* key, $String* expectedAlg);
	static void checkKeyLengths(int32_t modulusLen, ::java::math::BigInteger* exponent, int32_t minModulusLen, int32_t maxModulusLen);
	static void checkRSAProviderKeyLengths(int32_t modulusLen, ::java::math::BigInteger* exponent);
	virtual ::java::security::PrivateKey* engineGeneratePrivate(::java::security::spec::KeySpec* keySpec) override;
	virtual ::java::security::PublicKey* engineGeneratePublic(::java::security::spec::KeySpec* keySpec) override;
	virtual ::java::security::spec::KeySpec* engineGetKeySpec(::java::security::Key* key, $Class* keySpec) override;
	virtual ::java::security::Key* engineTranslateKey(::java::security::Key* key) override;
	::java::security::PrivateKey* generatePrivate(::java::security::spec::KeySpec* keySpec);
	::java::security::PublicKey* generatePublic(::java::security::spec::KeySpec* keySpec);
	static ::sun::security::rsa::RSAKeyFactory* getInstance(::sun::security::rsa::RSAUtil$KeyType* type);
	static ::java::security::interfaces::RSAKey* toRSAKey(::java::security::Key* key);
	::java::security::PrivateKey* translatePrivateKey(::java::security::PrivateKey* key);
	::java::security::PublicKey* translatePublicKey(::java::security::PublicKey* key);
	static $Class* RSA_PUB_KEYSPEC_CLS;
	static $Class* RSA_PRIV_KEYSPEC_CLS;
	static $Class* RSA_PRIVCRT_KEYSPEC_CLS;
	static $Class* X509_KEYSPEC_CLS;
	static $Class* PKCS8_KEYSPEC_CLS;
	static const int32_t MIN_MODLEN = 512;
	static const int32_t MAX_MODLEN = 16384;
	::sun::security::rsa::RSAUtil$KeyType* type = nullptr;
	static const int32_t MAX_MODLEN_RESTRICT_EXP = 3072;
	static const int32_t MAX_RESTRICTED_EXPLEN = 64;
	static bool restrictExpLen;
};

		} // rsa
	} // security
} // sun

#pragma pop_macro("MAX_MODLEN")
#pragma pop_macro("MAX_MODLEN_RESTRICT_EXP")
#pragma pop_macro("MAX_RESTRICTED_EXPLEN")
#pragma pop_macro("MIN_MODLEN")
#pragma pop_macro("PKCS8_KEYSPEC_CLS")
#pragma pop_macro("RSA_PRIVCRT_KEYSPEC_CLS")
#pragma pop_macro("RSA_PRIV_KEYSPEC_CLS")
#pragma pop_macro("RSA_PUB_KEYSPEC_CLS")
#pragma pop_macro("X509_KEYSPEC_CLS")

#endif // _sun_security_rsa_RSAKeyFactory_h_