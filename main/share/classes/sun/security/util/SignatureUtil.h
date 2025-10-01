#ifndef _sun_security_util_SignatureUtil_h_
#define _sun_security_util_SignatureUtil_h_
//$ class sun.security.util.SignatureUtil
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class AlgorithmParameters;
		class Key;
		class PrivateKey;
		class Provider;
		class PublicKey;
		class SecureRandom;
		class Signature;
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
namespace sun {
	namespace security {
		namespace x509 {
			class AlgorithmId;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $export SignatureUtil : public ::java::lang::Object {
	$class(SignatureUtil, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SignatureUtil();
	void init$();
	static ::java::security::Signature* autoInitInternal($String* alg, ::java::security::Key* key, ::java::security::Signature* s);
	static void checkKeyAndSigAlgMatch(::java::security::PrivateKey* key, $String* sAlg);
	static $String* checkName($String* algName);
	static ::java::security::AlgorithmParameters* createAlgorithmParameters($String* algName, $bytes* paramBytes);
	static $String* ecStrength(int32_t bitLength);
	static $String* extractDigestAlgFromDwithE($String* signatureAlgorithm);
	static $String* extractKeyAlgFromDwithE($String* signatureAlgorithm);
	static ::java::security::Signature* fromKey($String* sigAlg, ::java::security::Key* key, $String* provider);
	static ::java::security::Signature* fromKey($String* sigAlg, ::java::security::Key* key, ::java::security::Provider* provider);
	static ::sun::security::x509::AlgorithmId* fromSignature(::java::security::Signature* sigEngine, ::java::security::PrivateKey* key);
	static ::java::security::spec::AlgorithmParameterSpec* getDefaultParamSpec($String* sigAlg, ::java::security::Key* k);
	static $String* getDefaultSigAlgForKey(::java::security::PrivateKey* k);
	static ::sun::security::x509::AlgorithmId* getDigestAlgInPkcs7SignerInfo(::java::security::Signature* signer, $String* sigalg, ::java::security::PrivateKey* privateKey, bool directsign);
	static ::java::security::spec::AlgorithmParameterSpec* getParamSpec($String* sigName, ::java::security::AlgorithmParameters* params);
	static ::java::security::spec::AlgorithmParameterSpec* getParamSpec($String* sigName, $bytes* paramBytes);
	static $String* ifcFfcStrength(int32_t bitLength);
	static void initSignWithParam(::java::security::Signature* s, ::java::security::PrivateKey* key, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* sr);
	static void initVerifyWithParam(::java::security::Signature* s, ::java::security::PublicKey* key, ::java::security::spec::AlgorithmParameterSpec* params);
	static void initVerifyWithParam(::java::security::Signature* s, ::java::security::cert::Certificate* cert, ::java::security::spec::AlgorithmParameterSpec* params);
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_SignatureUtil_h_