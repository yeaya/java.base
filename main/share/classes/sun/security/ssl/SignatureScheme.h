#ifndef _sun_security_ssl_SignatureScheme_h_
#define _sun_security_ssl_SignatureScheme_h_
//$ class sun.security.ssl.SignatureScheme
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("DSA_SHA1")
#undef DSA_SHA1
#pragma push_macro("DSA_SHA224")
#undef DSA_SHA224
#pragma push_macro("DSA_SHA256")
#undef DSA_SHA256
#pragma push_macro("ECDSA_SHA1")
#undef ECDSA_SHA1
#pragma push_macro("ECDSA_SHA224")
#undef ECDSA_SHA224
#pragma push_macro("RSA_MD5")
#undef RSA_MD5
#pragma push_macro("RSA_PKCS1_SHA1")
#undef RSA_PKCS1_SHA1
#pragma push_macro("RSA_PSS_PSS_SHA256")
#undef RSA_PSS_PSS_SHA256
#pragma push_macro("RSA_PSS_PSS_SHA384")
#undef RSA_PSS_PSS_SHA384
#pragma push_macro("RSA_PSS_PSS_SHA512")
#undef RSA_PSS_PSS_SHA512
#pragma push_macro("RSA_PSS_RSAE_SHA256")
#undef RSA_PSS_RSAE_SHA256
#pragma push_macro("RSA_PSS_RSAE_SHA384")
#undef RSA_PSS_RSAE_SHA384
#pragma push_macro("RSA_PSS_RSAE_SHA512")
#undef RSA_PSS_RSAE_SHA512
#pragma push_macro("RSA_SHA224")
#undef RSA_SHA224
#pragma push_macro("SIGNATURE_PRIMITIVE_SET")
#undef SIGNATURE_PRIMITIVE_SET

