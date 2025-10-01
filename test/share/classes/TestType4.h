#ifndef _TestType4_h_
#define _TestType4_h_
//$ interface TestType4
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class TestType4 : public ::java::lang::annotation::Annotation {
	$interface(TestType4, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $String* anotherValue() {return nullptr;}
	virtual $String* value() {return nullptr;}
};

#endif // _TestType4_h_