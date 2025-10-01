#ifndef _EqualsIgnoreCase_h_
#define _EqualsIgnoreCase_h_
//$ class EqualsIgnoreCase
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CAPITAL_GREEK_THETA")
#undef CAPITAL_GREEK_THETA
#pragma push_macro("SMALL_I")
#undef SMALL_I
#pragma push_macro("CAPITAL_I_WITH_DOT")
#undef CAPITAL_I_WITH_DOT
#pragma push_macro("LOWER_GREEK_THETA")
#undef LOWER_GREEK_THETA
#pragma push_macro("CAPITAL_I")
#undef CAPITAL_I
#pragma push_macro("SMALL_DOTLESS_I")
#undef SMALL_DOTLESS_I

class $export EqualsIgnoreCase : public ::java::lang::Object {
	$class(EqualsIgnoreCase, 0, ::java::lang::Object)
public:
	EqualsIgnoreCase();
	void init$();
	static void compareFuncs($String* s1, $String* s2, bool expectEquals, bool expectTuTl);
	static void main($StringArray* args);
	static bool toUpperToLowerOriginals($String* str1, $String* str2);
	static $String* SMALL_I;
	static $String* CAPITAL_I;
	static $String* SMALL_DOTLESS_I;
	static $String* CAPITAL_I_WITH_DOT;
	static $String* LOWER_GREEK_THETA;
	static $String* CAPITAL_GREEK_THETA;
};

#pragma pop_macro("CAPITAL_GREEK_THETA")
#pragma pop_macro("SMALL_I")
#pragma pop_macro("CAPITAL_I_WITH_DOT")
#pragma pop_macro("LOWER_GREEK_THETA")
#pragma pop_macro("CAPITAL_I")
#pragma pop_macro("SMALL_DOTLESS_I")

#endif // _EqualsIgnoreCase_h_