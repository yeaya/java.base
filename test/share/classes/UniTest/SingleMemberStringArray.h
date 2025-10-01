#ifndef _UniTest_SingleMemberStringArray_h_
#define _UniTest_SingleMemberStringArray_h_
//$ interface UniTest.SingleMemberStringArray
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberStringArray : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberStringArray, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $StringArray* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberStringArray_h_