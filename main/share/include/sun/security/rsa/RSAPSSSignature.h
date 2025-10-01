#ifndef _sun_security_rsa_RSAPSSSignature_h_
#define _sun_security_rsa_RSAPSSSignature_h_
//$ class sun.security.rsa.RSAPSSSignature
//$ extends java.security.SignatureSpi

#include <java/lang/Array.h>
#include <java/security/SignatureSpi.h>

#pragma push_macro("DIGEST_LENGTHS")
#undef DIGEST_LENGTHS
#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("EIGHT_BYTES_OF_ZEROS")
#undef EIGHT_BYTES_OF_ZEROS

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace security {
		class AlgorithmParameters;
		class MessageDigest;
		class PrivateKey;
		class PublicKey;
		class SecureRandom;
	}
}
namespace java {
	namespace security {
		namespace interfaces {
			class RSAKey;
			class RSAPrivateKey;
			class RSAPublicKey;
		}
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
			class PSSParameterSpec;
		}
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}

namespace sun {
	namespace security {
		namespace rsa {

class $import RSAPSSSignature : public ::java::security::SignatureSpi {
	$class(RSAPSSSignature, 0, ::java::security::SignatureSpi)
public:
	RSAPSSSignature();
	using ::java::security::SignatureSpi::engineInitVerify;
	using ::java::security::SignatureSpi::engineInitSign;
	using ::java::security::SignatureSpi::engineSign;
	using ::java::security::SignatureSpi::engineVerify;
	void init$();
	static void checkKeyLength(::java::security::interfaces::RSAKey* key, int32_t digestLen, int32_t saltLen);
	bool decodeSignature($bytes* mHash, $bytes* em);
	$bytes* encodeSignature($bytes* mHash);
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
	virtual void engineUpdate(::java::nio::ByteBuffer* b) override;
	virtual bool engineVerify($bytes* sigBytes) override;
	void ensureInit();
	$bytes* getDigestValue();
	static int32_t getKeyLengthInBits(::java::security::interfaces::RSAKey* k);
	static bool isCompatible(::java::security::spec::AlgorithmParameterSpec* keyParams, ::java::security::spec::PSSParameterSpec* sigParams);
	bool isDigestEqual($String* stdAlg, $String* givenAlg);
	::java::security::interfaces::RSAKey* isValid(::java::security::interfaces::RSAKey* rsaKey);
	void resetDigest();
	::java::security::spec::PSSParameterSpec* validateSigParams(::java::security::spec::AlgorithmParameterSpec* p);
	static const bool DEBUG = false;
	static $bytes* EIGHT_BYTES_OF_ZEROS;
	static ::java::util::Hashtable* DIGEST_LENGTHS;
	::java::security::MessageDigest* md = nullptr;
	bool digestReset = false;
	::java::security::interfaces::RSAPrivateKey* privKey = nullptr;
	::java::security::interfaces::RSAPublicKey* pubKey = nullptr;
	::java::security::spec::PSSParameterSpec* sigParams = nullptr;
	::java::security::SecureRandom* random = nullptr;
};

		} // rsa
	} // security
} // sun

#pragma pop_macro("DIGEST_LENGTHS")
#pragma pop_macro("DEBUG")
#pragma pop_macro("EIGHT_BYTES_OF_ZEROS")

#endif // _sun_security_rsa_RSAPSSSignature_h_