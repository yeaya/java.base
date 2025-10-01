#ifndef _TestC1_TestC1_h_
#define _TestC1_TestC1_h_
//$ class TestC1.TestC1
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace TestC1 {

class $export TestC1 : public ::java::lang::Object {
	$class(TestC1, 0, ::java::lang::Object)
public:
	TestC1();
	void init$();
	static void main($StringArray* args);
	static void testConstructor();
	static void testFields();
	static void testMethods();
	static void testSuperInterfaces();
	static void testSuperclass();
	static void testTypeParameters();
	static bool $assertionsDisabled;
	static $Class* cls;
};

} // TestC1

#endif // _TestC1_TestC1_h_