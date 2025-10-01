#ifndef _UniTest_SingleMemberClassArray_h_
#define _UniTest_SingleMemberClassArray_h_
//$ interface UniTest.SingleMemberClassArray
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberClassArray : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberClassArray, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $ClassArray* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberClassArray_h_