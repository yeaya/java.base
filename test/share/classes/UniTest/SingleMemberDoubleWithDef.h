#ifndef _UniTest_SingleMemberDoubleWithDef_h_
#define _UniTest_SingleMemberDoubleWithDef_h_
//$ interface UniTest.SingleMemberDoubleWithDef
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberDoubleWithDef : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberDoubleWithDef, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual double value() {return 0.0;}
};

} // UniTest

#endif // _UniTest_SingleMemberDoubleWithDef_h_