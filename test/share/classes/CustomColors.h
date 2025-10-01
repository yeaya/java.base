#ifndef _CustomColors_h_
#define _CustomColors_h_
//$ class CustomColors
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("FUCHSIA")
#undef FUCHSIA
#pragma push_macro("MULBERRY")
#undef MULBERRY

class CustomColors : public ::java::lang::Enum {
	$class(CustomColors, 0, ::java::lang::Enum)
public:
	CustomColors();
	static $Array<CustomColors>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t arg);
	void init$($String* $enum$name, int32_t $enum$ordinal, double arg);
	static ::CustomColors* valueOf($String* name);
	static $Array<CustomColors>* values();
	static ::CustomColors* FUCHSIA;
	static ::CustomColors* MULBERRY;
	static $Array<CustomColors>* $VALUES;
};

#pragma pop_macro("FUCHSIA")
#pragma pop_macro("MULBERRY")

#endif // _CustomColors_h_