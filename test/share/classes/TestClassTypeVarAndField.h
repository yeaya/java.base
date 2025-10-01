#ifndef _TestClassTypeVarAndField_h_
#define _TestClassTypeVarAndField_h_
//$ class TestClassTypeVarAndField
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Cloneable;
		class Runnable;
	}
}

class TestClassTypeVarAndField : public ::java::lang::Object {
	$class(TestClassTypeVarAndField, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestClassTypeVarAndField();
	void init$();
	virtual $Object* foo();
	virtual ::java::lang::Runnable* foo2();
	virtual ::java::lang::Cloneable* foo3();
	virtual $Object* foo4();
	$Object* field1 = nullptr;
	$Object* field2 = nullptr;
	$Object* field3 = nullptr;
};

#endif // _TestClassTypeVarAndField_h_