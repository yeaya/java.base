#ifndef _InheritedMethodTest_h_
#define _InheritedMethodTest_h_
//$ class InheritedMethodTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodHandles$Lookup;
			class MethodType;
		}
	}
}

class $export InheritedMethodTest : public ::java::lang::Object {
	$class(InheritedMethodTest, 0, ::java::lang::Object)
public:
	InheritedMethodTest();
	void init$();
	static void main($StringArray* args);
	static ::java::lang::invoke::MethodType* mt($Class* ret, $ClassArray* params);
	static void test(::java::lang::invoke::MethodHandle* implMethod, $String* expected);
	static void testAltMetafactory(::java::lang::invoke::MethodHandle* implMethod, $String* expected);
	static void testMetafactory(::java::lang::invoke::MethodHandle* implMethod, $String* expected);
	static ::java::lang::invoke::MethodHandles$Lookup* lookup;
};

#endif // _InheritedMethodTest_h_