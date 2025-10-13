#ifndef _sun_security_ssl_ContentType_h_
#define _sun_security_ssl_ContentType_h_
//$ class sun.security.ssl.ContentType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ALERT")
#undef ALERT
#pragma push_macro("APPLICATION_DATA")
#undef APPLICATION_DATA
#pragma push_macro("CHANGE_CIPHER_SPEC")
#undef CHANGE_CIPHER_SPEC
#pragma push_macro("HANDSHAKE")
#undef HANDSHAKE
#pragma push_macro("INVALID")
#undef INVALID

namespace sun {
	namespace security {
		namespace ssl {
			class ProtocolVersion;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class ContentType : public ::java::lang::Enum {
	$class(ContentType, 0, ::java::lang::Enum)
public:
	ContentType();
	static $Array<::sun::security::ssl::ContentType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int8_t id, $String* name, $Array<::sun::security::ssl::ProtocolVersion>* supportedProtocols);
	static $String* nameOf(int8_t id);
	static ::sun::security::ssl::ContentType* valueOf($String* name);
	static ::sun::security::ssl::ContentType* valueOf(int8_t id);
	static $Array<::sun::security::ssl::ContentType>* values();
	static ::sun::security::ssl::ContentType* INVALID;
	static ::sun::security::ssl::ContentType* CHANGE_CIPHER_SPEC;
	static ::sun::security::ssl::ContentType* ALERT;
	static ::sun::security::ssl::ContentType* HANDSHAKE;
	static ::sun::security::ssl::ContentType* APPLICATION_DATA;
	static $Array<::sun::security::ssl::ContentType>* $VALUES;
	int8_t id = 0;
	$String* name$ = nullptr;
	$Array<::sun::security::ssl::ProtocolVersion>* supportedProtocols = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("ALERT")
#pragma pop_macro("APPLICATION_DATA")
#pragma pop_macro("CHANGE_CIPHER_SPEC")
#pragma pop_macro("HANDSHAKE")
#pragma pop_macro("INVALID")

#endif // _sun_security_ssl_ContentType_h_