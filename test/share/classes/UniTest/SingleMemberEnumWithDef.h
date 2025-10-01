#ifndef _UniTest_SingleMemberEnumWithDef_h_
#define _UniTest_SingleMemberEnumWithDef_h_
//$ interface UniTest.SingleMemberEnumWithDef
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace UniTest {
	class Stooge;
}

namespace UniTest {

class SingleMemberEnumWithDef : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberEnumWithDef, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual ::UniTest::Stooge* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberEnumWithDef_h_