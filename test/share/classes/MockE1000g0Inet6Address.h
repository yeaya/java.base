#ifndef _MockE1000g0Inet6Address_h_
#define _MockE1000g0Inet6Address_h_
//$ class MockE1000g0Inet6Address
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("SCOPE_ID_ZERO")
#undef SCOPE_ID_ZERO

class MockE1000g0Inet6Address : public ::java::lang::Object {
	$class(MockE1000g0Inet6Address, 0, ::java::lang::Object)
public:
	MockE1000g0Inet6Address();
	void init$();
	static $bytes* getAddress();
	static $String* getBareHostAddress();
	static $String* getHostAddress();
	static $String* getHostAddressWithIndex();
	static $String* getHostName();
	static int32_t getScopeId();
	static $String* getScopeIfName();
	static int32_t getScopeZero();
	static $bytes* E1000G0IPV6ADDRESS;
	static $String* E1000G0HOSTNAME;
	static $String* BARE_E1000G0HOSTADDRESS;
	static $String* E1000G0HOSTADDRESS_WITHINDEX;
	static $String* E1000G0HOSTADDRESS;
	static $String* NETWORK_IF_E1000G0;
	static const int32_t SCOPE_ID_E1000G0 = 2;
	static const int32_t SCOPE_ID_ZERO = 0;
};

#pragma pop_macro("SCOPE_ID_ZERO")

#endif // _MockE1000g0Inet6Address_h_