#ifndef _UniTest_SingleMemberStringWithDef_h_
#define _UniTest_SingleMemberStringWithDef_h_
//$ interface UniTest.SingleMemberStringWithDef
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberStringWithDef : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberStringWithDef, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $String* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberStringWithDef_h_