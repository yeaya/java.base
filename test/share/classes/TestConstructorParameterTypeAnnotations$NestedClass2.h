#ifndef _TestConstructorParameterTypeAnnotations$NestedClass2_h_
#define _TestConstructorParameterTypeAnnotations$NestedClass2_h_
//$ class TestConstructorParameterTypeAnnotations$NestedClass2
//$ extends java.lang.Object

#include <java/lang/Object.h>

class TestConstructorParameterTypeAnnotations;

class $export TestConstructorParameterTypeAnnotations$NestedClass2 : public ::java::lang::Object {
	$class(TestConstructorParameterTypeAnnotations$NestedClass2, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestConstructorParameterTypeAnnotations$NestedClass2();
	void init$(::TestConstructorParameterTypeAnnotations* this$0, int32_t parameter1, int32_t parameter2);
	::TestConstructorParameterTypeAnnotations* this$0 = nullptr;
};

#endif // _TestConstructorParameterTypeAnnotations$NestedClass2_h_