#ifndef _package2_Class2_h_
#define _package2_Class2_h_
//$ class package2.Class2
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace package2 {

class $export Class2 : public ::java::lang::Object {
	$class(Class2, 0, ::java::lang::Object)
public:
	Class2();
	void init$();
	virtual void testAssert(bool assertsShouldBeOn);
	static bool $assertionsDisabled;
};

} // package2

#endif // _package2_Class2_h_