#ifndef _UniTest_SingleMemberClassArrayDef_h_
#define _UniTest_SingleMemberClassArrayDef_h_
//$ interface UniTest.SingleMemberClassArrayDef
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberClassArrayDef : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberClassArrayDef, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $ClassArray* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberClassArrayDef_h_