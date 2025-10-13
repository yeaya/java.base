#ifndef _sun_security_ssl_Finished$VerifyDataScheme_h_
#define _sun_security_ssl_Finished$VerifyDataScheme_h_
//$ class sun.security.ssl.Finished$VerifyDataScheme
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("SSL30")
#undef SSL30
#pragma push_macro("TLS10")
#undef TLS10
#pragma push_macro("TLS12")
#undef TLS12
#pragma push_macro("TLS13")
#undef TLS13

namespace sun {
	namespace security {
		namespace ssl {
			class Finished$VerifyDataGenerator;
			class HandshakeContext;
			class ProtocolVersion;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class Finished$VerifyDataScheme : public ::java::lang::Enum {
	$class(Finished$VerifyDataScheme, 0, ::java::lang::Enum)
public:
	Finished$VerifyDataScheme();
	static $Array<::sun::security::ssl::Finished$VerifyDataScheme>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* name, ::sun::security::ssl::Finished$VerifyDataGenerator* verifyDataGenerator);
	virtual $bytes* createVerifyData(::sun::security::ssl::HandshakeContext* context, bool isValidation);
	static ::sun::security::ssl::Finished$VerifyDataScheme* valueOf($String* name);
	static ::sun::security::ssl::Finished$VerifyDataScheme* valueOf(::sun::security::ssl::ProtocolVersion* protocolVersion);
	static $Array<::sun::security::ssl::Finished$VerifyDataScheme>* values();
	static ::sun::security::ssl::Finished$VerifyDataScheme* SSL30;
	static ::sun::security::ssl::Finished$VerifyDataScheme* TLS10;
	static ::sun::security::ssl::Finished$VerifyDataScheme* TLS12;
	static ::sun::security::ssl::Finished$VerifyDataScheme* TLS13;
	static $Array<::sun::security::ssl::Finished$VerifyDataScheme>* $VALUES;
	$String* name$ = nullptr;
	::sun::security::ssl::Finished$VerifyDataGenerator* generator = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("SSL30")
#pragma pop_macro("TLS10")
#pragma pop_macro("TLS12")
#pragma pop_macro("TLS13")

#endif // _sun_security_ssl_Finished$VerifyDataScheme_h_