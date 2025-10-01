#ifndef _UniTest_SingleMemberShort_h_
#define _UniTest_SingleMemberShort_h_
//$ interface UniTest.SingleMemberShort
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberShort : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberShort, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int16_t value() {return 0;}
};

} // UniTest

#endif // _UniTest_SingleMemberShort_h_