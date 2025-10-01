#ifndef _UniTest_SingleMemberIntArrayDef_h_
#define _UniTest_SingleMemberIntArrayDef_h_
//$ interface UniTest.SingleMemberIntArrayDef
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberIntArrayDef : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberIntArrayDef, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $ints* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberIntArrayDef_h_