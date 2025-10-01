#ifndef _ImplicitStringConcatOrder$MyClass_h_
#define _ImplicitStringConcatOrder$MyClass_h_
//$ class ImplicitStringConcatOrder$MyClass
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export ImplicitStringConcatOrder$MyClass : public ::java::lang::Object {
	$class(ImplicitStringConcatOrder$MyClass, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ImplicitStringConcatOrder$MyClass();
	void init$();
	virtual $String* toString() override;
	int32_t x = 0;
};

#endif // _ImplicitStringConcatOrder$MyClass_h_