#ifndef _UniTest_SingleMemberByteArray_h_
#define _UniTest_SingleMemberByteArray_h_
//$ interface UniTest.SingleMemberByteArray
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberByteArray : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberByteArray, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $bytes* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberByteArray_h_