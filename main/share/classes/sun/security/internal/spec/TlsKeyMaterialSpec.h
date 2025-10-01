#ifndef _sun_security_internal_spec_TlsKeyMaterialSpec_h_
#define _sun_security_internal_spec_TlsKeyMaterialSpec_h_
//$ class sun.security.internal.spec.TlsKeyMaterialSpec
//$ extends java.security.spec.KeySpec
//$ implements javax.crypto.SecretKey

#include <java/lang/Array.h>
#include <java/security/spec/KeySpec.h>
#include <javax/crypto/SecretKey.h>

namespace javax {
	namespace crypto {
		namespace spec {
			class IvParameterSpec;
		}
	}
}

namespace sun {
	namespace security {
		namespace internal {
			namespace spec {

class $export TlsKeyMaterialSpec : public ::java::security::spec::KeySpec, public ::javax::crypto::SecretKey {
	$class(TlsKeyMaterialSpec, $NO_CLASS_INIT, ::java::security::spec::KeySpec, ::javax::crypto::SecretKey)
public:
	TlsKeyMaterialSpec();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::crypto::SecretKey* clientMacKey, ::javax::crypto::SecretKey* serverMacKey);
	void init$(::javax::crypto::SecretKey* clientMacKey, ::javax::crypto::SecretKey* serverMacKey, ::javax::crypto::SecretKey* clientCipherKey, ::javax::crypto::SecretKey* serverCipherKey);
	void init$(::javax::crypto::SecretKey* clientMacKey, ::javax::crypto::SecretKey* serverMacKey, ::javax::crypto::SecretKey* clientCipherKey, ::javax::crypto::spec::IvParameterSpec* clientIv, ::javax::crypto::SecretKey* serverCipherKey, ::javax::crypto::spec::IvParameterSpec* serverIv);
	virtual $String* getAlgorithm() override;
	virtual ::javax::crypto::SecretKey* getClientCipherKey();
	virtual ::javax::crypto::spec::IvParameterSpec* getClientIv();
	virtual ::javax::crypto::SecretKey* getClientMacKey();
	virtual $bytes* getEncoded() override;
	virtual $String* getFormat() override;
	virtual ::javax::crypto::SecretKey* getServerCipherKey();
	virtual ::javax::crypto::spec::IvParameterSpec* getServerIv();
	virtual ::javax::crypto::SecretKey* getServerMacKey();
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x0B480BF039C33324;
	::javax::crypto::SecretKey* clientMacKey = nullptr;
	::javax::crypto::SecretKey* serverMacKey = nullptr;
	::javax::crypto::SecretKey* clientCipherKey = nullptr;
	::javax::crypto::SecretKey* serverCipherKey = nullptr;
	::javax::crypto::spec::IvParameterSpec* clientIv = nullptr;
	::javax::crypto::spec::IvParameterSpec* serverIv = nullptr;
};

			} // spec
		} // internal
	} // security
} // sun

#endif // _sun_security_internal_spec_TlsKeyMaterialSpec_h_