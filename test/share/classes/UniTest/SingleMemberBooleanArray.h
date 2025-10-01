#ifndef _UniTest_SingleMemberBooleanArray_h_
#define _UniTest_SingleMemberBooleanArray_h_
//$ interface UniTest.SingleMemberBooleanArray
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberBooleanArray : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberBooleanArray, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $booleans* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberBooleanArray_h_