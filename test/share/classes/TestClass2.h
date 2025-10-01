#ifndef _TestClass2_h_
#define _TestClass2_h_
//$ class TestClass2
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Number;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class Set;
	}
}

class TestClass2 : public ::java::lang::Object {
	$class(TestClass2, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestClass2();
	void init$();
	virtual $Object* method1(Object$* e, Object$* t);
	virtual void method2();
	virtual $ObjectArray* method3();
	virtual $Array<::java::lang::Object, 2>* method4();
	virtual ::java::util::List* method5();
	virtual ::java::util::List* method6();
	virtual $Array<::java::util::List>* method7();
	virtual ::java::util::Map* method8();
	virtual ::java::util::Set* method9(::java::lang::Number* v);
};

#endif // _TestClass2_h_