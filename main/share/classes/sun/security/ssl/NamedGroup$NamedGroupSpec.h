#ifndef _sun_security_ssl_NamedGroup$NamedGroupSpec_h_
#define _sun_security_ssl_NamedGroup$NamedGroupSpec_h_
//$ class sun.security.ssl.NamedGroup$NamedGroupSpec
//$ extends java.lang.Enum
//$ implements sun.security.ssl.NamedGroup$NamedGroupScheme

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <sun/security/ssl/NamedGroup$NamedGroupScheme.h>

#pragma push_macro("NAMED_GROUP_ARBITRARY")
#undef NAMED_GROUP_ARBITRARY
#pragma push_macro("NAMED_GROUP_ECDHE")
#undef NAMED_GROUP_ECDHE
#pragma push_macro("NAMED_GROUP_FFDHE")
#undef NAMED_GROUP_FFDHE
#pragma push_macro("NAMED_GROUP_NONE")
#undef NAMED_GROUP_NONE
#pragma push_macro("NAMED_GROUP_XDH")
#undef NAMED_GROUP_XDH

namespace java {
	namespace security {
		class AlgorithmConstraints;
		class SecureRandom;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
			class NamedGroup;
			class NamedGroup$ExceptionSupplier;
			class NamedGroupPossession;
			class SSLCredentials;
			class SSLKeyDerivation;
			class SSLPossession;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class NamedGroup$NamedGroupSpec : public ::java::lang::Enum, public ::sun::security::ssl::NamedGroup$NamedGroupScheme {
	$class(NamedGroup$NamedGroupSpec, 0, ::java::lang::Enum, ::sun::security::ssl::NamedGroup$NamedGroupScheme)
public:
	NamedGroup$NamedGroupSpec();
	static $Array<::sun::security::ssl::NamedGroup$NamedGroupSpec>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* algorithm, ::sun::security::ssl::NamedGroup$NamedGroupScheme* scheme);
	static bool arrayContains($Array<::sun::security::ssl::NamedGroup$NamedGroupSpec>* namedGroupTypes, ::sun::security::ssl::NamedGroup$NamedGroupSpec* namedGroupType);
	virtual ::sun::security::ssl::SSLKeyDerivation* createKeyDerivation(::sun::security::ssl::HandshakeContext* hc) override;
	virtual ::sun::security::ssl::SSLPossession* createPossession(::sun::security::ssl::NamedGroup* ng, ::java::security::SecureRandom* random) override;
	virtual ::sun::security::ssl::SSLCredentials* decodeCredentials(::sun::security::ssl::NamedGroup* ng, $bytes* encoded, ::java::security::AlgorithmConstraints* constraints, ::sun::security::ssl::NamedGroup$ExceptionSupplier* onConstraintFail) override;
	virtual $bytes* encodePossessionPublicKey(::sun::security::ssl::NamedGroupPossession* namedGroupPossession) override;
	virtual bool isSupported(::java::util::List* cipherSuites);
	virtual $String* toString() override;
	static ::sun::security::ssl::NamedGroup$NamedGroupSpec* valueOf($String* name);
	static $Array<::sun::security::ssl::NamedGroup$NamedGroupSpec>* values();
	static ::sun::security::ssl::NamedGroup$NamedGroupSpec* NAMED_GROUP_ECDHE;
	static ::sun::security::ssl::NamedGroup$NamedGroupSpec* NAMED_GROUP_FFDHE;
	static ::sun::security::ssl::NamedGroup$NamedGroupSpec* NAMED_GROUP_XDH;
	static ::sun::security::ssl::NamedGroup$NamedGroupSpec* NAMED_GROUP_ARBITRARY;
	static ::sun::security::ssl::NamedGroup$NamedGroupSpec* NAMED_GROUP_NONE;
	static $Array<::sun::security::ssl::NamedGroup$NamedGroupSpec>* $VALUES;
	$String* algorithm = nullptr;
	::sun::security::ssl::NamedGroup$NamedGroupScheme* scheme = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("NAMED_GROUP_ARBITRARY")
#pragma pop_macro("NAMED_GROUP_ECDHE")
#pragma pop_macro("NAMED_GROUP_FFDHE")
#pragma pop_macro("NAMED_GROUP_NONE")
#pragma pop_macro("NAMED_GROUP_XDH")

#endif // _sun_security_ssl_NamedGroup$NamedGroupSpec_h_