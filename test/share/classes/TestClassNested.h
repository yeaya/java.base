#ifndef _TestClassNested_h_
#define _TestClassNested_h_
//$ class TestClassNested
//$ extends java.lang.Object

#include <java/lang/Array.h>

class Outer$Inner;

class TestClassNested : public ::java::lang::Object {
	$class(TestClassNested, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestClassNested();
	void init$();
	virtual $Array<Outer$Inner>* foo();
};

#endif // _TestClassNested_h_