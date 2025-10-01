#ifndef _TestClass1_h_
#define _TestClass1_h_
//$ class TestClass1
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Collection;
		class Comparator;
	}
}

class TestClass1 : public ::java::lang::Object {
	$class(TestClass1, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestClass1();
	void init$();
	static $Object* max(::java::util::Collection* coll, ::java::util::Comparator* comp);
	virtual void method1(int32_t x, double y);
	static $String* method2(int32_t x, int32_t param2);
	static void method3();
	virtual $Object* method4(Object$* s, Object$* t);
};

#endif // _TestClass1_h_