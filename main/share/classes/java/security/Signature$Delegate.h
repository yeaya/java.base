#ifndef _java_security_Signature$Delegate_h_
#define _java_security_Signature$Delegate_h_
//$ class java.security.Signature$Delegate
//$ extends java.security.Signature

#include <java/lang/Array.h>
#include <java/security/Signature.h>

#pragma push_macro("I_PRIV")
#undef I_PRIV
#pragma push_macro("I_PRIV_PARAM_SR")
#undef I_PRIV_PARAM_SR
#pragma push_macro("I_PRIV_SR")
#undef I_PRIV_SR
#pragma push_macro("I_PUB")
#undef I_PUB
#pragma push_macro("I_PUB_PARAM")
#undef I_PUB_PARAM
#pragma push_macro("S_PARAM")
#undef S_PARAM

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace security {
		class AlgorithmParameters;
		class Key;
		class PrivateKey;
		class Provider$Service;
		class PublicKey;
		class SecureRandom;
		class SignatureSpi;
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
	namespace util {
		class Iterator;
	}
}

namespace java {
	namespace security {

class Signature$Delegate : public ::java::security::Signature {
	$class(Signature$Delegate, 0, ::java::security::Signature)
public:
	Signature$Delegate();
	void init$(::java::security::SignatureSpi* sigSpi, $String* algorithm);
	void init$(::java::security::Provider$Service* service, ::java::util::Iterator* iterator, $String* algorithm);
	virtual void chooseFirstProvider() override;
	void chooseProvider(int32_t type, ::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random);
	virtual $Object* clone() override;
	virtual $Object* engineGetParameter($String* param) override;
	virtual ::java::security::AlgorithmParameters* engineGetParameters() override;
	virtual void engineInitSign(::java::security::PrivateKey* privateKey) override;
	virtual void engineInitSign(::java::security::PrivateKey* privateKey, ::java::security::SecureRandom* sr) override;
	virtual void engineInitSign(::java::security::PrivateKey* privateKey, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* sr) override;
	virtual void engineInitVerify(::java::security::PublicKey* publicKey) override;
	virtual void engineInitVerify(::java::security::PublicKey* publicKey, ::java::security::spec::AlgorithmParameterSpec* params) override;
	virtual void engineSetParameter($String* param, Object$* value) override;
	virtual void engineSetParameter(::java::security::spec::AlgorithmParameterSpec* params) override;
	virtual $bytes* engineSign() override;
	virtual int32_t engineSign($bytes* outbuf, int32_t offset, int32_t len) override;
	virtual void engineUpdate(int8_t b) override;
	virtual void engineUpdate($bytes* b, int32_t off, int32_t len) override;
	virtual void engineUpdate(::java::nio::ByteBuffer* data) override;
	virtual bool engineVerify($bytes* sigBytes) override;
	virtual bool engineVerify($bytes* sigBytes, int32_t offset, int32_t length) override;
	static ::java::security::SignatureSpi* newInstance(::java::security::Provider$Service* s);
	static ::java::security::Signature$Delegate* of(::java::security::SignatureSpi* sigSpi, $String* algorithm);
	void tryOperation(::java::security::SignatureSpi* spi, int32_t type, ::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random);
	::java::security::SignatureSpi* sigSpi = nullptr;
	$Object* lock = nullptr;
	::java::security::Provider$Service* firstService = nullptr;
	::java::util::Iterator* serviceIterator = nullptr;
	static int32_t warnCount;
	static const int32_t I_PUB = 1;
	static const int32_t I_PRIV = 2;
	static const int32_t I_PRIV_SR = 3;
	static const int32_t I_PUB_PARAM = 4;
	static const int32_t I_PRIV_PARAM_SR = 5;
	static const int32_t S_PARAM = 6;
};

	} // security
} // java

#pragma pop_macro("I_PRIV")
#pragma pop_macro("I_PRIV_PARAM_SR")
#pragma pop_macro("I_PRIV_SR")
#pragma pop_macro("I_PUB")
#pragma pop_macro("I_PUB_PARAM")
#pragma pop_macro("S_PARAM")

#endif // _java_security_Signature$Delegate_h_