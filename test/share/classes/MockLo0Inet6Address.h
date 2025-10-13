#ifndef _MockLo0Inet6Address_h_
#define _MockLo0Inet6Address_h_
//$ class MockLo0Inet6Address
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BARE_LO0HOSTADDRESS")
#undef BARE_LO0HOSTADDRESS
#pragma push_macro("LO0HOSTADDRESS")
#undef LO0HOSTADDRESS
#pragma push_macro("LO0HOSTADDRESS_WITHINDEX")
#undef LO0HOSTADDRESS_WITHINDEX
#pragma push_macro("LOCALHOSTNAME")
#undef LOCALHOSTNAME
#pragma push_macro("LOOPBACKIPV6ADDRESS")
#undef LOOPBACKIPV6ADDRESS
#pragma push_macro("NETWORK_IF_LO0")
#undef NETWORK_IF_LO0
#pragma push_macro("SCOPE_ID_LO0")
#undef SCOPE_ID_LO0
#pragma push_macro("SCOPE_ID_ZERO")
#undef SCOPE_ID_ZERO

class MockLo0Inet6Address : public ::java::lang::Object {
	$class(MockLo0Inet6Address, 0, ::java::lang::Object)
public:
	MockLo0Inet6Address();
	void init$();
	static $bytes* getAddress();
	static $String* getBareHostAddress();
	static $String* getHostAddress();
	static $String* getHostAddressWithIndex();
	static $String* getHostName();
	static int32_t getScopeId();
	static $String* getScopeIfName();
	static int32_t getScopeZero();
	static $bytes* LOOPBACKIPV6ADDRESS;
	static $String* LOCALHOSTNAME;
	static $String* LO0HOSTADDRESS;
	static $String* BARE_LO0HOSTADDRESS;
	static $String* LO0HOSTADDRESS_WITHINDEX;
	static const int32_t SCOPE_ID_LO0 = 1;
	static const int32_t SCOPE_ID_ZERO = 0;
	static $String* NETWORK_IF_LO0;
};

#pragma pop_macro("BARE_LO0HOSTADDRESS")
#pragma pop_macro("LO0HOSTADDRESS")
#pragma pop_macro("LO0HOSTADDRESS_WITHINDEX")
#pragma pop_macro("LOCALHOSTNAME")
#pragma pop_macro("LOOPBACKIPV6ADDRESS")
#pragma pop_macro("NETWORK_IF_LO0")
#pragma pop_macro("SCOPE_ID_LO0")
#pragma pop_macro("SCOPE_ID_ZERO")

#endif // _MockLo0Inet6Address_h_