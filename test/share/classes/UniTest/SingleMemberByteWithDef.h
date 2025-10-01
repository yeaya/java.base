#ifndef _UniTest_SingleMemberByteWithDef_h_
#define _UniTest_SingleMemberByteWithDef_h_
//$ interface UniTest.SingleMemberByteWithDef
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberByteWithDef : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberByteWithDef, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int8_t value() {return 0;}
};

} // UniTest

#endif // _UniTest_SingleMemberByteWithDef_h_