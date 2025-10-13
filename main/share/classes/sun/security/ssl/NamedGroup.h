#ifndef _sun_security_ssl_NamedGroup_h_
#define _sun_security_ssl_NamedGroup_h_
//$ class sun.security.ssl.NamedGroup
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ARBITRARY_CHAR2")
#undef ARBITRARY_CHAR2
#pragma push_macro("ARBITRARY_PRIME")
#undef ARBITRARY_PRIME
#pragma push_macro("KEY_AGREEMENT_PRIMITIVE_SET")
#undef KEY_AGREEMENT_PRIMITIVE_SET

namespace java {
	namespace security {
		class AlgorithmConstraints;
		class AlgorithmParameters;
		class SecureRandom;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
			class ECParameterSpec;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Set;
	}
}
namespace javax {
	namespace crypto {
		namespace spec {
			class DHParameterSpec;
		}
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
			class NamedGroup$ExceptionSupplier;
			class NamedGroup$NamedGroupSpec;
			class NamedGroupPossession;
			class ProtocolVersion;
			class SSLCredentials;
			class SSLKeyDerivation;
			class SSLPossession;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class NamedGroup : public ::java::lang::Enum {
	$class(NamedGroup, 0, ::java::lang::Enum)
public:
	NamedGroup();
	static $Array<::sun::security::ssl::NamedGroup>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t id, $String* name, ::sun::security::ssl::NamedGroup$NamedGroupSpec* namedGroupSpec, $Array<::sun::security::ssl::ProtocolVersion>* supportedProtocols, ::java::security::spec::AlgorithmParameterSpec* keAlgParamSpec);
	virtual ::sun::security::ssl::SSLKeyDerivation* createKeyDerivation(::sun::security::ssl::HandshakeContext* hc);
	virtual ::sun::security::ssl::SSLPossession* createPossession(::java::security::SecureRandom* random);
	virtual ::sun::security::ssl::SSLCredentials* decodeCredentials($bytes* encoded, ::java::security::AlgorithmConstraints* constraints, ::sun::security::ssl::NamedGroup$ExceptionSupplier* onConstraintFail);
	virtual $bytes* encodePossessionPublicKey(::sun::security::ssl::NamedGroupPossession* namedGroupPossession);
	virtual bool isAvailable(::java::util::List* protocolVersions);
	virtual bool isAvailable(::sun::security::ssl::ProtocolVersion* protocolVersion);
	virtual bool isPermitted(::java::security::AlgorithmConstraints* constraints);
	virtual bool isSupported(::java::util::List* cipherSuites);
	static ::sun::security::ssl::NamedGroup* nameOf($String* name);
	static $String* nameOf(int32_t id);
	static ::sun::security::ssl::NamedGroup* valueOf($String* name);
	static ::sun::security::ssl::NamedGroup* valueOf(int32_t id);
	static ::sun::security::ssl::NamedGroup* valueOf(::java::security::spec::ECParameterSpec* params);
	static ::sun::security::ssl::NamedGroup* valueOf(::javax::crypto::spec::DHParameterSpec* params);
	static $Array<::sun::security::ssl::NamedGroup>* values();
	static ::sun::security::ssl::NamedGroup* SECT163_K1;
	static ::sun::security::ssl::NamedGroup* SECT163_R1;
	static ::sun::security::ssl::NamedGroup* SECT163_R2;
	static ::sun::security::ssl::NamedGroup* SECT193_R1;
	static ::sun::security::ssl::NamedGroup* SECT193_R2;
	static ::sun::security::ssl::NamedGroup* SECT233_K1;
	static ::sun::security::ssl::NamedGroup* SECT233_R1;
	static ::sun::security::ssl::NamedGroup* SECT239_K1;
	static ::sun::security::ssl::NamedGroup* SECT283_K1;
	static ::sun::security::ssl::NamedGroup* SECT283_R1;
	static ::sun::security::ssl::NamedGroup* SECT409_K1;
	static ::sun::security::ssl::NamedGroup* SECT409_R1;
	static ::sun::security::ssl::NamedGroup* SECT571_K1;
	static ::sun::security::ssl::NamedGroup* SECT571_R1;
	static ::sun::security::ssl::NamedGroup* SECP160_K1;
	static ::sun::security::ssl::NamedGroup* SECP160_R1;
	static ::sun::security::ssl::NamedGroup* SECP160_R2;
	static ::sun::security::ssl::NamedGroup* SECP192_K1;
	static ::sun::security::ssl::NamedGroup* SECP192_R1;
	static ::sun::security::ssl::NamedGroup* SECP224_K1;
	static ::sun::security::ssl::NamedGroup* SECP224_R1;
	static ::sun::security::ssl::NamedGroup* SECP256_K1;
	static ::sun::security::ssl::NamedGroup* SECP256_R1;
	static ::sun::security::ssl::NamedGroup* SECP384_R1;
	static ::sun::security::ssl::NamedGroup* SECP521_R1;
	static ::sun::security::ssl::NamedGroup* X25519;
	static ::sun::security::ssl::NamedGroup* X448;
	static ::sun::security::ssl::NamedGroup* FFDHE_2048;
	static ::sun::security::ssl::NamedGroup* FFDHE_3072;
	static ::sun::security::ssl::NamedGroup* FFDHE_4096;
	static ::sun::security::ssl::NamedGroup* FFDHE_6144;
	static ::sun::security::ssl::NamedGroup* FFDHE_8192;
	static ::sun::security::ssl::NamedGroup* ARBITRARY_PRIME;
	static ::sun::security::ssl::NamedGroup* ARBITRARY_CHAR2;
	static $Array<::sun::security::ssl::NamedGroup>* $VALUES;
	int32_t id = 0;
	$String* name$ = nullptr;
	::sun::security::ssl::NamedGroup$NamedGroupSpec* spec = nullptr;
	$Array<::sun::security::ssl::ProtocolVersion>* supportedProtocols = nullptr;
	$String* algorithm = nullptr;
	::java::security::spec::AlgorithmParameterSpec* keAlgParamSpec = nullptr;
	::java::security::AlgorithmParameters* keAlgParams = nullptr;
	bool isAvailable$ = false;
	static ::java::util::Set* KEY_AGREEMENT_PRIMITIVE_SET;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("ARBITRARY_CHAR2")
#pragma pop_macro("ARBITRARY_PRIME")
#pragma pop_macro("KEY_AGREEMENT_PRIMITIVE_SET")

#endif // _sun_security_ssl_NamedGroup_h_