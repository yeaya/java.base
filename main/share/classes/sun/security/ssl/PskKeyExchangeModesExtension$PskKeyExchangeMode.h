#ifndef _sun_security_ssl_PskKeyExchangeModesExtension$PskKeyExchangeMode_h_
#define _sun_security_ssl_PskKeyExchangeModesExtension$PskKeyExchangeMode_h_
//$ class sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeMode
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("PSK_DHE_KE")
#undef PSK_DHE_KE
#pragma push_macro("PSK_KE")
#undef PSK_KE

namespace sun {
	namespace security {
		namespace ssl {

class PskKeyExchangeModesExtension$PskKeyExchangeMode : public ::java::lang::Enum {
	$class(PskKeyExchangeModesExtension$PskKeyExchangeMode, 0, ::java::lang::Enum)
public:
	PskKeyExchangeModesExtension$PskKeyExchangeMode();
	static $Array<::sun::security::ssl::PskKeyExchangeModesExtension$PskKeyExchangeMode>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int8_t id, $String* name);
	static $String* nameOf(int8_t id);
	static ::sun::security::ssl::PskKeyExchangeModesExtension$PskKeyExchangeMode* valueOf($String* name);
	static ::sun::security::ssl::PskKeyExchangeModesExtension$PskKeyExchangeMode* valueOf(int8_t id);
	static $Array<::sun::security::ssl::PskKeyExchangeModesExtension$PskKeyExchangeMode>* values();
	static ::sun::security::ssl::PskKeyExchangeModesExtension$PskKeyExchangeMode* PSK_KE;
	static ::sun::security::ssl::PskKeyExchangeModesExtension$PskKeyExchangeMode* PSK_DHE_KE;
	static $Array<::sun::security::ssl::PskKeyExchangeModesExtension$PskKeyExchangeMode>* $VALUES;
	int8_t id = 0;
	$String* name$ = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("PSK_DHE_KE")
#pragma pop_macro("PSK_KE")

#endif // _sun_security_ssl_PskKeyExchangeModesExtension$PskKeyExchangeMode_h_