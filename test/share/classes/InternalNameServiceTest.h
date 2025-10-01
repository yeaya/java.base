#ifndef _InternalNameServiceTest_h_
#define _InternalNameServiceTest_h_
//$ class InternalNameServiceTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("HOSTS_FILE_NAME")
#undef HOSTS_FILE_NAME

class $export InternalNameServiceTest : public ::java::lang::Object {
	$class(InternalNameServiceTest, 0, ::java::lang::Object)
public:
	InternalNameServiceTest();
	void init$();
	static void addMappingToHostsFile($String* host, $String* addr, $String* hostsFileName, bool append);
	static $String* addrToString($bytes* addr);
	static void main($StringArray* args);
	static void testHostToIPAddressMappings($String* hostsFileName);
	static void testIpAddressToHostNameMappings($String* hostsFileName);
	static $String* HOSTS_FILE_NAME;
};

#pragma pop_macro("HOSTS_FILE_NAME")

#endif // _InternalNameServiceTest_h_