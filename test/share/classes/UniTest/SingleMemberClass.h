#ifndef _UniTest_SingleMemberClass_h_
#define _UniTest_SingleMemberClass_h_
//$ interface UniTest.SingleMemberClass
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberClass : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberClass, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $Class* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberClass_h_