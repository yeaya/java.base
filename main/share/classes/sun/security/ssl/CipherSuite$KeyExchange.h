#ifndef _sun_security_ssl_CipherSuite$KeyExchange_h_
#define _sun_security_ssl_CipherSuite$KeyExchange_h_
//$ class sun.security.ssl.CipherSuite$KeyExchange
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("K_ECDHE_ECDSA")
#undef K_ECDHE_ECDSA
#pragma push_macro("K_NULL")
#undef K_NULL
#pragma push_macro("K_RSA")
#undef K_RSA
#pragma push_macro("K_DH_DSS")
#undef K_DH_DSS
#pragma push_macro("K_DH_ANON")
#undef K_DH_ANON
#pragma push_macro("K_DHE_DSS_EXPORT")
#undef K_DHE_DSS_EXPORT
#pragma push_macro("K_DHE_DSS")
#undef K_DHE_DSS
#pragma push_macro("K_DH_RSA")
#undef K_DH_RSA
#pragma push_macro("K_DH_ANON_EXPORT")
#undef K_DH_ANON_EXPORT
#pragma push_macro("K_ECDHE_RSA")
#undef K_ECDHE_RSA
#pragma push_macro("K_ECDH_ANON")
#undef K_ECDH_ANON
#pragma push_macro("K_DHE_RSA")
#undef K_DHE_RSA
#pragma push_macro("K_SCSV")
#undef K_SCSV
#pragma push_macro("K_ECDH_ECDSA")
#undef K_ECDH_ECDSA
#pragma push_macro("K_RSA_EXPORT")
#undef K_RSA_EXPORT
#pragma push_macro("K_DHE_RSA_EXPORT")
#undef K_DHE_RSA_EXPORT
#pragma push_macro("K_ECDH_RSA")
#undef K_ECDH_RSA

namespace sun {
	namespace security {
		namespace ssl {
			class NamedGroup$NamedGroupSpec;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class CipherSuite$KeyExchange : public ::java::lang::Enum {
	$class(CipherSuite$KeyExchange, 0, ::java::lang::Enum)
public:
	CipherSuite$KeyExchange();
	static $Array<::sun::security::ssl::CipherSuite$KeyExchange>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* name, bool allowed, bool isAnonymous, $Array<::sun::security::ssl::NamedGroup$NamedGroupSpec>* groupTypes);
	virtual bool isAvailable();
	virtual $String* toString() override;
	static ::sun::security::ssl::CipherSuite$KeyExchange* valueOf($String* name);
	static $Array<::sun::security::ssl::CipherSuite$KeyExchange>* values();
	static ::sun::security::ssl::CipherSuite$KeyExchange* K_NULL;
	static ::sun::security::ssl::CipherSuite$KeyExchange* K_RSA;
	static ::sun::security::ssl::CipherSuite$KeyExchange* K_RSA_EXPORT;
	static ::sun::security::ssl::CipherSuite$KeyExchange* K_DH_RSA;
	static ::sun::security::ssl::CipherSuite$KeyExchange* K_DH_DSS;
	static ::sun::security::ssl::CipherSuite$KeyExchange* K_DHE_DSS;
	static ::sun::security::ssl::CipherSuite$KeyExchange* K_DHE_DSS_EXPORT;
	static ::sun::security::ssl::CipherSuite$KeyExchange* K_DHE_RSA;
	static ::sun::security::ssl::CipherSuite$KeyExchange* K_DHE_RSA_EXPORT;
	static ::sun::security::ssl::CipherSuite$KeyExchange* K_DH_ANON;
	static ::sun::security::ssl::CipherSuite$KeyExchange* K_DH_ANON_EXPORT;
	static ::sun::security::ssl::CipherSuite$KeyExchange* K_ECDH_ECDSA;
	static ::sun::security::ssl::CipherSuite$KeyExchange* K_ECDH_RSA;
	static ::sun::security::ssl::CipherSuite$KeyExchange* K_ECDHE_ECDSA;
	static ::sun::security::ssl::CipherSuite$KeyExchange* K_ECDHE_RSA;
	static ::sun::security::ssl::CipherSuite$KeyExchange* K_ECDH_ANON;
	static ::sun::security::ssl::CipherSuite$KeyExchange* K_SCSV;
	static $Array<::sun::security::ssl::CipherSuite$KeyExchange>* $VALUES;
	$String* name$ = nullptr;
	bool allowed = false;
	$Array<::sun::security::ssl::NamedGroup$NamedGroupSpec>* groupTypes = nullptr;
	bool alwaysAvailable = false;
	bool isAnonymous = false;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("K_ECDHE_ECDSA")
#pragma pop_macro("K_NULL")
#pragma pop_macro("K_RSA")
#pragma pop_macro("K_DH_DSS")
#pragma pop_macro("K_DH_ANON")
#pragma pop_macro("K_DHE_DSS_EXPORT")
#pragma pop_macro("K_DHE_DSS")
#pragma pop_macro("K_DH_RSA")
#pragma pop_macro("K_DH_ANON_EXPORT")
#pragma pop_macro("K_ECDHE_RSA")
#pragma pop_macro("K_ECDH_ANON")
#pragma pop_macro("K_DHE_RSA")
#pragma pop_macro("K_SCSV")
#pragma pop_macro("K_ECDH_ECDSA")
#pragma pop_macro("K_RSA_EXPORT")
#pragma pop_macro("K_DHE_RSA_EXPORT")
#pragma pop_macro("K_ECDH_RSA")

#endif // _sun_security_ssl_CipherSuite$KeyExchange_h_