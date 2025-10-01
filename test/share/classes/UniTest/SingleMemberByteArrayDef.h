#ifndef _UniTest_SingleMemberByteArrayDef_h_
#define _UniTest_SingleMemberByteArrayDef_h_
//$ interface UniTest.SingleMemberByteArrayDef
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberByteArrayDef : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberByteArrayDef, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $bytes* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberByteArrayDef_h_