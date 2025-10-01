#ifndef _UniTest_Bar_h_
#define _UniTest_Bar_h_
//$ interface UniTest.Bar
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class Bar : public ::java::lang::annotation::Annotation {
	$interface(Bar, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
};

} // UniTest

#endif // _UniTest_Bar_h_