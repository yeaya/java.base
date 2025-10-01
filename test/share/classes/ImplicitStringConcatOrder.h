#ifndef _ImplicitStringConcatOrder_h_
#define _ImplicitStringConcatOrder_h_
//$ class ImplicitStringConcatOrder
//$ extends java.lang.Object

#include <java/lang/Array.h>

class ImplicitStringConcatOrder$MyClass;

class $export ImplicitStringConcatOrder : public ::java::lang::Object {
	$class(ImplicitStringConcatOrder, 0, ::java::lang::Object)
public:
	ImplicitStringConcatOrder();
	void init$();
	static void main($StringArray* args);
	static void test($String* expected, $String* actual);
	static ::ImplicitStringConcatOrder$MyClass* c;
};

#endif // _ImplicitStringConcatOrder_h_