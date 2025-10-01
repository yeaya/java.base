#ifndef _UniTest_SingleMemberLongArrayDef_h_
#define _UniTest_SingleMemberLongArrayDef_h_
//$ interface UniTest.SingleMemberLongArrayDef
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberLongArrayDef : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberLongArrayDef, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $longs* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberLongArrayDef_h_