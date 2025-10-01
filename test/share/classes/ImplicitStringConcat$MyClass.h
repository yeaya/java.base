#ifndef _ImplicitStringConcat$MyClass_h_
#define _ImplicitStringConcat$MyClass_h_
//$ class ImplicitStringConcat$MyClass
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export ImplicitStringConcat$MyClass : public ::java::lang::Object {
	$class(ImplicitStringConcat$MyClass, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ImplicitStringConcat$MyClass();
	void init$();
	virtual $String* toString() override;
};

#endif // _ImplicitStringConcat$MyClass_h_