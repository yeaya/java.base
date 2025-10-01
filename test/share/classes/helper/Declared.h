#ifndef _helper_Declared_h_
#define _helper_Declared_h_
//$ class helper.Declared
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("NO")
#undef NO
#pragma push_macro("YES")
#undef YES

namespace helper {

class $export Declared : public ::java::lang::Enum {
	$class(Declared, 0, ::java::lang::Enum)
public:
	Declared();
	static $Array<::helper::Declared>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::helper::Declared* valueOf($String* name);
	static $Array<::helper::Declared>* values();
	static ::helper::Declared* YES;
	static ::helper::Declared* NO;
	static $Array<::helper::Declared>* $VALUES;
};

} // helper

#pragma pop_macro("NO")
#pragma pop_macro("YES")

#endif // _helper_Declared_h_