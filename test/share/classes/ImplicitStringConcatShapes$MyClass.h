#ifndef _ImplicitStringConcatShapes$MyClass_h_
#define _ImplicitStringConcatShapes$MyClass_h_
//$ class ImplicitStringConcatShapes$MyClass
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export ImplicitStringConcatShapes$MyClass : public ::java::lang::Object {
	$class(ImplicitStringConcatShapes$MyClass, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ImplicitStringConcatShapes$MyClass();
	void init$(int32_t i);
	virtual $String* toString() override;
	int32_t i = 0;
};

#endif // _ImplicitStringConcatShapes$MyClass_h_