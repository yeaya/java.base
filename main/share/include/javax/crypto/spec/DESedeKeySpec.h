#ifndef _javax_crypto_spec_DESedeKeySpec_h_
#define _javax_crypto_spec_DESedeKeySpec_h_
//$ class javax.crypto.spec.DESedeKeySpec
//$ extends java.security.spec.KeySpec

#include <java/lang/Array.h>
#include <java/security/spec/KeySpec.h>

#pragma push_macro("DES_EDE_KEY_LEN")
#undef DES_EDE_KEY_LEN

namespace javax {
	namespace crypto {
		namespace spec {

class $import DESedeKeySpec : public ::java::security::spec::KeySpec {
	$class(DESedeKeySpec, $NO_CLASS_INIT, ::java::security::spec::KeySpec)
public:
	DESedeKeySpec();
	void init$($bytes* key);
	void init$($bytes* key, int32_t offset);
	virtual $bytes* getKey();
	static bool isParityAdjusted($bytes* key, int32_t offset);
	static const int32_t DES_EDE_KEY_LEN = 24;
	$bytes* key = nullptr;
};

		} // spec
	} // crypto
} // javax

#pragma pop_macro("DES_EDE_KEY_LEN")

#endif // _javax_crypto_spec_DESedeKeySpec_h_