#ifndef _UniTest_SingleMemberBooleanWithDef_h_
#define _UniTest_SingleMemberBooleanWithDef_h_
//$ interface UniTest.SingleMemberBooleanWithDef
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberBooleanWithDef : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberBooleanWithDef, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual bool value() {return false;}
};

} // UniTest

#endif // _UniTest_SingleMemberBooleanWithDef_h_