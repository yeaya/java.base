#ifndef _Foo4OrderUnitTest_h_
#define _Foo4OrderUnitTest_h_
//$ interface Foo4OrderUnitTest
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class Foo4OrderUnitTest : public ::java::lang::annotation::Annotation {
	$interface(Foo4OrderUnitTest, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual bool isDirect() {return false;}
};

#endif // _Foo4OrderUnitTest_h_