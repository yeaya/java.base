#ifndef _helper_Mod_h_
#define _helper_Mod_h_
//$ class helper.Mod
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ABSTRACT")
#undef ABSTRACT
#pragma push_macro("DEFAULT")
#undef DEFAULT
#pragma push_macro("REGULAR")
#undef REGULAR
#pragma push_macro("STATIC")
#undef STATIC

namespace helper {

class $export Mod : public ::java::lang::Enum {
	$class(Mod, 0, ::java::lang::Enum)
public:
	Mod();
	static $Array<::helper::Mod>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::helper::Mod* valueOf($String* name);
	static $Array<::helper::Mod>* values();
	static ::helper::Mod* DEFAULT;
	static ::helper::Mod* STATIC;
	static ::helper::Mod* REGULAR;
	static ::helper::Mod* ABSTRACT;
	static $Array<::helper::Mod>* $VALUES;
};

} // helper

#pragma pop_macro("ABSTRACT")
#pragma pop_macro("DEFAULT")
#pragma pop_macro("REGULAR")
#pragma pop_macro("STATIC")

#endif // _helper_Mod_h_