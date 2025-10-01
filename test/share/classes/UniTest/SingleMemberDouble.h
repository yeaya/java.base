#ifndef _UniTest_SingleMemberDouble_h_
#define _UniTest_SingleMemberDouble_h_
//$ interface UniTest.SingleMemberDouble
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberDouble : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberDouble, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual double value() {return 0.0;}
};

} // UniTest

#endif // _UniTest_SingleMemberDouble_h_