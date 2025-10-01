#ifndef _javax_crypto_spec_PBEKeySpec_h_
#define _javax_crypto_spec_PBEKeySpec_h_
//$ class javax.crypto.spec.PBEKeySpec
//$ extends java.security.spec.KeySpec

#include <java/lang/Array.h>
#include <java/security/spec/KeySpec.h>

namespace javax {
	namespace crypto {
		namespace spec {

class $export PBEKeySpec : public ::java::security::spec::KeySpec {
	$class(PBEKeySpec, $NO_CLASS_INIT, ::java::security::spec::KeySpec)
public:
	PBEKeySpec();
	void init$($chars* password);
	void init$($chars* password, $bytes* salt, int32_t iterationCount, int32_t keyLength);
	void init$($chars* password, $bytes* salt, int32_t iterationCount);
	void clearPassword();
	int32_t getIterationCount();
	int32_t getKeyLength();
	$chars* getPassword();
	$bytes* getSalt();
	$chars* password = nullptr;
	$bytes* salt = nullptr;
	int32_t iterationCount = 0;
	int32_t keyLength = 0;
};

		} // spec
	} // crypto
} // javax

#endif // _javax_crypto_spec_PBEKeySpec_h_