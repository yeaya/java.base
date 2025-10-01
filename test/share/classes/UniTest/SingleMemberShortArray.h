#ifndef _UniTest_SingleMemberShortArray_h_
#define _UniTest_SingleMemberShortArray_h_
//$ interface UniTest.SingleMemberShortArray
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberShortArray : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberShortArray, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $shorts* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberShortArray_h_