#ifndef _UniTest_SingleMemberDoubleArrayDef_h_
#define _UniTest_SingleMemberDoubleArrayDef_h_
//$ interface UniTest.SingleMemberDoubleArrayDef
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberDoubleArrayDef : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberDoubleArrayDef, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $doubles* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberDoubleArrayDef_h_