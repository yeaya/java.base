#ifndef _java_security_SignatureSpi_h_
#define _java_security_SignatureSpi_h_
//$ class java.security.SignatureSpi
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace security {
		class AlgorithmParameters;
		class PrivateKey;
		class PublicKey;
		class SecureRandom;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}

namespace java {
	namespace security {

class $import SignatureSpi : public ::java::lang::Object {
	$class(SignatureSpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SignatureSpi();
	void init$();
	virtual $Object* clone() override;
	virtual $Object* engineGetParameter($String* param) {return nullptr;}
	virtual ::java::security::AlgorithmParameters* engineGetParameters();
	virtual void engineInitSign(::java::security::PrivateKey* privateKey) {}
	virtual void engineInitSign(::java::security::PrivateKey* privateKey, ::java::security::SecureRandom* random);
	virtual void engineInitSign(::java::security::PrivateKey* privateKey, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random);
	virtual void engineInitVerify(::java::security::PublicKey* publicKey) {}
	virtual void engineInitVerify(::java::security::PublicKey* publicKey, ::java::security::spec::AlgorithmParameterSpec* params);
	virtual void engineSetParameter($String* param, Object$* value) {}
	virtual void engineSetParameter(::java::security::spec::AlgorithmParameterSpec* params);
	virtual $bytes* engineSign() {return nullptr;}
	virtual int32_t engineSign($bytes* outbuf, int32_t offset, int32_t len);
	virtual void engineUpdate(int8_t b) {}
	virtual void engineUpdate($bytes* b, int32_t off, int32_t len) {}
	virtual void engineUpdate(::java::nio::ByteBuffer* input);
	virtual bool engineVerify($bytes* sigBytes) {return false;}
	virtual bool engineVerify($bytes* sigBytes, int32_t offset, int32_t length);
	::java::security::SecureRandom* appRandom = nullptr;
};

	} // security
} // java

#endif // _java_security_SignatureSpi_h_