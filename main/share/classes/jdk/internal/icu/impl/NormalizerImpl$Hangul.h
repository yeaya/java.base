#ifndef _jdk_internal_icu_impl_NormalizerImpl$Hangul_h_
#define _jdk_internal_icu_impl_NormalizerImpl$Hangul_h_
//$ class jdk.internal.icu.impl.NormalizerImpl$Hangul
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("HANGUL_BASE")
#undef HANGUL_BASE
#pragma push_macro("HANGUL_COUNT")
#undef HANGUL_COUNT
#pragma push_macro("HANGUL_END")
#undef HANGUL_END
#pragma push_macro("HANGUL_LIMIT")
#undef HANGUL_LIMIT
#pragma push_macro("JAMO_L_BASE")
#undef JAMO_L_BASE
#pragma push_macro("JAMO_L_COUNT")
#undef JAMO_L_COUNT
#pragma push_macro("JAMO_T_BASE")
#undef JAMO_T_BASE
#pragma push_macro("JAMO_T_COUNT")
#undef JAMO_T_COUNT
#pragma push_macro("JAMO_V_BASE")
#undef JAMO_V_BASE
#pragma push_macro("JAMO_V_COUNT")
#undef JAMO_V_COUNT

namespace java {
	namespace lang {
		class Appendable;
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class NormalizerImpl$Hangul : public ::java::lang::Object {
	$class(NormalizerImpl$Hangul, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NormalizerImpl$Hangul();
	void init$();
	static int32_t decompose(int32_t c, ::java::lang::Appendable* buffer);
	static bool isHangul(int32_t c);
	static bool isHangulLV(int32_t c);
	static const int32_t JAMO_L_BASE = 4352;
	static const int32_t JAMO_V_BASE = 4449;
	static const int32_t JAMO_T_BASE = 4519;
	static const int32_t HANGUL_BASE = 0x0000AC00;
	static const int32_t HANGUL_END = 0x0000D7A3;
	static const int32_t JAMO_L_COUNT = 19;
	static const int32_t JAMO_V_COUNT = 21;
	static const int32_t JAMO_T_COUNT = 28;
	static const int32_t HANGUL_COUNT = 11172; // JAMO_L_COUNT * JAMO_V_COUNT * JAMO_T_COUNT
	static const int32_t HANGUL_LIMIT = 55204; // HANGUL_BASE + HANGUL_COUNT
};

			} // impl
		} // icu
	} // internal
} // jdk

#pragma pop_macro("HANGUL_BASE")
#pragma pop_macro("HANGUL_COUNT")
#pragma pop_macro("HANGUL_END")
#pragma pop_macro("HANGUL_LIMIT")
#pragma pop_macro("JAMO_L_BASE")
#pragma pop_macro("JAMO_L_COUNT")
#pragma pop_macro("JAMO_T_BASE")
#pragma pop_macro("JAMO_T_COUNT")
#pragma pop_macro("JAMO_V_BASE")
#pragma pop_macro("JAMO_V_COUNT")

#endif // _jdk_internal_icu_impl_NormalizerImpl$Hangul_h_