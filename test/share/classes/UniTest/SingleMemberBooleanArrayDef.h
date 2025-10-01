#ifndef _UniTest_SingleMemberBooleanArrayDef_h_
#define _UniTest_SingleMemberBooleanArrayDef_h_
//$ interface UniTest.SingleMemberBooleanArrayDef
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberBooleanArrayDef : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberBooleanArrayDef, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $booleans* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberBooleanArrayDef_h_