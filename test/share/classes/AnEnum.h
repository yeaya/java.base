#ifndef _AnEnum_h_
#define _AnEnum_h_
//$ class AnEnum
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("FOO")
#undef FOO

class AnEnum : public ::java::lang::Enum {
	$class(AnEnum, 0, ::java::lang::Enum)
public:
	AnEnum();
	static $Array<AnEnum>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::AnEnum* valueOf($String* name);
	static $Array<AnEnum>* values();
	static ::AnEnum* FOO;
	static $Array<AnEnum>* $VALUES;
};

#pragma pop_macro("FOO")

#endif // _AnEnum_h_