#ifndef _UniTest_SingleMemberEnum_h_
#define _UniTest_SingleMemberEnum_h_
//$ interface UniTest.SingleMemberEnum
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace UniTest {
	class Stooge;
}

namespace UniTest {

class SingleMemberEnum : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberEnum, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual ::UniTest::Stooge* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberEnum_h_