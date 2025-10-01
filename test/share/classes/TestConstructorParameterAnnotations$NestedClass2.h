#ifndef _TestConstructorParameterAnnotations$NestedClass2_h_
#define _TestConstructorParameterAnnotations$NestedClass2_h_
//$ class TestConstructorParameterAnnotations$NestedClass2
//$ extends java.lang.Object

#include <java/lang/Object.h>

class TestConstructorParameterAnnotations;

class $export TestConstructorParameterAnnotations$NestedClass2 : public ::java::lang::Object {
	$class(TestConstructorParameterAnnotations$NestedClass2, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestConstructorParameterAnnotations$NestedClass2();
	void init$(::TestConstructorParameterAnnotations* this$0, int32_t parameter1, int32_t parameter2);
	::TestConstructorParameterAnnotations* this$0 = nullptr;
};

#endif // _TestConstructorParameterAnnotations$NestedClass2_h_