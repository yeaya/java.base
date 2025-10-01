#ifndef _UniTest_SingleMemberByte_h_
#define _UniTest_SingleMemberByte_h_
//$ interface UniTest.SingleMemberByte
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberByte : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberByte, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int8_t value() {return 0;}
};

} // UniTest

#endif // _UniTest_SingleMemberByte_h_