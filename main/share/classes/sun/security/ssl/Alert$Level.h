#ifndef _sun_security_ssl_Alert$Level_h_
#define _sun_security_ssl_Alert$Level_h_
//$ class sun.security.ssl.Alert$Level
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("WARNING")
#undef WARNING
#pragma push_macro("FATAL")
#undef FATAL

namespace sun {
	namespace security {
		namespace ssl {

class Alert$Level : public ::java::lang::Enum {
	$class(Alert$Level, 0, ::java::lang::Enum)
public:
	Alert$Level();
	static $Array<::sun::security::ssl::Alert$Level>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int8_t level, $String* description);
	static $String* nameOf(int8_t level);
	static ::sun::security::ssl::Alert$Level* valueOf($String* name);
	static ::sun::security::ssl::Alert$Level* valueOf(int8_t level);
	static $Array<::sun::security::ssl::Alert$Level>* values();
	static ::sun::security::ssl::Alert$Level* WARNING;
	static ::sun::security::ssl::Alert$Level* FATAL;
	static $Array<::sun::security::ssl::Alert$Level>* $VALUES;
	int8_t level = 0;
	$String* description = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("WARNING")
#pragma pop_macro("FATAL")

#endif // _sun_security_ssl_Alert$Level_h_