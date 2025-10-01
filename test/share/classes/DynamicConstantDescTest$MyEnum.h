#ifndef _DynamicConstantDescTest$MyEnum_h_
#define _DynamicConstantDescTest$MyEnum_h_
//$ class DynamicConstantDescTest$MyEnum
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("A")
#undef A
#pragma push_macro("B")
#undef B

class $export DynamicConstantDescTest$MyEnum : public ::java::lang::Enum {
	$class(DynamicConstantDescTest$MyEnum, 0, ::java::lang::Enum)
public:
	DynamicConstantDescTest$MyEnum();
	static $Array<DynamicConstantDescTest$MyEnum>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::DynamicConstantDescTest$MyEnum* valueOf($String* name);
	static $Array<DynamicConstantDescTest$MyEnum>* values();
	static ::DynamicConstantDescTest$MyEnum* A;
	static ::DynamicConstantDescTest$MyEnum* B;
	static $Array<DynamicConstantDescTest$MyEnum>* $VALUES;
};

#pragma pop_macro("A")
#pragma pop_macro("B")

#endif // _DynamicConstantDescTest$MyEnum_h_