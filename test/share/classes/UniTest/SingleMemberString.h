#ifndef _UniTest_SingleMemberString_h_
#define _UniTest_SingleMemberString_h_
//$ interface UniTest.SingleMemberString
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberString : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberString, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $String* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberString_h_