#ifndef _UniTest_ScalarTypes_h_
#define _UniTest_ScalarTypes_h_
//$ interface UniTest.ScalarTypes
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace UniTest {
	class Point;
	class Stooge;
}

namespace UniTest {

class ScalarTypes : public ::java::lang::annotation::Annotation {
	$interface(ScalarTypes, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual ::UniTest::Point* a() {return nullptr;}
	virtual int8_t b() {return 0;}
	virtual bool bool$() {return false;}
	virtual char16_t c() {return 0;}
	virtual $Class* cls() {return nullptr;}
	virtual double d() {return 0.0;}
	virtual ::UniTest::Stooge* e() {return nullptr;}
	virtual float f() {return 0.0;}
	virtual int32_t i() {return 0;}
	virtual int64_t l() {return 0;}
	virtual int16_t s() {return 0;}
	virtual $String* str() {return nullptr;}
};

} // UniTest

#endif // _UniTest_ScalarTypes_h_