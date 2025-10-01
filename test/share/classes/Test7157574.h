#ifndef _Test7157574_h_
#define _Test7157574_h_
//$ class Test7157574
//$ extends java.lang.Object

#include <java/lang/Array.h>

class Test7157574$Sub;
namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
		}
	}
}

class $export Test7157574 : public ::java::lang::Object {
	$class(Test7157574, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Test7157574();
	void init$();
	static void assertEquals(Object$* expect, Object$* observe);
	static void main($StringArray* av);
	static void testConcrete(::Test7157574$Sub* s, ::java::lang::invoke::MethodHandle* m1, ::java::lang::invoke::MethodHandle* m2, ::java::lang::invoke::MethodHandle* f2, ::java::lang::invoke::MethodHandle* f2s, ::java::lang::invoke::MethodHandle* chc, ::java::lang::invoke::MethodHandle* ihc);
};

#endif // _Test7157574_h_