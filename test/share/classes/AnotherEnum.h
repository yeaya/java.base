#ifndef _AnotherEnum_h_
#define _AnotherEnum_h_
//$ class AnotherEnum
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BAR")
#undef BAR

class AnotherEnum : public ::java::lang::Enum {
	$class(AnotherEnum, 0, ::java::lang::Enum)
public:
	AnotherEnum();
	static $Array<AnotherEnum>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::AnotherEnum* valueOf($String* name);
	static $Array<AnotherEnum>* values();
	static ::AnotherEnum* BAR;
	static $Array<AnotherEnum>* $VALUES;
};

#pragma pop_macro("BAR")

#endif // _AnotherEnum_h_