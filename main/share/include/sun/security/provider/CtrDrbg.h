#ifndef _sun_security_provider_CtrDrbg_h_
#define _sun_security_provider_CtrDrbg_h_
//$ class sun.security.provider.CtrDrbg
//$ extends sun.security.provider.AbstractDrbg

#include <java/lang/Array.h>
#include <sun/security/provider/AbstractDrbg.h>

#pragma push_macro("AES_LIMIT")
#undef AES_LIMIT

namespace java {
	namespace security {
		class SecureRandomParameters;
	}
}
namespace javax {
	namespace crypto {
		class Cipher;
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $import CtrDrbg : public ::sun::security::provider::AbstractDrbg {
	$class(CtrDrbg, 0, ::sun::security::provider::AbstractDrbg)
public:
	CtrDrbg();
	void init$(::java::security::SecureRandomParameters* params);
	static void addOne($bytes* data, int32_t len);
	static int32_t alg2strength($String* algorithm);
	$bytes* bcc($bytes* k, $Array<int8_t, 2>* data);
	virtual void chooseAlgorithmAndStrength() override;
	$bytes* df($bytes* input);
	virtual void generateAlgorithm($bytes* result, $bytes* additionalInput) override;
	virtual void initEngine() override;
	virtual void instantiateAlgorithm($bytes* ei) override;
	virtual void reseedAlgorithm($bytes* ei, $bytes* additionalInput) override;
	void status();
	virtual $String* toString() override;
	void update($bytes* input);
	static int32_t AES_LIMIT;
	::javax::crypto::Cipher* cipher = nullptr;
	$String* cipherAlg = nullptr;
	$String* keyAlg = nullptr;
	int32_t ctrLen = 0;
	int32_t blockLen = 0;
	int32_t keyLen = 0;
	int32_t seedLen = 0;
	$bytes* v = nullptr;
	$bytes* k = nullptr;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("AES_LIMIT")

#endif // _sun_security_provider_CtrDrbg_h_