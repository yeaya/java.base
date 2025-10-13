#ifndef _jdk_internal_icu_impl_Punycode_h_
#define _jdk_internal_icu_impl_Punycode_h_
//$ class jdk.internal.icu.impl.Punycode
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BASE")
#undef BASE
#pragma push_macro("CAPITAL_A")
#undef CAPITAL_A
#pragma push_macro("CAPITAL_Z")
#undef CAPITAL_Z
#pragma push_macro("DAMP")
#undef DAMP
#pragma push_macro("DELIMITER")
#undef DELIMITER
#pragma push_macro("HYPHEN")
#undef HYPHEN
#pragma push_macro("INITIAL_BIAS")
#undef INITIAL_BIAS
#pragma push_macro("INITIAL_N")
#undef INITIAL_N
#pragma push_macro("MAX_CP_COUNT")
#undef MAX_CP_COUNT
#pragma push_macro("NINE")
#undef NINE
#pragma push_macro("SKEW")
#undef SKEW
#pragma push_macro("SMALL_A")
#undef SMALL_A
#pragma push_macro("SMALL_Z")
#undef SMALL_Z
#pragma push_macro("TMAX")
#undef TMAX
#pragma push_macro("TMIN")
#undef TMIN
#pragma push_macro("UINT_MAGIC")
#undef UINT_MAGIC
#pragma push_macro("ULONG_MAGIC")
#undef ULONG_MAGIC
#pragma push_macro("ZERO")
#undef ZERO

namespace java {
	namespace lang {
		class StringBuffer;
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class Punycode : public ::java::lang::Object {
	$class(Punycode, 0, ::java::lang::Object)
public:
	Punycode();
	void init$();
	static int32_t adaptBias(int32_t delta, int32_t length, bool firstTime);
	static char16_t asciiCaseMap(char16_t b, bool uppercase);
	static ::java::lang::StringBuffer* decode(::java::lang::StringBuffer* src, $booleans* caseFlags);
	static char16_t digitToBasic(int32_t digit, bool uppercase);
	static ::java::lang::StringBuffer* encode(::java::lang::StringBuffer* src, $booleans* caseFlags);
	static bool isBasic(int32_t ch);
	static bool isBasicUpperCase(int32_t ch);
	static bool isSurrogate(int32_t ch);
	static const int32_t BASE = 36;
	static const int32_t TMIN = 1;
	static const int32_t TMAX = 26;
	static const int32_t SKEW = 38;
	static const int32_t DAMP = 700;
	static const int32_t INITIAL_BIAS = 72;
	static const int32_t INITIAL_N = 128;
	static const int32_t HYPHEN = 45;
	static const int32_t DELIMITER = HYPHEN;
	static const int32_t ZERO = 48;
	static const int32_t NINE = 57;
	static const int32_t SMALL_A = 97;
	static const int32_t SMALL_Z = 122;
	static const int32_t CAPITAL_A = 65;
	static const int32_t CAPITAL_Z = 90;
	static const int32_t MAX_CP_COUNT = 256;
	static const int32_t UINT_MAGIC = 0x80000000;
	static const int64_t ULONG_MAGIC = (int64_t)0x8000000000000000;
	static $ints* basicToDigit;
};

			} // impl
		} // icu
	} // internal
} // jdk

#pragma pop_macro("BASE")
#pragma pop_macro("CAPITAL_A")
#pragma pop_macro("CAPITAL_Z")
#pragma pop_macro("DAMP")
#pragma pop_macro("DELIMITER")
#pragma pop_macro("HYPHEN")
#pragma pop_macro("INITIAL_BIAS")
#pragma pop_macro("INITIAL_N")
#pragma pop_macro("MAX_CP_COUNT")
#pragma pop_macro("NINE")
#pragma pop_macro("SKEW")
#pragma pop_macro("SMALL_A")
#pragma pop_macro("SMALL_Z")
#pragma pop_macro("TMAX")
#pragma pop_macro("TMIN")
#pragma pop_macro("UINT_MAGIC")
#pragma pop_macro("ULONG_MAGIC")
#pragma pop_macro("ZERO")

#endif // _jdk_internal_icu_impl_Punycode_h_