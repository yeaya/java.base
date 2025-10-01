#ifndef _UniTest_SingleMemberIntWithDef_h_
#define _UniTest_SingleMemberIntWithDef_h_
//$ interface UniTest.SingleMemberIntWithDef
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberIntWithDef : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberIntWithDef, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int32_t value() {return 0;}
};

} // UniTest

#endif // _UniTest_SingleMemberIntWithDef_h_