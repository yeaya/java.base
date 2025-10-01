#ifndef _TestConstructorParameterAnnotations$NestedClass1_h_
#define _TestConstructorParameterAnnotations$NestedClass1_h_
//$ class TestConstructorParameterAnnotations$NestedClass1
//$ extends java.lang.Object

#include <java/lang/Object.h>

class TestConstructorParameterAnnotations;

class $export TestConstructorParameterAnnotations$NestedClass1 : public ::java::lang::Object {
	$class(TestConstructorParameterAnnotations$NestedClass1, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestConstructorParameterAnnotations$NestedClass1();
	void init$(::TestConstructorParameterAnnotations* this$0, int32_t parameter);
	::TestConstructorParameterAnnotations* this$0 = nullptr;
};

#endif // _TestConstructorParameterAnnotations$NestedClass1_h_