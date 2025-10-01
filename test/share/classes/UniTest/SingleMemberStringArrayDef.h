#ifndef _UniTest_SingleMemberStringArrayDef_h_
#define _UniTest_SingleMemberStringArrayDef_h_
//$ interface UniTest.SingleMemberStringArrayDef
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberStringArrayDef : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberStringArrayDef, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $StringArray* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberStringArrayDef_h_