#ifndef _UniTest_SingleMemberCharWithDef_h_
#define _UniTest_SingleMemberCharWithDef_h_
//$ interface UniTest.SingleMemberCharWithDef
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberCharWithDef : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberCharWithDef, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual char16_t value() {return 0;}
};

} // UniTest

#endif // _UniTest_SingleMemberCharWithDef_h_