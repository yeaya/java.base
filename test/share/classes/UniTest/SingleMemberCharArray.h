#ifndef _UniTest_SingleMemberCharArray_h_
#define _UniTest_SingleMemberCharArray_h_
//$ interface UniTest.SingleMemberCharArray
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberCharArray : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberCharArray, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $chars* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberCharArray_h_