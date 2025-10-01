#ifndef _FooContainer_h_
#define _FooContainer_h_
//$ interface FooContainer
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

class Foo4OrderUnitTest;

class FooContainer : public ::java::lang::annotation::Annotation {
	$interface(FooContainer, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $Array<Foo4OrderUnitTest>* value() {return nullptr;}
};

#endif // _FooContainer_h_