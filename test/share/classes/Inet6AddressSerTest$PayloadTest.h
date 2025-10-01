#ifndef _Inet6AddressSerTest$PayloadTest_h_
#define _Inet6AddressSerTest$PayloadTest_h_
//$ class Inet6AddressSerTest$PayloadTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Inet6AddressSerTest$PayloadTest : public ::java::lang::Object {
	$class(Inet6AddressSerTest$PayloadTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Inet6AddressSerTest$PayloadTest();
	void init$();
	static $Object* deserialize($bytes* buffer);
	static $bytes* serialize($String* className);
	virtual void test($String* className);
};

#endif // _Inet6AddressSerTest$PayloadTest_h_