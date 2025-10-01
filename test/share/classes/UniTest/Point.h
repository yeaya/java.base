#ifndef _UniTest_Point_h_
#define _UniTest_Point_h_
//$ interface UniTest.Point
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace UniTest {

class Point : public ::java::lang::annotation::Annotation {
	$interface(Point, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int32_t x() {return 0;}
	virtual int32_t y() {return 0;}
};

} // UniTest

#endif // _UniTest_Point_h_