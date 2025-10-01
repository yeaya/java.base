#ifndef _sun_nio_cs_Surrogate_h_
#define _sun_nio_cs_Surrogate_h_
//$ class sun.nio.cs.Surrogate
//$ extends java.lang.Object

#include <java/lang/Character.h>

#pragma push_macro("MAX_SURROGATE")
#undef MAX_SURROGATE
#pragma push_macro("MIN_LOW_SURROGATE")
#undef MIN_LOW_SURROGATE
#pragma push_macro("UCS4_MAX")
#undef UCS4_MAX
#pragma push_macro("MAX")
#undef MAX
#pragma push_macro("MAX_HIGH")
#undef MAX_HIGH
#pragma push_macro("MIN_LOW")
#undef MIN_LOW
#pragma push_macro("MIN_SURROGATE")
#undef MIN_SURROGATE
#pragma push_macro("MIN_SUPPLEMENTARY_CODE_POINT")
#undef MIN_SUPPLEMENTARY_CODE_POINT
#pragma push_macro("UCS4_MIN")
#undef UCS4_MIN
#pragma push_macro("MIN")
#undef MIN
#pragma push_macro("MAX_HIGH_SURROGATE")
#undef MAX_HIGH_SURROGATE
#pragma push_macro("MAX_LOW_SURROGATE")
#undef MAX_LOW_SURROGATE
#pragma push_macro("MAX_LOW")
#undef MAX_LOW
#pragma push_macro("MIN_HIGH_SURROGATE")
#undef MIN_HIGH_SURROGATE
#pragma push_macro("MIN_HIGH")
#undef MIN_HIGH
#pragma push_macro("MAX_CODE_POINT")
#undef MAX_CODE_POINT

namespace sun {
	namespace nio {
		namespace cs {

class $export Surrogate : public ::java::lang::Object {
	$class(Surrogate, 0, ::java::lang::Object)
public:
	Surrogate();
	void init$();
	static char16_t high(int32_t uc);
	static bool is(int32_t c);
	static bool isHigh(int32_t c);
	static bool isLow(int32_t c);
	static char16_t low(int32_t uc);
	static bool neededFor(int32_t uc);
	static int32_t toUCS4(char16_t c, char16_t d);
	static bool $assertionsDisabled;
	static const char16_t MIN_HIGH = ::java::lang::Character::MIN_HIGH_SURROGATE;
	static const char16_t MAX_HIGH = ::java::lang::Character::MAX_HIGH_SURROGATE;
	static const char16_t MIN_LOW = ::java::lang::Character::MIN_LOW_SURROGATE;
	static const char16_t MAX_LOW = ::java::lang::Character::MAX_LOW_SURROGATE;
	static const char16_t MIN = ::java::lang::Character::MIN_SURROGATE;
	static const char16_t MAX = ::java::lang::Character::MAX_SURROGATE;
	static const int32_t UCS4_MIN = ::java::lang::Character::MIN_SUPPLEMENTARY_CODE_POINT;
	static const int32_t UCS4_MAX = ::java::lang::Character::MAX_CODE_POINT;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("MAX_SURROGATE")
#pragma pop_macro("MIN_LOW_SURROGATE")
#pragma pop_macro("UCS4_MAX")
#pragma pop_macro("MAX")
#pragma pop_macro("MAX_HIGH")
#pragma pop_macro("MIN_LOW")
#pragma pop_macro("MIN_SURROGATE")
#pragma pop_macro("MIN_SUPPLEMENTARY_CODE_POINT")
#pragma pop_macro("UCS4_MIN")
#pragma pop_macro("MIN")
#pragma pop_macro("MAX_HIGH_SURROGATE")
#pragma pop_macro("MAX_LOW_SURROGATE")
#pragma pop_macro("MAX_LOW")
#pragma pop_macro("MIN_HIGH_SURROGATE")
#pragma pop_macro("MIN_HIGH")
#pragma pop_macro("MAX_CODE_POINT")

#endif // _sun_nio_cs_Surrogate_h_