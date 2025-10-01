#ifndef _InternalNameServiceWithHostsFileTest_h_
#define _InternalNameServiceWithHostsFileTest_h_
//$ class InternalNameServiceWithHostsFileTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export InternalNameServiceWithHostsFileTest : public ::java::lang::Object {
	$class(InternalNameServiceWithHostsFileTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InternalNameServiceWithHostsFileTest();
	void init$();
	static void main($StringArray* args);
	static void testHostsMapping($bytes* expectedIpAddress, $String* hostName);
	static void testReverseLookup($String* numericHost, $String* expectedName);
};

#endif // _InternalNameServiceWithHostsFileTest_h_