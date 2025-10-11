#ifndef _sun_security_ssl_MaxFragExtension$MaxFragLenEnum_h_
#define _sun_security_ssl_MaxFragExtension$MaxFragLenEnum_h_
//$ class sun.security.ssl.MaxFragExtension$MaxFragLenEnum
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

namespace sun {
	namespace security {
		namespace ssl {

class MaxFragExtension$MaxFragLenEnum : public ::java::lang::Enum {
	$class(MaxFragExtension$MaxFragLenEnum, 0, ::java::lang::Enum)
public:
	MaxFragExtension$MaxFragLenEnum();
	static $Array<::sun::security::ssl::MaxFragExtension$MaxFragLenEnum>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int8_t id, int32_t fragmentSize, $String* description);
	static $String* nameOf(int8_t id);
	static ::sun::security::ssl::MaxFragExtension$MaxFragLenEnum* valueOf($String* name);
	static ::sun::security::ssl::MaxFragExtension$MaxFragLenEnum* valueOf(int8_t id);
	static ::sun::security::ssl::MaxFragExtension$MaxFragLenEnum* valueOf(int32_t fragmentSize);
	static $Array<::sun::security::ssl::MaxFragExtension$MaxFragLenEnum>* values();
	static ::sun::security::ssl::MaxFragExtension$MaxFragLenEnum* MFL_512;
	static ::sun::security::ssl::MaxFragExtension$MaxFragLenEnum* MFL_1024;
	static ::sun::security::ssl::MaxFragExtension$MaxFragLenEnum* MFL_2048;
	static ::sun::security::ssl::MaxFragExtension$MaxFragLenEnum* MFL_4096;
	static $Array<::sun::security::ssl::MaxFragExtension$MaxFragLenEnum>* $VALUES;
	int8_t id = 0;
	int32_t fragmentSize = 0;
	$String* description = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_MaxFragExtension$MaxFragLenEnum_h_