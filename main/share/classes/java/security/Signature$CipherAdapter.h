#ifndef _java_security_Signature$CipherAdapter_h_
#define _java_security_Signature$CipherAdapter_h_
//$ class java.security.Signature$CipherAdapter
//$ extends java.security.SignatureSpi

#include <java/lang/Array.h>
#include <java/security/SignatureSpi.h>

namespace java {
	namespace io {
		class ByteArrayOutputStream;
	}
}
namespace java {
	namespace security {
		class PrivateKey;
		class PublicKey;
		class SecureRandom;
	}
}
namespace javax {
	namespace crypto {
		class Cipher;
	}
}

namespace java {
	namespace security {

class Signature$CipherAdapter : public ::java::security::SignatureSpi {
	$class(Signature$CipherAdapter, $NO_CLASS_INIT, ::java::security::SignatureSpi)
public:
	Signature$CipherAdapter();
	using ::java::security::SignatureSpi::engineInitVerify;
	using ::java::security::SignatureSpi::engineInitSign;
	using ::java::security::SignatureSpi::engineUpdate;
	using ::java::security::SignatureSpi::engineSign;
	using ::java::security::SignatureSpi::engineVerify;
	using ::java::security::SignatureSpi::engineSetParameter;
	void init$(::javax::crypto::Cipher* cipher);
	virtual $Object* engineGetParameter($String* param) override;
	virtual void engineInitSign(::java::security::PrivateKey* privateKey) override;
	virtual void engineInitSign(::java::security::PrivateKey* privateKey, ::java::security::SecureRandom* random) override;
	virtual void engineInitVerify(::java::security::PublicKey* publicKey) override;
	virtual void engineSetParameter($String* param, Object$* value) override;
	virtual $bytes* engineSign() override;
	virtual void engineUpdate(int8_t b) override;
	virtual void engineUpdate($bytes* b, int32_t off, int32_t len) override;
	virtual bool engineVerify($bytes* sigBytes) override;
	::javax::crypto::Cipher* cipher = nullptr;
	::java::io::ByteArrayOutputStream* data = nullptr;
};

	} // security
} // java

#endif // _java_security_Signature$CipherAdapter_h_