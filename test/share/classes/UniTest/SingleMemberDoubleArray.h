#ifndef _UniTest_SingleMemberDoubleArray_h_
#define _UniTest_SingleMemberDoubleArray_h_
//$ interface UniTest.SingleMemberDoubleArray
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberDoubleArray : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberDoubleArray, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $doubles* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberDoubleArray_h_