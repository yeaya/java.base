#ifndef _java_net_Proxy$Type_h_
#define _java_net_Proxy$Type_h_
//$ class java.net.Proxy$Type
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("SOCKS")
#undef SOCKS
#pragma push_macro("HTTP")
#undef HTTP
#pragma push_macro("DIRECT")
#undef DIRECT

namespace java {
	namespace net {

class $import Proxy$Type : public ::java::lang::Enum {
	$class(Proxy$Type, 0, ::java::lang::Enum)
public:
	Proxy$Type();
	static $Array<::java::net::Proxy$Type>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::net::Proxy$Type* valueOf($String* name);
	static $Array<::java::net::Proxy$Type>* values();
	static ::java::net::Proxy$Type* DIRECT;
	static ::java::net::Proxy$Type* HTTP;
	static ::java::net::Proxy$Type* SOCKS;
	static $Array<::java::net::Proxy$Type>* $VALUES;
};

	} // net
} // java

#pragma pop_macro("SOCKS")
#pragma pop_macro("HTTP")
#pragma pop_macro("DIRECT")

#endif // _java_net_Proxy$Type_h_