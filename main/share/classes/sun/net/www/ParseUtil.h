#ifndef _sun_net_www_ParseUtil_h_
#define _sun_net_www_ParseUtil_h_
//$ class sun.net.www.ParseUtil
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("HEX_UPPERCASE")
#undef HEX_UPPERCASE
#pragma push_macro("H_ALPHA")
#undef H_ALPHA
#pragma push_macro("H_ALPHANUM")
#undef H_ALPHANUM
#pragma push_macro("H_DASH")
#undef H_DASH
#pragma push_macro("H_DIGIT")
#undef H_DIGIT
#pragma push_macro("H_ENCODED")
#undef H_ENCODED
#pragma push_macro("H_ESCAPED")
#undef H_ESCAPED
#pragma push_macro("H_HEX")
#undef H_HEX
#pragma push_macro("H_LOWALPHA")
#undef H_LOWALPHA
#pragma push_macro("H_MARK")
#undef H_MARK
#pragma push_macro("H_PATH")
#undef H_PATH
#pragma push_macro("H_PCHAR")
#undef H_PCHAR
#pragma push_macro("H_REG_NAME")
#undef H_REG_NAME
#pragma push_macro("H_RESERVED")
#undef H_RESERVED
#pragma push_macro("H_SERVER")
#undef H_SERVER
#pragma push_macro("H_UNRESERVED")
#undef H_UNRESERVED
#pragma push_macro("H_UPALPHA")
#undef H_UPALPHA
#pragma push_macro("H_URIC")
#undef H_URIC
#pragma push_macro("H_USERINFO")
#undef H_USERINFO
#pragma push_macro("L_ALPHA")
#undef L_ALPHA
#pragma push_macro("L_ALPHANUM")
#undef L_ALPHANUM
#pragma push_macro("L_DASH")
#undef L_DASH
#pragma push_macro("L_DIGIT")
#undef L_DIGIT
#pragma push_macro("L_ENCODED")
#undef L_ENCODED
#pragma push_macro("L_ESCAPED")
#undef L_ESCAPED
#pragma push_macro("L_HEX")
#undef L_HEX
#pragma push_macro("L_LOWALPHA")
#undef L_LOWALPHA
#pragma push_macro("L_MARK")
#undef L_MARK
#pragma push_macro("L_PATH")
#undef L_PATH
#pragma push_macro("L_PCHAR")
#undef L_PCHAR
#pragma push_macro("L_REG_NAME")
#undef L_REG_NAME
#pragma push_macro("L_RESERVED")
#undef L_RESERVED
#pragma push_macro("L_SERVER")
#undef L_SERVER
#pragma push_macro("L_UNRESERVED")
#undef L_UNRESERVED
#pragma push_macro("L_UPALPHA")
#undef L_UPALPHA
#pragma push_macro("L_URIC")
#undef L_URIC
#pragma push_macro("L_USERINFO")
#undef L_USERINFO

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace net {
		class URI;
		class URL;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class CharsetEncoder;
		}
	}
}
namespace java {
	namespace util {
		class HexFormat;
	}
}

