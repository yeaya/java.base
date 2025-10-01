#ifndef _UniTest_SingleMemberBoolean_h_
#define _UniTest_SingleMemberBoolean_h_
//$ interface UniTest.SingleMemberBoolean
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberBoolean : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberBoolean, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual bool value() {return false;}
};

} // UniTest

#endif // _UniTest_SingleMemberBoolean_h_