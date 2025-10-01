#ifndef _sun_security_ssl_RSASignature_h_
#define _sun_security_ssl_RSASignature_h_
//$ class sun.security.ssl.RSASignature
//$ extends java.security.SignatureSpi

#include <java/lang/Array.h>
#include <java/security/SignatureSpi.h>

namespace java {
	namespace security {
		class AlgorithmParameters;
		class MessageDigest;
		class PrivateKey;
		class PublicKey;
		class SecureRandom;
		class Signature;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class RSASignature : public ::java::security::SignatureSpi {
	$class(RSASignature, $NO_CLASS_INIT, ::java::security::SignatureSpi)
public:
	RSASignature();
	using ::java::security::SignatureSpi::engineInitVerify;
	using ::java::security::SignatureSpi::engineInitSign;
	using ::java::security::SignatureSpi::engineUpdate;
	using ::java::security::SignatureSpi::engineSign;
	void init$();
	virtual $Object* engineGetParameter($String* param) override;
	virtual ::java::security::AlgorithmParameters* engineGetParameters() override;
	virtual void engineInitSign(::java::security::PrivateKey* privateKey) override;
	virtual void engineInitSign(::java::security::PrivateKey* privateKey, ::java::security::SecureRandom* random) override;
	virtual void engineInitVerify(::java::security::PublicKey* publicKey) override;
	virtual void engineSetParameter($String* param, Object$* value) override;
	virtual void engineSetParameter(::java::security::spec::AlgorithmParameterSpec* params) override;
	virtual $bytes* engineSign() override;
	virtual void engineUpdate(int8_t b) override;
	virtual void engineUpdate($bytes* b, int32_t off, int32_t len) override;
	virtual bool engineVerify($bytes* sigBytes) override;
	virtual bool engineVerify($bytes* sigBytes, int32_t offset, int32_t length) override;
	$bytes* getDigest();
	static ::java::security::Signature* getInstance();
	::java::security::Signature* rawRsa = nullptr;
	::java::security::MessageDigest* mdMD5 = nullptr;
	::java::security::MessageDigest* mdSHA = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_RSASignature_h_