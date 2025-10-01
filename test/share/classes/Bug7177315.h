#ifndef _Bug7177315_h_
#define _Bug7177315_h_
//$ class Bug7177315
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DATA")
#undef DATA
#pragma push_macro("EXPECTED")
#undef EXPECTED

class $export Bug7177315 : public ::java::lang::Object {
	$class(Bug7177315, 0, ::java::lang::Object)
public:
	Bug7177315();
	void init$();
	static void main($StringArray* args);
	static $String* EXPECTED;
	static $StringArray* DATA;
};

#pragma pop_macro("DATA")
#pragma pop_macro("EXPECTED")

#endif // _Bug7177315_h_