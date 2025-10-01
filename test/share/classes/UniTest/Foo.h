#ifndef _UniTest_Foo_h_
#define _UniTest_Foo_h_
//$ interface UniTest.Foo
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class Foo : public ::java::lang::annotation::Annotation {
	$interface(Foo, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
};

} // UniTest

#endif // _UniTest_Foo_h_