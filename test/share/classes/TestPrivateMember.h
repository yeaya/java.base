#ifndef _TestPrivateMember_h_
#define _TestPrivateMember_h_
//$ class TestPrivateMember
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export TestPrivateMember : public ::java::lang::Object {
	$class(TestPrivateMember, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestPrivateMember();
	void init$();
	static void main($StringArray* args);
	virtual void test();
};

#endif // _TestPrivateMember_h_