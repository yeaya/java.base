#ifndef _java_net_HostPortrange_h_
#define _java_net_HostPortrange_h_
//$ class java.net.HostPortrange
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CASE_DIFF")
#undef CASE_DIFF
#pragma push_macro("HTTPS_PORT")
#undef HTTPS_PORT
#pragma push_macro("HTTP_PORT")
#undef HTTP_PORT
#pragma push_macro("NO_PORT")
#undef NO_PORT
#pragma push_macro("PORT_MAX")
#undef PORT_MAX
#pragma push_macro("PORT_MIN")
#undef PORT_MIN

namespace java {
	namespace net {

class HostPortrange : public ::java::lang::Object {
	$class(HostPortrange, 0, ::java::lang::Object)
public:
	HostPortrange();
	using ::java::lang::Object::equals;
	void init$($String* scheme, $String* str);
	virtual $ints* defaultPort();
	virtual bool equals(::java::net::HostPortrange* that);
	virtual int32_t hashCode() override;
	virtual $String* hostname();
	virtual bool ipv4Literal();
	virtual bool ipv6Literal();
	virtual bool literal();
	virtual $ints* parsePort($String* port);
	virtual $ints* portrange();
	static $String* toLowerCase($String* s);
	virtual bool wildcard();
	$String* hostname$ = nullptr;
	$String* scheme = nullptr;
	$ints* portrange$ = nullptr;
	bool wildcard$ = false;
	bool literal$ = false;
	bool ipv6 = false;
	bool ipv4 = false;
	static const int32_t PORT_MIN = 0;
	static const int32_t PORT_MAX = 65535; // (1 << 16) - 1
	static const int32_t CASE_DIFF = -32; // ((char16_t)65) - ((char16_t)97)
	static $ints* HTTP_PORT;
	static $ints* HTTPS_PORT;
	static $ints* NO_PORT;
};

	} // net
} // java

#pragma pop_macro("CASE_DIFF")
#pragma pop_macro("HTTPS_PORT")
#pragma pop_macro("HTTP_PORT")
#pragma pop_macro("NO_PORT")
#pragma pop_macro("PORT_MAX")
#pragma pop_macro("PORT_MIN")

#endif // _java_net_HostPortrange_h_