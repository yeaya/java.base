#ifndef _TestParameterizedTypeA_h_
#define _TestParameterizedTypeA_h_
//$ class TestParameterizedTypeA
//$ extends java.util.Map

#include <java/util/Map.h>

class ParameterizedOuter$ParameterizedInner;

class TestParameterizedTypeA : public ::java::util::Map {
	$class(TestParameterizedTypeA, $NO_CLASS_INIT, ::java::util::Map)
public:
	TestParameterizedTypeA();
	void init$();
	virtual ::ParameterizedOuter$ParameterizedInner* foo();
	virtual ::ParameterizedOuter$ParameterizedInner* foo2();
	::ParameterizedOuter$ParameterizedInner* theField = nullptr;
};

#endif // _TestParameterizedTypeA_h_