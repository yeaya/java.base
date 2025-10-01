#ifndef _WalkWithSecurity$ExpectedResult_h_
#define _WalkWithSecurity$ExpectedResult_h_
//$ class WalkWithSecurity$ExpectedResult
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("PASS")
#undef PASS
#pragma push_macro("TOP_ONLY")
#undef TOP_ONLY
#pragma push_macro("FAIL")
#undef FAIL

class $export WalkWithSecurity$ExpectedResult : public ::java::lang::Enum {
	$class(WalkWithSecurity$ExpectedResult, 0, ::java::lang::Enum)
public:
	WalkWithSecurity$ExpectedResult();
	static $Array<WalkWithSecurity$ExpectedResult>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::WalkWithSecurity$ExpectedResult* valueOf($String* name);
	static $Array<WalkWithSecurity$ExpectedResult>* values();
	static ::WalkWithSecurity$ExpectedResult* PASS;
	static ::WalkWithSecurity$ExpectedResult* FAIL;
	static ::WalkWithSecurity$ExpectedResult* TOP_ONLY;
	static $Array<WalkWithSecurity$ExpectedResult>* $VALUES;
};

#pragma pop_macro("PASS")
#pragma pop_macro("TOP_ONLY")
#pragma pop_macro("FAIL")

#endif // _WalkWithSecurity$ExpectedResult_h_