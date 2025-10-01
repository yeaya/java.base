#ifndef _sun_security_ssl_Utilities_h_
#define _sun_security_ssl_Utilities_h_
//$ class sun.security.ssl.Utilities
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("HEX_FORMATTER")
#undef HEX_FORMATTER

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace util {
		class HexFormat;
		class List;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SNIHostName;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class Utilities : public ::java::lang::Object {
	$class(Utilities, 0, ::java::lang::Object)
public:
	Utilities();
	void init$();
	static ::java::util::List* addToSNIServerNameList(::java::util::List* serverNames, $String* hostname);
	static $String* byte16HexString(int32_t id);
	static bool getBooleanProperty($String* propName, bool defaultValue);
	static $String* indent($String* source);
	static $String* indent($String* source, $String* prefix);
	static ::javax::net::ssl::SNIHostName* rawToSNIHostName($String* hostname);
	static void reverseBytes($bytes* arr);
	static void swap($bytes* arr, int32_t i, int32_t j);
	static $bytes* toByteArray(::java::math::BigInteger* bi);
	static $String* toHexString($bytes* bytes);
	static $String* toHexString(int64_t lv);
	static $String* indent$;
	static ::java::util::regex::Pattern* lineBreakPatern;
	static ::java::util::HexFormat* HEX_FORMATTER;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("HEX_FORMATTER")

#endif // _sun_security_ssl_Utilities_h_