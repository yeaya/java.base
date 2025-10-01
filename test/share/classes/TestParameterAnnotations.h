#ifndef _TestParameterAnnotations_h_
#define _TestParameterAnnotations_h_
//$ class TestParameterAnnotations
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export TestParameterAnnotations : public ::java::lang::Object {
	$class(TestParameterAnnotations, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestParameterAnnotations();
	void init$();
	static void main($StringArray* argv);
	static int32_t visitCtorParameterAnnotations($Class* clazz);
};

#endif // _TestParameterAnnotations_h_