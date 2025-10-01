#ifndef _UniTest_Marker_h_
#define _UniTest_Marker_h_
//$ interface UniTest.Marker
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class Marker : public ::java::lang::annotation::Annotation {
	$interface(Marker, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
};

} // UniTest

#endif // _UniTest_Marker_h_