namespace java {
	namespace security {
		class AlgorithmConstraints;
		class PrivateKey;
		class PublicKey;
		class Signature;
	}
}
namespace java {
	namespace util {
		class Collection;
		class List;
		class Map$Entry;
		class Set;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class NamedGroup;
			class ProtocolVersion;
			class SSLConfiguration;
			class SignatureScheme$SigAlgParamSpec;
			class X509Authentication$X509Possession;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SignatureScheme : public ::java::lang::Enum {
	$class(SignatureScheme, 0, ::java::lang::Enum)
public:
	SignatureScheme();
	static $Array<::sun::security::ssl::SignatureScheme>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t id, $String* name, $String* algorithm, $String* keyAlgorithm, $Array<::sun::security::ssl::ProtocolVersion>* supportedProtocols);
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t id, $String* name, $String* algorithm, $String* keyAlgorithm, int32_t minimalKeySize, $Array<::sun::security::ssl::ProtocolVersion>* supportedProtocols);
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t id, $String* name, $String* algorithm, $String* keyAlgorithm, ::sun::security::ssl::SignatureScheme$SigAlgParamSpec* signAlgParamSpec, int32_t minimalKeySize, $Array<::sun::security::ssl::ProtocolVersion>* supportedProtocols);
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t id, $String* name, $String* algorithm, $String* keyAlgorithm, ::sun::security::ssl::NamedGroup* namedGroup, $Array<::sun::security::ssl::ProtocolVersion>* supportedProtocols);
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t id, $String* name, $String* algorithm, $String* keyAlgorithm, ::sun::security::ssl::SignatureScheme$SigAlgParamSpec* signAlgParams, ::sun::security::ssl::NamedGroup* namedGroup, int32_t minimalKeySize, $Array<::sun::security::ssl::ProtocolVersion>* supportedProtocols, $Array<::sun::security::ssl::ProtocolVersion>* handshakeSupportedProtocols);
	static $StringArray* getAlgorithmNames(::java::util::Collection* schemes);
	static ::sun::security::ssl::SignatureScheme* getPreferableAlgorithm(::java::security::AlgorithmConstraints* constraints, ::java::util::List* schemes, ::sun::security::ssl::SignatureScheme* certScheme, ::sun::security::ssl::ProtocolVersion* version);
	::java::security::Signature* getSigner(::java::security::PrivateKey* privateKey);
	static ::java::util::Map$Entry* getSignerOfPreferableAlgorithm(::java::security::AlgorithmConstraints* constraints, ::java::util::List* schemes, ::sun::security::ssl::X509Authentication$X509Possession* x509Possession, ::sun::security::ssl::ProtocolVersion* version);
	static ::java::util::List* getSupportedAlgorithms(::sun::security::ssl::SSLConfiguration* config, ::java::security::AlgorithmConstraints* constraints, ::java::util::List* activeProtocols);
	static ::java::util::List* getSupportedAlgorithms(::sun::security::ssl::SSLConfiguration* config, ::java::security::AlgorithmConstraints* constraints, ::sun::security::ssl::ProtocolVersion* protocolVersion, $ints* algorithmIds);
	virtual ::java::security::Signature* getVerifier(::java::security::PublicKey* publicKey);
	bool isPermitted(::java::security::AlgorithmConstraints* constraints);
	static $String* nameOf(int32_t id);
	static ::sun::security::ssl::SignatureScheme* nameOf($String* signatureSchemeName);
	static int32_t sizeInRecord();
	static ::sun::security::ssl::SignatureScheme* valueOf($String* name);
	static ::sun::security::ssl::SignatureScheme* valueOf(int32_t id);
	static $Array<::sun::security::ssl::SignatureScheme>* values();
	static ::sun::security::ssl::SignatureScheme* ECDSA_SECP256R1_SHA256;
	static ::sun::security::ssl::SignatureScheme* ECDSA_SECP384R1_SHA384;
	static ::sun::security::ssl::SignatureScheme* ECDSA_SECP521R1_SHA512;
	static ::sun::security::ssl::SignatureScheme* ED25519;
	static ::sun::security::ssl::SignatureScheme* ED448;
	static ::sun::security::ssl::SignatureScheme* RSA_PSS_RSAE_SHA256;
	static ::sun::security::ssl::SignatureScheme* RSA_PSS_RSAE_SHA384;
	static ::sun::security::ssl::SignatureScheme* RSA_PSS_RSAE_SHA512;
	static ::sun::security::ssl::SignatureScheme* RSA_PSS_PSS_SHA256;
	static ::sun::security::ssl::SignatureScheme* RSA_PSS_PSS_SHA384;
	static ::sun::security::ssl::SignatureScheme* RSA_PSS_PSS_SHA512;
	static ::sun::security::ssl::SignatureScheme* RSA_PKCS1_SHA256;
	static ::sun::security::ssl::SignatureScheme* RSA_PKCS1_SHA384;
	static ::sun::security::ssl::SignatureScheme* RSA_PKCS1_SHA512;
	static ::sun::security::ssl::SignatureScheme* DSA_SHA256;
	static ::sun::security::ssl::SignatureScheme* ECDSA_SHA224;
	static ::sun::security::ssl::SignatureScheme* RSA_SHA224;
	static ::sun::security::ssl::SignatureScheme* DSA_SHA224;
	static ::sun::security::ssl::SignatureScheme* ECDSA_SHA1;
	static ::sun::security::ssl::SignatureScheme* RSA_PKCS1_SHA1;
	static ::sun::security::ssl::SignatureScheme* DSA_SHA1;
	static ::sun::security::ssl::SignatureScheme* RSA_MD5;
	static $Array<::sun::security::ssl::SignatureScheme>* $VALUES;
	int32_t id = 0;
	$String* name$ = nullptr;
	$String* algorithm = nullptr;
	$String* keyAlgorithm = nullptr;
	::sun::security::ssl::SignatureScheme$SigAlgParamSpec* signAlgParams = nullptr;
	::sun::security::ssl::NamedGroup* namedGroup = nullptr;
	int32_t minimalKeySize = 0;
	::java::util::List* supportedProtocols = nullptr;
	::java::util::List* handshakeSupportedProtocols = nullptr;
	bool isAvailable = false;
	static $StringArray* hashAlgorithms;
	static $StringArray* signatureAlgorithms;
	static ::java::util::Set* SIGNATURE_PRIMITIVE_SET;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("DSA_SHA1")
#pragma pop_macro("DSA_SHA224")
#pragma pop_macro("DSA_SHA256")
#pragma pop_macro("ECDSA_SHA1")
#pragma pop_macro("ECDSA_SHA224")
#pragma pop_macro("RSA_MD5")
#pragma pop_macro("RSA_PKCS1_SHA1")
#pragma pop_macro("RSA_PSS_PSS_SHA256")
#pragma pop_macro("RSA_PSS_PSS_SHA384")
#pragma pop_macro("RSA_PSS_PSS_SHA512")
#pragma pop_macro("RSA_PSS_RSAE_SHA256")
#pragma pop_macro("RSA_PSS_RSAE_SHA384")
#pragma pop_macro("RSA_PSS_RSAE_SHA512")
#pragma pop_macro("RSA_SHA224")
#pragma pop_macro("SIGNATURE_PRIMITIVE_SET")

#endif // _sun_security_ssl_SignatureScheme_h_