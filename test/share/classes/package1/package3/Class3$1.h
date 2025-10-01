#ifndef _package1_package3_Class3$1_h_
#define _package1_package3_Class3$1_h_
//$ class package1.package3.Class3$1
//$ extends package1.package3.Class3

#include <package1/package3/Class3.h>

namespace package1 {
	namespace package3 {

class Class3$1 : public ::package1::package3::Class3 {
	$class(Class3$1, 0, ::package1::package3::Class3)
public:
	Class3$1();
	void init$(::package1::package3::Class3* this$0);
	virtual void testAssert(bool assertsShouldBeOn) override;
	::package1::package3::Class3* this$0 = nullptr;
	static bool $assertionsDisabled;
};

	} // package3
} // package1

#endif // _package1_package3_Class3$1_h_