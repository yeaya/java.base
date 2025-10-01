#ifndef _jdk_internal_icu_text_UTF16_h_
#define _jdk_internal_icu_text_UTF16_h_
//$ class jdk.internal.icu.text.UTF16
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TRAIL_SURROGATE_MASK_")
#undef TRAIL_SURROGATE_MASK_
#pragma push_macro("LEAD_SURROGATE_BITMASK")
#undef LEAD_SURROGATE_BITMASK
#pragma push_macro("LEAD_SURROGATE_MIN_VALUE")
#undef LEAD_SURROGATE_MIN_VALUE
#pragma push_macro("LEAD_SURROGATE_BITS")
#undef LEAD_SURROGATE_BITS
#pragma push_macro("TRAIL_SURROGATE_MIN_VALUE")
#undef TRAIL_SURROGATE_MIN_VALUE
#pragma push_macro("SURROGATE_BITS")
#undef SURROGATE_BITS
#pragma push_macro("TRAIL_SURROGATE_BITMASK")
#undef TRAIL_SURROGATE_BITMASK
#pragma push_macro("CODEPOINT_MAX_VALUE")
#undef CODEPOINT_MAX_VALUE
#pragma push_macro("TRAIL_SURROGATE_BITS")
#undef TRAIL_SURROGATE_BITS
#pragma push_macro("TRAIL_SURROGATE_MAX_VALUE")
#undef TRAIL_SURROGATE_MAX_VALUE
#pragma push_macro("SUPPLEMENTARY_MIN_VALUE")
#undef SUPPLEMENTARY_MIN_VALUE
#pragma push_macro("SURROGATE_BITMASK")
#undef SURROGATE_BITMASK
#pragma push_macro("LEAD_SURROGATE_SHIFT_")
#undef LEAD_SURROGATE_SHIFT_
#pragma push_macro("CODEPOINT_MIN_VALUE")
#undef CODEPOINT_MIN_VALUE
#pragma push_macro("SURROGATE_MIN_VALUE")
#undef SURROGATE_MIN_VALUE
#pragma push_macro("LEAD_SURROGATE_OFFSET_")
#undef LEAD_SURROGATE_OFFSET_
#pragma push_macro("LEAD_SURROGATE_MAX_VALUE")
#undef LEAD_SURROGATE_MAX_VALUE

namespace java {
	namespace lang {
		class CharSequence;
		class StringBuffer;
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $import UTF16 : public ::java::lang::Object {
	$class(UTF16, $NO_CLASS_INIT, ::java::lang::Object)
public:
	UTF16();
	void init$();
	static int32_t _charAt($String* source, int32_t offset16, char16_t single);
	static int32_t _charAt(::java::lang::CharSequence* source, int32_t offset16, char16_t single);
	static ::java::lang::StringBuffer* append(::java::lang::StringBuffer* target, int32_t char32);
	static int32_t charAt($String* source, int32_t offset16);
	static int32_t charAt(::java::lang::CharSequence* source, int32_t offset16);
	static int32_t charAt($chars* source, int32_t start, int32_t limit, int32_t offset16);
	static int32_t getCharCount(int32_t char32);
	static char16_t getLeadSurrogate(int32_t char32);
	static char16_t getTrailSurrogate(int32_t char32);
	static bool isLeadSurrogate(char16_t char16);
	static bool isSurrogate(char16_t char16);
	static bool isTrailSurrogate(char16_t char16);
	static int32_t moveCodePointOffset($chars* source, int32_t start, int32_t limit, int32_t offset16, int32_t shift32);
	using ::java::lang::Object::toString;
	static $String* toString(int32_t ch);
	static $String* valueOf(int32_t char32);
	static const int32_t CODEPOINT_MIN_VALUE = 0;
	static const int32_t CODEPOINT_MAX_VALUE = 0x0010FFFF;
	static const int32_t SUPPLEMENTARY_MIN_VALUE = 0x00010000;
	static const int32_t LEAD_SURROGATE_MIN_VALUE = 0x0000D800;
	static const int32_t TRAIL_SURROGATE_MIN_VALUE = 0x0000DC00;
	static const int32_t LEAD_SURROGATE_MAX_VALUE = 0x0000DBFF;
	static const int32_t TRAIL_SURROGATE_MAX_VALUE = 0x0000DFFF;
	static const int32_t SURROGATE_MIN_VALUE = LEAD_SURROGATE_MIN_VALUE;
	static const int32_t LEAD_SURROGATE_BITMASK = (-1024);
	static const int32_t TRAIL_SURROGATE_BITMASK = (-1024);
	static const int32_t SURROGATE_BITMASK = (-2048);
	static const int32_t LEAD_SURROGATE_BITS = 0x0000D800;
	static const int32_t TRAIL_SURROGATE_BITS = 0x0000DC00;
	static const int32_t SURROGATE_BITS = 0x0000D800;
	static const int32_t LEAD_SURROGATE_SHIFT_ = 10;
	static const int32_t TRAIL_SURROGATE_MASK_ = 1023;
	static const int32_t LEAD_SURROGATE_OFFSET_ = 55232; // LEAD_SURROGATE_MIN_VALUE - (SUPPLEMENTARY_MIN_VALUE >> LEAD_SURROGATE_SHIFT_)
};

			} // text
		} // icu
	} // internal
} // jdk

#pragma pop_macro("TRAIL_SURROGATE_MASK_")
#pragma pop_macro("LEAD_SURROGATE_BITMASK")
#pragma pop_macro("LEAD_SURROGATE_MIN_VALUE")
#pragma pop_macro("LEAD_SURROGATE_BITS")
#pragma pop_macro("TRAIL_SURROGATE_MIN_VALUE")
#pragma pop_macro("SURROGATE_BITS")
#pragma pop_macro("TRAIL_SURROGATE_BITMASK")
#pragma pop_macro("CODEPOINT_MAX_VALUE")
#pragma pop_macro("TRAIL_SURROGATE_BITS")
#pragma pop_macro("TRAIL_SURROGATE_MAX_VALUE")
#pragma pop_macro("SUPPLEMENTARY_MIN_VALUE")
#pragma pop_macro("SURROGATE_BITMASK")
#pragma pop_macro("LEAD_SURROGATE_SHIFT_")
#pragma pop_macro("CODEPOINT_MIN_VALUE")
#pragma pop_macro("SURROGATE_MIN_VALUE")
#pragma pop_macro("LEAD_SURROGATE_OFFSET_")
#pragma pop_macro("LEAD_SURROGATE_MAX_VALUE")

#endif // _jdk_internal_icu_text_UTF16_h_