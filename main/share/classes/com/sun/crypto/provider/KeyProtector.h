#ifndef _com_sun_crypto_provider_KeyProtector_h_
#define _com_sun_crypto_provider_KeyProtector_h_
//$ class com.sun.crypto.provider.KeyProtector
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_ITERATION_COUNT")
#undef DEFAULT_ITERATION_COUNT
#pragma push_macro("DIGEST_LEN")
#undef DIGEST_LEN
#pragma push_macro("ITERATION_COUNT")
#undef ITERATION_COUNT
#pragma push_macro("MAX_ITERATION_COUNT")
#undef MAX_ITERATION_COUNT
#pragma push_macro("MIN_ITERATION_COUNT")
#undef MIN_ITERATION_COUNT
#pragma push_macro("SALT_LEN")
#undef SALT_LEN

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {
				class EncryptedPrivateKeyInfo;
			}
		}
	}
}
namespace java {
	namespace security {
		class Key;
		class PrivateKey;
	}
}
namespace javax {
	namespace crypto {
		class SealedObject;
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class KeyProtector : public ::java::lang::Object {
	$class(KeyProtector, 0, ::java::lang::Object)
public:
	KeyProtector();
	void init$($chars* password);
	$bytes* protect(::java::security::PrivateKey* key);
	::java::security::Key* recover(::com::sun::crypto::provider::EncryptedPrivateKeyInfo* encrInfo);
	$bytes* recover($bytes* protectedKey);
	::javax::crypto::SealedObject* seal(::java::security::Key* key);
	::java::security::Key* unseal(::javax::crypto::SealedObject* so, int32_t maxLength);
	static const int32_t MAX_ITERATION_COUNT = 0x004C4B40;
	static const int32_t MIN_ITERATION_COUNT = 10000;
	static const int32_t DEFAULT_ITERATION_COUNT = 0x00030D40;
	static const int32_t SALT_LEN = 20;
	static const int32_t DIGEST_LEN = 20;
	static int32_t ITERATION_COUNT;
	$chars* password = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("DEFAULT_ITERATION_COUNT")
#pragma pop_macro("DIGEST_LEN")
#pragma pop_macro("ITERATION_COUNT")
#pragma pop_macro("MAX_ITERATION_COUNT")
#pragma pop_macro("MIN_ITERATION_COUNT")
#pragma pop_macro("SALT_LEN")

#endif // _com_sun_crypto_provider_KeyProtector_h_