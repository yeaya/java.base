#ifndef _UniTest_SingleMemberFloat_h_
#define _UniTest_SingleMemberFloat_h_
//$ interface UniTest.SingleMemberFloat
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberFloat : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberFloat, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual float value() {return 0.0;}
};

} // UniTest

#endif // _UniTest_SingleMemberFloat_h_