#ifndef _UniTest_SingleMemberEnumArrayDef_h_
#define _UniTest_SingleMemberEnumArrayDef_h_
//$ interface UniTest.SingleMemberEnumArrayDef
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace UniTest {
	class Stooge;
}

namespace UniTest {

class SingleMemberEnumArrayDef : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberEnumArrayDef, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $Array<::UniTest::Stooge>* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberEnumArrayDef_h_