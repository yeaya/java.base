#ifndef _sun_security_ssl_ClientAuthType_h_
#define _sun_security_ssl_ClientAuthType_h_
//$ class sun.security.ssl.ClientAuthType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CLIENT_AUTH_NONE")
#undef CLIENT_AUTH_NONE
#pragma push_macro("CLIENT_AUTH_REQUESTED")
#undef CLIENT_AUTH_REQUESTED
#pragma push_macro("CLIENT_AUTH_REQUIRED")
#undef CLIENT_AUTH_REQUIRED

namespace sun {
	namespace security {
		namespace ssl {

class ClientAuthType : public ::java::lang::Enum {
	$class(ClientAuthType, 0, ::java::lang::Enum)
public:
	ClientAuthType();
	static $Array<::sun::security::ssl::ClientAuthType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::security::ssl::ClientAuthType* valueOf($String* name);
	static $Array<::sun::security::ssl::ClientAuthType>* values();
	static ::sun::security::ssl::ClientAuthType* CLIENT_AUTH_NONE;
	static ::sun::security::ssl::ClientAuthType* CLIENT_AUTH_REQUESTED;
	static ::sun::security::ssl::ClientAuthType* CLIENT_AUTH_REQUIRED;
	static $Array<::sun::security::ssl::ClientAuthType>* $VALUES;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("CLIENT_AUTH_NONE")
#pragma pop_macro("CLIENT_AUTH_REQUESTED")
#pragma pop_macro("CLIENT_AUTH_REQUIRED")

#endif // _sun_security_ssl_ClientAuthType_h_