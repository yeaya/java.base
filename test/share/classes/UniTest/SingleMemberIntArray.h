#ifndef _UniTest_SingleMemberIntArray_h_
#define _UniTest_SingleMemberIntArray_h_
//$ interface UniTest.SingleMemberIntArray
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberIntArray : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberIntArray, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $ints* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberIntArray_h_