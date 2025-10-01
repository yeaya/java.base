#ifndef _UniTest_SingleMemberFloatArray_h_
#define _UniTest_SingleMemberFloatArray_h_
//$ interface UniTest.SingleMemberFloatArray
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberFloatArray : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberFloatArray, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $floats* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberFloatArray_h_