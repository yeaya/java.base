#ifndef _UniTest_SingleMemberChar_h_
#define _UniTest_SingleMemberChar_h_
//$ interface UniTest.SingleMemberChar
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberChar : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberChar, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual char16_t value() {return 0;}
};

} // UniTest

#endif // _UniTest_SingleMemberChar_h_