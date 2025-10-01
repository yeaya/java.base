#ifndef _UniTest_SingleMemberEnumArray_h_
#define _UniTest_SingleMemberEnumArray_h_
//$ interface UniTest.SingleMemberEnumArray
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace UniTest {
	class Stooge;
}

namespace UniTest {

class SingleMemberEnumArray : public ::java::lang::annotation::Annotation {
	$interface(SingleMemberEnumArray, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $Array<::UniTest::Stooge>* value() {return nullptr;}
};

} // UniTest

#endif // _UniTest_SingleMemberEnumArray_h_