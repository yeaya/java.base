#ifndef _UniTest_SingleMemberClassWithDef_h_
#define _UniTest_SingleMemberClassWithDef_h_
//$ interface UniTest.SingleMemberClassWithDef
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberClassWithDef : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberClassWithDef, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $Class* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberClassWithDef_h_