#ifndef _package1_package3_Class3_h_
#define _package1_package3_Class3_h_
//$ class package1.package3.Class3
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace package1 {
	namespace package3 {

class $export Class3 : public ::java::lang::Object {
	$class(Class3, 0, ::java::lang::Object)
public:
	Class3();
	void init$();
	virtual void testAssert(bool assertsShouldBeOn);
	static bool $assertionsDisabled;
};

	} // package3
} // package1

#endif // _package1_package3_Class3_h_