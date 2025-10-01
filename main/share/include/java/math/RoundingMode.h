#ifndef _java_math_RoundingMode_h_
#define _java_math_RoundingMode_h_
//$ class java.math.RoundingMode
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("DOWN")
#undef DOWN
#pragma push_macro("FLOOR")
#undef FLOOR
#pragma push_macro("UNNECESSARY")
#undef UNNECESSARY
#pragma push_macro("CEILING")
#undef CEILING
#pragma push_macro("HALF_EVEN")
#undef HALF_EVEN
#pragma push_macro("UP")
#undef UP
#pragma push_macro("HALF_UP")
#undef HALF_UP
#pragma push_macro("HALF_DOWN")
#undef HALF_DOWN

namespace java {
	namespace math {

class $import RoundingMode : public ::java::lang::Enum {
	$class(RoundingMode, 0, ::java::lang::Enum)
public:
	RoundingMode();
	static $Array<::java::math::RoundingMode>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t oldMode);
	static ::java::math::RoundingMode* valueOf($String* name);
	static ::java::math::RoundingMode* valueOf(int32_t rm);
	static $Array<::java::math::RoundingMode>* values();
	static ::java::math::RoundingMode* UP;
	static ::java::math::RoundingMode* DOWN;
	static ::java::math::RoundingMode* CEILING;
	static ::java::math::RoundingMode* FLOOR;
	static ::java::math::RoundingMode* HALF_UP;
	static ::java::math::RoundingMode* HALF_DOWN;
	static ::java::math::RoundingMode* HALF_EVEN;
	static ::java::math::RoundingMode* UNNECESSARY;
	static $Array<::java::math::RoundingMode>* $VALUES;
	int32_t oldMode = 0;
};

	} // math
} // java

#pragma pop_macro("DOWN")
#pragma pop_macro("FLOOR")
#pragma pop_macro("UNNECESSARY")
#pragma pop_macro("CEILING")
#pragma pop_macro("HALF_EVEN")
#pragma pop_macro("UP")
#pragma pop_macro("HALF_UP")
#pragma pop_macro("HALF_DOWN")

#endif // _java_math_RoundingMode_h_