#ifndef _javax_crypto_spec_DESKeySpec_h_
#define _javax_crypto_spec_DESKeySpec_h_
//$ class javax.crypto.spec.DESKeySpec
//$ extends java.security.spec.KeySpec

#include <java/lang/Array.h>
#include <java/security/spec/KeySpec.h>

#pragma push_macro("DES_KEY_LEN")
#undef DES_KEY_LEN
#pragma push_macro("WEAK_KEYS")
#undef WEAK_KEYS

namespace javax {
	namespace crypto {
		namespace spec {

class $import DESKeySpec : public ::java::security::spec::KeySpec {
	$class(DESKeySpec, 0, ::java::security::spec::KeySpec)
public:
	DESKeySpec();
	void init$($bytes* key);
	void init$($bytes* key, int32_t offset);
	virtual $bytes* getKey();
	static bool isParityAdjusted($bytes* key, int32_t offset);
	static bool isWeak($bytes* key, int32_t offset);
	static const int32_t DES_KEY_LEN = 8;
	$bytes* key = nullptr;
	static $Array<int8_t, 2>* WEAK_KEYS;
};

		} // spec
	} // crypto
} // javax

#pragma pop_macro("DES_KEY_LEN")
#pragma pop_macro("WEAK_KEYS")

#endif // _javax_crypto_spec_DESKeySpec_h_