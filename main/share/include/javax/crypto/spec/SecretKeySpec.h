#ifndef _javax_crypto_spec_SecretKeySpec_h_
#define _javax_crypto_spec_SecretKeySpec_h_
//$ class javax.crypto.spec.SecretKeySpec
//$ extends java.security.spec.KeySpec
//$ implements javax.crypto.SecretKey

#include <java/lang/Array.h>
#include <java/security/spec/KeySpec.h>
#include <javax/crypto/SecretKey.h>

namespace javax {
	namespace crypto {
		namespace spec {

class $import SecretKeySpec : public ::java::security::spec::KeySpec, public ::javax::crypto::SecretKey {
	$class(SecretKeySpec, 0, ::java::security::spec::KeySpec, ::javax::crypto::SecretKey)
public:
	SecretKeySpec();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$($bytes* key, $String* algorithm);
	void init$($bytes* key, int32_t offset, int32_t len, $String* algorithm);
	virtual void clear();
	virtual bool equals(Object$* obj) override;
	virtual $String* getAlgorithm() override;
	virtual $bytes* getEncoded() override;
	virtual $String* getFormat() override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x5B470B66E230614D;
	$bytes* key = nullptr;
	$String* algorithm = nullptr;
};

		} // spec
	} // crypto
} // javax

#endif // _javax_crypto_spec_SecretKeySpec_h_