namespace sun {
	namespace net {
		namespace www {

class $export ParseUtil : public ::java::lang::Object {
	$class(ParseUtil, 0, ::java::lang::Object)
public:
	ParseUtil();
	void init$();
	static void appendAuthority(::java::lang::StringBuilder* sb, $String* authority, $String* userInfo, $String* host, int32_t port);
	static void appendEncoded(::java::nio::charset::CharsetEncoder* encoder, ::java::lang::StringBuilder* sb, char16_t c);
	static void appendEscape(::java::lang::StringBuilder* sb, int8_t b);
	static void appendFragment(::java::lang::StringBuilder* sb, $String* fragment);
	static void appendSchemeSpecificPart(::java::lang::StringBuilder* sb, $String* opaquePart, $String* authority, $String* userInfo, $String* host, int32_t port, $String* path, $String* query);
	static void checkPath($String* s, $String* scheme, $String* path);
	static ::java::net::URI* createURI($String* scheme, $String* authority, $String* path, $String* query, $String* fragment);
	static $String* decode($String* s);
	static $String* encodePath($String* path);
	static $String* encodePath($String* path, bool flag);
	static $String* encodePath($String* path, int32_t index, char16_t sep);
	static int32_t escape($chars* cc, char16_t c, int32_t index);
	static ::java::net::URL* fileToEncodedURL(::java::io::File* file);
	static int32_t firstEncodeIndex($String* path);
	static bool isEscaped($String* s, int32_t pos);
	static bool match(char16_t c, int64_t lowMask, int64_t highMask);
	static $String* quote($String* s, int64_t lowMask, int64_t highMask);
	using ::java::lang::Object::toString;
	static $String* toString($String* scheme, $String* opaquePart, $String* authority, $String* userInfo, $String* host, int32_t port, $String* path, $String* query, $String* fragment);
	static ::java::net::URI* toURI(::java::net::URL* url);
	static int8_t unescape($String* s, int32_t i);
	static bool $assertionsDisabled;
	static ::java::util::HexFormat* HEX_UPPERCASE;
	static const int64_t L_DIGIT = (int64_t)0x03FF000000000000;
	static const int64_t H_DIGIT = (int64_t)0;
	static const int64_t L_HEX = L_DIGIT;
	static const int64_t H_HEX = (int64_t)0x0000007E0000007E;
	static const int64_t L_UPALPHA = (int64_t)0;
	static const int64_t H_UPALPHA = (int64_t)134217726;
	static const int64_t L_LOWALPHA = (int64_t)0;
	static const int64_t H_LOWALPHA = (int64_t)0x07FFFFFE00000000;
	static const int64_t L_ALPHA = 0; // L_LOWALPHA | L_UPALPHA
	static const int64_t H_ALPHA = 0x07FFFFFE07FFFFFE; // H_LOWALPHA | H_UPALPHA
	static const int64_t L_ALPHANUM = 0x03FF000000000000; // L_DIGIT | L_ALPHA
	static const int64_t H_ALPHANUM = 0x07FFFFFE07FFFFFE; // H_DIGIT | H_ALPHA
	static const int64_t L_MARK = (int64_t)0x0000678200000000;
	static const int64_t H_MARK = (int64_t)0x4000000080000000;
	static const int64_t L_UNRESERVED = 0x03FF678200000000; // L_ALPHANUM | L_MARK
	static const int64_t H_UNRESERVED = 0x47FFFFFE87FFFFFE; // H_ALPHANUM | H_MARK
	static const int64_t L_RESERVED = (int64_t)0xAC00985000000000;
	static const int64_t H_RESERVED = (int64_t)671088641;
	static const int64_t L_ESCAPED = (int64_t)1;
	static const int64_t H_ESCAPED = (int64_t)0;
	static const int64_t L_URIC = 0xAFFFFFD200000001; // L_RESERVED | L_UNRESERVED | L_ESCAPED
	static const int64_t H_URIC = 0x47FFFFFEAFFFFFFF; // H_RESERVED | H_UNRESERVED | H_ESCAPED
	static const int64_t L_PCHAR = 0x27FF7FD200000001; // L_UNRESERVED | L_ESCAPED | (int64_t)0x2400185000000000
	static const int64_t H_PCHAR = 0x47FFFFFE87FFFFFF; // H_UNRESERVED | H_ESCAPED | (int64_t)1
	static const int64_t L_PATH = 0x2FFFFFD200000001; // L_PCHAR | (int64_t)0x0800800000000000
	static const int64_t H_PATH = H_PCHAR;
	static const int64_t L_DASH = (int64_t)0x0000200000000000;
	static const int64_t H_DASH = (int64_t)0;
	static const int64_t L_USERINFO = 0x2FFF7FD200000001; // L_UNRESERVED | L_ESCAPED | (int64_t)0x2C00185000000000
	static const int64_t H_USERINFO = 0x47FFFFFE87FFFFFE; // H_UNRESERVED | H_ESCAPED
	static const int64_t L_REG_NAME = 0x2FFF7FD200000001; // L_UNRESERVED | L_ESCAPED | (int64_t)0x2C00185000000000
	static const int64_t H_REG_NAME = 0x47FFFFFE87FFFFFF; // H_UNRESERVED | H_ESCAPED | (int64_t)1
	static const int64_t L_SERVER = 0x2FFF7FD200000001; // L_USERINFO | L_ALPHANUM | L_DASH | (int64_t)0x0400400000000000
	static const int64_t H_SERVER = 0x47FFFFFEAFFFFFFF; // H_USERINFO | H_ALPHANUM | H_DASH | (int64_t)671088641
	static const int64_t L_ENCODED = (int64_t)0xF800802DFFFFFFFF;
	static const int64_t H_ENCODED = (int64_t)0xB800000178000000;
};

		} // www
	} // net
} // sun

#pragma pop_macro("HEX_UPPERCASE")
#pragma pop_macro("H_ALPHA")
#pragma pop_macro("H_ALPHANUM")
#pragma pop_macro("H_DASH")
#pragma pop_macro("H_DIGIT")
#pragma pop_macro("H_ENCODED")
#pragma pop_macro("H_ESCAPED")
#pragma pop_macro("H_HEX")
#pragma pop_macro("H_LOWALPHA")
#pragma pop_macro("H_MARK")
#pragma pop_macro("H_PATH")
#pragma pop_macro("H_PCHAR")
#pragma pop_macro("H_REG_NAME")
#pragma pop_macro("H_RESERVED")
#pragma pop_macro("H_SERVER")
#pragma pop_macro("H_UNRESERVED")
#pragma pop_macro("H_UPALPHA")
#pragma pop_macro("H_URIC")
#pragma pop_macro("H_USERINFO")
#pragma pop_macro("L_ALPHA")
#pragma pop_macro("L_ALPHANUM")
#pragma pop_macro("L_DASH")
#pragma pop_macro("L_DIGIT")
#pragma pop_macro("L_ENCODED")
#pragma pop_macro("L_ESCAPED")
#pragma pop_macro("L_HEX")
#pragma pop_macro("L_LOWALPHA")
#pragma pop_macro("L_MARK")
#pragma pop_macro("L_PATH")
#pragma pop_macro("L_PCHAR")
#pragma pop_macro("L_REG_NAME")
#pragma pop_macro("L_RESERVED")
#pragma pop_macro("L_SERVER")
#pragma pop_macro("L_UNRESERVED")
#pragma pop_macro("L_UPALPHA")
#pragma pop_macro("L_URIC")
#pragma pop_macro("L_USERINFO")

#endif // _sun_net_www_ParseUtil_h_