#ifndef _Enum_h_
#define _Enum_h_
//$ class Enum
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ONE")
#undef ONE

class Enum : public ::java::lang::Enum {
	$class(Enum, 0, ::java::lang::Enum)
public:
	Enum();
	static $Array<Enum>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::Enum* valueOf($String* name);
	static $Array<Enum>* values();
	static ::Enum* ONE;
	static $Array<Enum>* $VALUES;
};

#pragma pop_macro("ONE")

#endif // _Enum_h_