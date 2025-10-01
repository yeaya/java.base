#ifndef _UniTest_ArrayTypes_h_
#define _UniTest_ArrayTypes_h_
//$ interface UniTest.ArrayTypes
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace UniTest {
	class Point;
	class Stooge;
}

namespace UniTest {

class ArrayTypes : public ::java::lang::annotation::Annotation {
	$interface(ArrayTypes, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $Array<::UniTest::Point>* a() {return nullptr;}
	virtual $bytes* b() {return nullptr;}
	virtual $booleans* bool$() {return nullptr;}
	virtual $chars* c() {return nullptr;}
	virtual $ClassArray* cls() {return nullptr;}
	virtual $doubles* d() {return nullptr;}
	virtual $Array<::UniTest::Stooge>* e() {return nullptr;}
	virtual $floats* f() {return nullptr;}
	virtual $ints* i() {return nullptr;}
	virtual $longs* l() {return nullptr;}
	virtual $shorts* s() {return nullptr;}
	virtual $StringArray* str() {return nullptr;}
};

} // UniTest

#endif // _UniTest_ArrayTypes_h_