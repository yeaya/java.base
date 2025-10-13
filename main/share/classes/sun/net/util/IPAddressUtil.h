#ifndef _sun_net_util_IPAddressUtil_h_
#define _sun_net_util_IPAddressUtil_h_
//$ class sun.net.util.IPAddressUtil
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("H_AUTH_DELIMS")
#undef H_AUTH_DELIMS
#pragma push_macro("H_BACKSLASH")
#undef H_BACKSLASH
#pragma push_macro("H_COLON")
#undef H_COLON
#pragma push_macro("H_EXCLUDE")
#undef H_EXCLUDE
#pragma push_macro("H_GEN_DELIMS")
#undef H_GEN_DELIMS
#pragma push_macro("H_IPV6_DELIMS")
#undef H_IPV6_DELIMS
#pragma push_macro("H_NON_PRINTABLE")
#undef H_NON_PRINTABLE
#pragma push_macro("H_SLASH")
#undef H_SLASH
#pragma push_macro("INADDR16SZ")
#undef INADDR16SZ
#pragma push_macro("INADDR4SZ")
#undef INADDR4SZ
#pragma push_macro("INT16SZ")
#undef INT16SZ
#pragma push_macro("L_AUTH_DELIMS")
#undef L_AUTH_DELIMS
#pragma push_macro("L_BACKSLASH")
#undef L_BACKSLASH
#pragma push_macro("L_COLON")
#undef L_COLON
#pragma push_macro("L_EXCLUDE")
#undef L_EXCLUDE
#pragma push_macro("L_GEN_DELIMS")
#undef L_GEN_DELIMS
#pragma push_macro("L_IPV6_DELIMS")
#undef L_IPV6_DELIMS
#pragma push_macro("L_NON_PRINTABLE")
#undef L_NON_PRINTABLE
#pragma push_macro("L_SLASH")
#undef L_SLASH
#pragma push_macro("OTHERS")
#undef OTHERS

namespace java {
	namespace net {
		class InetAddress;
		class InetSocketAddress;
		class URL;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}

namespace sun {
	namespace net {
		namespace util {

class $export IPAddressUtil : public ::java::lang::Object {
	$class(IPAddressUtil, $PRELOAD, ::java::lang::Object)
public:
	IPAddressUtil();
	void init$();
	static $String* checkAuth($String* str);
	static $String* checkAuthority(::java::net::URL* url);
	static $String* checkExternalForm(::java::net::URL* url);
	static $String* checkHost($String* str);
	static $String* checkHostString($String* host);
	static $String* checkUserInfo($String* str);
	static $bytes* convertFromIPv4MappedAddress($bytes* addr);
	static $String* describeChar(char16_t c);
	static ::java::net::InetAddress* findScopedAddress(::java::net::InetAddress* address);
	static bool isIPv4LiteralAddress($String* src);
	static bool isIPv4MappedAddress($bytes* addr);
	static bool isIPv6LiteralAddress($String* src);
	static bool lambda$findScopedAddress$1(::java::net::InetAddress* address, ::java::net::InetAddress* a);
	static ::java::util::List* lambda$findScopedAddress$2(::java::net::InetAddress* address);
	static ::java::net::InetAddress* lambda$toScopedAddress$0(::java::net::InetAddress* k);
	static bool match(char16_t c, int64_t lowMask, int64_t highMask);
	static int32_t scan($String* s, int64_t lowMask, int64_t highMask);
	static int32_t scan($String* s, int64_t lowMask, int64_t highMask, $chars* others);
	static $bytes* textToNumericFormatV4($String* src);
	static $bytes* textToNumericFormatV6($String* src);
	static ::java::net::InetAddress* toScopedAddress(::java::net::InetAddress* address);
	static ::java::net::InetSocketAddress* toScopedAddress(::java::net::InetSocketAddress* address);
	static const int32_t INADDR4SZ = 4;
	static const int32_t INADDR16SZ = 16;
	static const int32_t INT16SZ = 2;
	static ::java::util::concurrent::ConcurrentHashMap* cache;
	static const int64_t L_IPV6_DELIMS = (int64_t)0;
	static const int64_t H_IPV6_DELIMS = (int64_t)671088640;
	static const int64_t L_GEN_DELIMS = (int64_t)0x8400800800000000;
	static const int64_t H_GEN_DELIMS = (int64_t)671088641;
	static const int64_t L_AUTH_DELIMS = (int64_t)0x0400000000000000;
	static const int64_t H_AUTH_DELIMS = (int64_t)671088641;
	static const int64_t L_COLON = (int64_t)0x0400000000000000;
	static const int64_t H_COLON = (int64_t)0;
	static const int64_t L_SLASH = (int64_t)0x0000800000000000;
	static const int64_t H_SLASH = (int64_t)0;
	static const int64_t L_BACKSLASH = (int64_t)0;
	static const int64_t H_BACKSLASH = (int64_t)268435456;
	static const int64_t L_NON_PRINTABLE = (int64_t)0x00000000FFFFFFFF;
	static const int64_t H_NON_PRINTABLE = (int64_t)0x8000000000000000;
	static const int64_t L_EXCLUDE = (int64_t)0x84008008FFFFFFFF;
	static const int64_t H_EXCLUDE = (int64_t)0x8000000038000001;
	static $chars* OTHERS;
};

		} // util
	} // net
} // sun

#pragma pop_macro("H_AUTH_DELIMS")
#pragma pop_macro("H_BACKSLASH")
#pragma pop_macro("H_COLON")
#pragma pop_macro("H_EXCLUDE")
#pragma pop_macro("H_GEN_DELIMS")
#pragma pop_macro("H_IPV6_DELIMS")
#pragma pop_macro("H_NON_PRINTABLE")
#pragma pop_macro("H_SLASH")
#pragma pop_macro("INADDR16SZ")
#pragma pop_macro("INADDR4SZ")
#pragma pop_macro("INT16SZ")
#pragma pop_macro("L_AUTH_DELIMS")
#pragma pop_macro("L_BACKSLASH")
#pragma pop_macro("L_COLON")
#pragma pop_macro("L_EXCLUDE")
#pragma pop_macro("L_GEN_DELIMS")
#pragma pop_macro("L_IPV6_DELIMS")
#pragma pop_macro("L_NON_PRINTABLE")
#pragma pop_macro("L_SLASH")
#pragma pop_macro("OTHERS")

#endif // _sun_net_util_IPAddressUtil_h_