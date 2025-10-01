#ifndef _UniTest_SingleMemberLongArray_h_
#define _UniTest_SingleMemberLongArray_h_
//$ interface UniTest.SingleMemberLongArray
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberLongArray : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberLongArray, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $longs* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberLongArray_h_