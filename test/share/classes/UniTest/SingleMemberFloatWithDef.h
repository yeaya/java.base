#ifndef _UniTest_SingleMemberFloatWithDef_h_
#define _UniTest_SingleMemberFloatWithDef_h_
//$ interface UniTest.SingleMemberFloatWithDef
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberFloatWithDef : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberFloatWithDef, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual float value() {return 0.0;}
};

} // UniTest

#endif // _UniTest_SingleMemberFloatWithDef_h_