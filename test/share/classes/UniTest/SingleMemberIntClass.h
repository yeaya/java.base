#ifndef _UniTest_SingleMemberIntClass_h_
#define _UniTest_SingleMemberIntClass_h_
//$ class UniTest.SingleMemberIntClass
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace UniTest {

class SingleMemberIntClass : public ::java::lang::Object {
	$class(SingleMemberIntClass, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SingleMemberIntClass();
	void init$();
};

} // UniTest

#endif // _UniTest_SingleMemberIntClass_h_