#ifndef _UniTest_SingleMemberFloatArrayDef_h_
#define _UniTest_SingleMemberFloatArrayDef_h_
//$ interface UniTest.SingleMemberFloatArrayDef
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberFloatArrayDef : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberFloatArrayDef, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $floats* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberFloatArrayDef_h_