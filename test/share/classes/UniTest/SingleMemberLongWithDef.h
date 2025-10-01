#ifndef _UniTest_SingleMemberLongWithDef_h_
#define _UniTest_SingleMemberLongWithDef_h_
//$ interface UniTest.SingleMemberLongWithDef
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class SingleMemberLongWithDef : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberLongWithDef, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int64_t value() {return 0;}
};

} // UniTest

#endif // _UniTest_SingleMemberLongWithDef_h_