#ifndef _UniTest_SingleMemberShortWithDef_h_
#define _UniTest_SingleMemberShortWithDef_h_
//$ interface UniTest.SingleMemberShortWithDef
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberShortWithDef : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberShortWithDef, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int16_t value() {return 0;}
};

} // UniTest

#endif // _UniTest_SingleMemberShortWithDef_h_