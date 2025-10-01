#ifndef _UniTest_SingleMemberLong_h_
#define _UniTest_SingleMemberLong_h_
//$ interface UniTest.SingleMemberLong
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberLong : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberLong, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int64_t value() {return 0;}
};

} // UniTest

#endif // _UniTest_SingleMemberLong_h_