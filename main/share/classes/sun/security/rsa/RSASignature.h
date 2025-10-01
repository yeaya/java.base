#ifndef _sun_security_rsa_RSASignature_h_
#define _sun_security_rsa_RSASignature_h_
//$ class sun.security.rsa.RSASignature
//$ extends java.security.SignatureSpi

#include <java/lang/Array.h>
#include <java/security/SignatureSpi.h>

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
		}
	}
}
namespace sun {
	namespace security {
		namespace rsa {
			class RSAPadding;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class ObjectIdentifier;
		}
	}
}

namespace sun {
	namespace security {
		namespace rsa {

class $export RSASignature : public ::java::security::SignatureSpi {
	$class(RSASignature, $NO_CLASS_INIT, ::java::security::SignatureSpi)
public:
	RSASignature();
	using ::java::security::SignatureSpi::engineInitVerify;
	using ::java::security::SignatureSpi::engineInitSign;
	using ::java::security::SignatureSpi::engineSign;
	using ::java::security::SignatureSpi::engineVerify;
	void init$($String* algorithm, ::sun::security::util::ObjectIdentifier* digestOID, int32_t oidLength);
	static $bytes* decodeSignature(::sun::security::util::ObjectIdentifier* oid, $bytes* sig);
	static $bytes* encodeSignature(::sun::security::util::ObjectIdentifier* oid, $bytes* digest);
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
	$bytes* getDigestValue();
	void initCommon(::java::security::interfaces::RSAKey* rsaKey, ::java::security::SecureRandom* random);
	void resetDigest();
	static const int32_t baseLength = 8;
	::sun::security::util::ObjectIdentifier* digestOID = nullptr;
	int32_t encodedLength = 0;
	::java::security::MessageDigest* md = nullptr;
	bool digestReset = false;
	::java::security::interfaces::RSAPrivateKey* privateKey = nullptr;
	::java::security::interfaces::RSAPublicKey* publicKey = nullptr;
	::sun::security::rsa::RSAPadding* padding = nullptr;
};

		} // rsa
	} // security
} // sun

#endif // _sun_security_rsa_RSASignature_h_