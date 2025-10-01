#ifndef _package1_Class1$1_h_
#define _package1_Class1$1_h_
//$ class package1.Class1$1
//$ extends package1.Class1

#include <package1/Class1.h>

namespace package1 {

class Class1$1 : public ::package1::Class1 {
	$class(Class1$1, 0, ::package1::Class1)
public:
	Class1$1();
	void init$(::package1::Class1* this$0);
	virtual void testAssert(bool assertsShouldBeOn) override;
	::package1::Class1* this$0 = nullptr;
	static bool $assertionsDisabled;
};

} // package1

#endif // _package1_Class1$1_h_