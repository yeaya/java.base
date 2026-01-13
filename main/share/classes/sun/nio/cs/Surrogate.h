#ifndef _sun_nio_cs_Surrogate_h_
#define _sun_nio_cs_Surrogate_h_
//$ class sun.nio.cs.Surrogate
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("MAX")
#undef MAX
#pragma push_macro("MAX_HIGH")
#undef MAX_HIGH
#pragma push_macro("MAX_LOW")
#undef MAX_LOW
#pragma push_macro("MIN")
#undef MIN
#pragma push_macro("MIN_HIGH")
#undef MIN_HIGH
#pragma push_macro("MIN_LOW")
#undef MIN_LOW
#pragma push_macro("UCS4_MAX")
#undef UCS4_MAX
#pragma push_macro("UCS4_MIN")
#undef UCS4_MIN

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
	static const char16_t MIN_HIGH = 55296; // Character.MIN_HIGH_SURROGATE
	static const char16_t MAX_HIGH = 56319; // Character.MAX_HIGH_SURROGATE
	static const char16_t MIN_LOW = 56320; // Character.MIN_LOW_SURROGATE
	static const char16_t MAX_LOW = 57343; // Character.MAX_LOW_SURROGATE
	static const char16_t MIN = 55296; // Character.MIN_SURROGATE
	static const char16_t MAX = 57343; // Character.MAX_SURROGATE
	static const int32_t UCS4_MIN = 65536; // Character.MIN_SUPPLEMENTARY_CODE_POINT
	static const int32_t UCS4_MAX = 1114111; // Character.MAX_CODE_POINT
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("MAX")
#pragma pop_macro("MAX_HIGH")
#pragma pop_macro("MAX_LOW")
#pragma pop_macro("MIN")
#pragma pop_macro("MIN_HIGH")
#pragma pop_macro("MIN_LOW")
#pragma pop_macro("UCS4_MAX")
#pragma pop_macro("UCS4_MIN")

#endif // _sun_nio_cs_Surrogate_h_