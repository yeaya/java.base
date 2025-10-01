#ifndef _TestC2_h_
#define _TestC2_h_
//$ class TestC2
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export TestC2 : public ::java::lang::Object {
	$class(TestC2, 0, ::java::lang::Object)
public:
	TestC2();
	void init$();
	static void main($StringArray* args);
	static void testConstructors();
	static void testFields();
	static void testMethods();
	static void testSuperInterfaces();
	static void testSuperclass();
	static void testTypeParameters();
	static bool $assertionsDisabled;
	static $Class* cls;
};

#endif // _TestC2_h_