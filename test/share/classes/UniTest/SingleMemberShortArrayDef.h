#ifndef _UniTest_SingleMemberShortArrayDef_h_
#define _UniTest_SingleMemberShortArrayDef_h_
//$ interface UniTest.SingleMemberShortArrayDef
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberShortArrayDef : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberShortArrayDef, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $shorts* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberShortArrayDef_h_