#ifndef _jdk_internal_icu_text_BidiWriter_h_
#define _jdk_internal_icu_text_BidiWriter_h_
//$ class jdk.internal.icu.text.BidiWriter
//$ extends java.lang.Object

#include <java/lang/Array.h>
#include <jdk/internal/icu/lang/UCharacter.h>

#pragma push_macro("MASK_R_AL")
#undef MASK_R_AL
#pragma push_macro("LRM_CHAR")
#undef LRM_CHAR
#pragma push_macro("RIGHT_TO_LEFT_ARABIC")
#undef RIGHT_TO_LEFT_ARABIC
#pragma push_macro("RIGHT_TO_LEFT")
#undef RIGHT_TO_LEFT
#pragma push_macro("RLM_CHAR")
#undef RLM_CHAR

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {
				class BidiBase;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $import BidiWriter : public ::java::lang::Object {
	$class(BidiWriter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BidiWriter();
	void init$();
	static bool IsCombining(int32_t type);
	static $String* doWriteForward($String* src, int32_t options);
	static $String* doWriteForward($chars* text, int32_t start, int32_t limit, int32_t options);
	static $String* doWriteReverse($chars* text, int32_t start, int32_t limit, int32_t options);
	static $String* writeReordered(::jdk::internal::icu::text::BidiBase* bidi, int32_t options);
	static $String* writeReverse($String* src, int32_t options);
	static const char16_t LRM_CHAR = 8206;
	static const char16_t RLM_CHAR = 8207;
	static const int32_t MASK_R_AL = (1 << ::jdk::internal::icu::lang::UCharacter::RIGHT_TO_LEFT | 1 << ::jdk::internal::icu::lang::UCharacter::RIGHT_TO_LEFT_ARABIC);
};

			} // text
		} // icu
	} // internal
} // jdk

#pragma pop_macro("MASK_R_AL")
#pragma pop_macro("LRM_CHAR")
#pragma pop_macro("RIGHT_TO_LEFT_ARABIC")
#pragma pop_macro("RIGHT_TO_LEFT")
#pragma pop_macro("RLM_CHAR")

#endif // _jdk_internal_icu_text_BidiWriter_h_