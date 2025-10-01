#ifndef _OrderUnitTest_h_
#define _OrderUnitTest_h_
//$ class OrderUnitTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class AnnotatedElement;
		}
	}
}

class $export OrderUnitTest : public ::java::lang::Object {
	$class(OrderUnitTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	OrderUnitTest();
	void init$();
	static void main($StringArray* args);
	static void testOrder(::java::lang::reflect::AnnotatedElement* e);
};

#endif // _OrderUnitTest_h_