#ifndef _package1_Class1_h_
#define _package1_Class1_h_
//$ class package1.Class1
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace package1 {

class $export Class1 : public ::java::lang::Object {
	$class(Class1, 0, ::java::lang::Object)
public:
	Class1();
	void init$();
	virtual void testAssert(bool assertsShouldBeOn);
	static bool $assertionsDisabled;
};

} // package1

#endif // _package1_Class1_h_