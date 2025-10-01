#ifndef _Utopia_h_
#define _Utopia_h_
//$ class Utopia
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("SHANGRI_LA")
#undef SHANGRI_LA

class $export Utopia : public ::java::lang::Enum {
	$class(Utopia, 0, ::java::lang::Enum)
public:
	Utopia();
	static $Array<Utopia>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::Utopia* valueOf($String* name);
	static $Array<Utopia>* values();
	static ::Utopia* SHANGRI_LA;
	static $Array<Utopia>* $VALUES;
};

#pragma pop_macro("SHANGRI_LA")

#endif // _Utopia_h_