#ifndef _UniTest_SingleMemberCharArrayDef_h_
#define _UniTest_SingleMemberCharArrayDef_h_
//$ interface UniTest.SingleMemberCharArrayDef
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberCharArrayDef : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberCharArrayDef, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $chars* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberCharArrayDef_h_