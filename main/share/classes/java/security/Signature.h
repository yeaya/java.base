#ifndef _java_security_Signature_h_
#define _java_security_Signature_h_
//$ class java.security.Signature
//$ extends java.security.SignatureSpi

#include <java/lang/Array.h>
#include <java/security/SignatureSpi.h>

#pragma push_macro("RSA_CIPHER")
#undef RSA_CIPHER
#pragma push_macro("RSA_SIGNATURE")
#undef RSA_SIGNATURE
#pragma push_macro("SIGN")
#undef SIGN
#pragma push_macro("UNINITIALIZED")
#undef UNINITIALIZED
#pragma push_macro("VERIFY")
#undef VERIFY

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace security {
		class AlgorithmParameters;
		class PrivateKey;
		class Provider;
		class Provider$Service;
		class PublicKey;
		class SecureRandom;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class Certificate;
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
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace sun {
	namespace security {
		namespace jca {
			class GetInstance$Instance;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}

namespace java {
	namespace security {

class $export Signature : public ::java::security::SignatureSpi {
	$class(Signature, 0, ::java::security::SignatureSpi)
public:
	Signature();
	void init$($String* algorithm);
	virtual void chooseFirstProvider();
	virtual $Object* clone() override;
	$String* getAlgorithm();
	static ::java::security::Signature* getInstance($String* algorithm);
	static ::java::security::Signature* getInstance(::sun::security::jca::GetInstance$Instance* instance, $String* algorithm);
	static ::java::security::Signature* getInstance($String* algorithm, $String* provider);
	static ::java::security::Signature* getInstance($String* algorithm, ::java::security::Provider* provider);
	static ::java::security::Signature* getInstanceRSA(::java::security::Provider* p);
	$Object* getParameter($String* param);
	::java::security::AlgorithmParameters* getParameters();
	::java::security::Provider* getProvider();
	$String* getProviderName();
	static ::java::security::PublicKey* getPublicKeyFromCert(::java::security::cert::Certificate* cert);
	void initSign(::java::security::PrivateKey* privateKey);
	void initSign(::java::security::PrivateKey* privateKey, ::java::security::SecureRandom* random);
	void initSign(::java::security::PrivateKey* privateKey, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random);
	void initVerify(::java::security::PublicKey* publicKey);
	void initVerify(::java::security::PublicKey* publicKey, ::java::security::spec::AlgorithmParameterSpec* params);
	void initVerify(::java::security::cert::Certificate* certificate);
	void initVerify(::java::security::cert::Certificate* certificate, ::java::security::spec::AlgorithmParameterSpec* params);
	static bool isSpi(::java::security::Provider$Service* s);
	void setParameter($String* param, Object$* value);
	void setParameter(::java::security::spec::AlgorithmParameterSpec* params);
	$bytes* sign();
	int32_t sign($bytes* outbuf, int32_t offset, int32_t len);
	virtual $String* toString() override;
	void update(int8_t b);
	void update($bytes* data);
	void update($bytes* data, int32_t off, int32_t len);
	void update(::java::nio::ByteBuffer* data);
	bool verify($bytes* signature);
	bool verify($bytes* signature, int32_t offset, int32_t length);
	static ::sun::security::util::Debug* debug;
	static ::sun::security::util::Debug* pdebug;
	static bool skipDebug;
	$String* algorithm = nullptr;
	::java::security::Provider* provider = nullptr;
	static const int32_t UNINITIALIZED = 0;
	static const int32_t SIGN = 2;
	static const int32_t VERIFY = 3;
	int32_t state = 0;
	static $String* RSA_SIGNATURE;
	static $String* RSA_CIPHER;
	static ::java::util::List* rsaIds;
	static ::java::util::Map* signatureInfo;
};

	} // security
} // java

#pragma pop_macro("RSA_CIPHER")
#pragma pop_macro("RSA_SIGNATURE")
#pragma pop_macro("SIGN")
#pragma pop_macro("UNINITIALIZED")
#pragma pop_macro("VERIFY")

#endif // _java_security_Signature_h_