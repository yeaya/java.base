#ifndef _UniTest_SingleMemberInt_h_
#define _UniTest_SingleMemberInt_h_
//$ interface UniTest.SingleMemberInt
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberInt : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberInt, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int32_t value() {return 0;}
};

} // UniTest

#endif // _UniTest_SingleMemberInt_h_