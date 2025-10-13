#ifndef _UniTest_Stooge_h_
#define _UniTest_Stooge_h_
//$ class UniTest.Stooge
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CURLY")
#undef CURLY
#pragma push_macro("LARRY")
#undef LARRY
#pragma push_macro("MOE")
#undef MOE

namespace UniTest {

class Stooge : public ::java::lang::Enum {
	$class(Stooge, 0, ::java::lang::Enum)
public:
	Stooge();
	static $Array<::UniTest::Stooge>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::UniTest::Stooge* valueOf($String* name);
	static $Array<::UniTest::Stooge>* values();
	static ::UniTest::Stooge* LARRY;
	static ::UniTest::Stooge* MOE;
	static ::UniTest::Stooge* CURLY;
	static $Array<::UniTest::Stooge>* $VALUES;
};

} // UniTest

#pragma pop_macro("CURLY")
#pragma pop_macro("LARRY")
#pragma pop_macro("MOE")

#endif // _UniTest_Stooge_h_