#ifndef _TestN1_h_
#define _TestN1_h_
//$ class TestN1
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export TestN1 : public ::java::lang::Object {
	$class(TestN1, 0, ::java::lang::Object)
public:
	TestN1();
	void init$();
	static void main($StringArray* args);
	static void testInner1();
	static void testInner2();
	static void testInner3();
	static void testTypeParameters();
	static bool $assertionsDisabled;
	static $Class* cls;
};

#endif // _TestN1_h_