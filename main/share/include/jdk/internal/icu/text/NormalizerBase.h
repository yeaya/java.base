#ifndef _jdk_internal_icu_text_NormalizerBase_h_
#define _jdk_internal_icu_text_NormalizerBase_h_
//$ class jdk.internal.icu.text.NormalizerBase
//$ extends java.lang.Cloneable

#include <jdk/internal/icu/text/UCharacterIterator.h>

#pragma push_macro("DONE")
#undef DONE
#pragma push_macro("NFC")
#undef NFC
#pragma push_macro("NFD")
#undef NFD
#pragma push_macro("NFKC")
#undef NFKC
#pragma push_macro("NFKD")
#undef NFKD
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("UNICODE_3_2")
#undef UNICODE_3_2
#pragma push_macro("UNICODE_3_2_0_ORIGINAL")
#undef UNICODE_3_2_0_ORIGINAL
#pragma push_macro("UNICODE_LATEST")
#undef UNICODE_LATEST

namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace text {
		class CharacterIterator;
		class Normalizer$Form;
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {
				class Normalizer2;
				class NormalizerBase$Mode;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $import NormalizerBase : public ::java::lang::Cloneable {
	$class(NormalizerBase, 0, ::java::lang::Cloneable)
public:
	NormalizerBase();
	void init$($String* str, ::jdk::internal::icu::text::NormalizerBase$Mode* mode, int32_t opt);
	void init$($String* str, ::jdk::internal::icu::text::NormalizerBase$Mode* mode);
	void init$(::java::text::CharacterIterator* iter, ::jdk::internal::icu::text::NormalizerBase$Mode* mode, int32_t opt);
	void init$(::java::text::CharacterIterator* iter, ::jdk::internal::icu::text::NormalizerBase$Mode* mode);
	void clearBuffer();
	virtual $Object* clone() override;
	int32_t current();
	int32_t endIndex();
	int32_t getBeginIndex();
	int32_t getEndIndex();
	int32_t getIndex();
	::jdk::internal::icu::text::NormalizerBase$Mode* getMode();
	static bool isNormalized($String* str, ::jdk::internal::icu::text::NormalizerBase$Mode* mode, int32_t options);
	static bool isNormalized($String* str, ::java::text::Normalizer$Form* form);
	static bool isNormalized($String* str, ::java::text::Normalizer$Form* form, int32_t options);
	int32_t next();
	bool nextNormalize();
	static $String* normalize($String* str, ::jdk::internal::icu::text::NormalizerBase$Mode* mode, int32_t options);
	static $String* normalize($String* str, ::java::text::Normalizer$Form* form);
	static $String* normalize($String* str, ::java::text::Normalizer$Form* form, int32_t options);
	int32_t previous();
	bool previousNormalize();
	void reset();
	int32_t setIndex(int32_t index);
	void setIndexOnly(int32_t index);
	void setMode(::jdk::internal::icu::text::NormalizerBase$Mode* newMode);
	void setText($String* newText);
	void setText(::java::text::CharacterIterator* newText);
	static ::jdk::internal::icu::text::NormalizerBase$Mode* toMode(::java::text::Normalizer$Form* form);
	::jdk::internal::icu::text::UCharacterIterator* text = nullptr;
	::jdk::internal::icu::text::Normalizer2* norm2 = nullptr;
	::jdk::internal::icu::text::NormalizerBase$Mode* mode = nullptr;
	int32_t options = 0;
	int32_t currentIndex = 0;
	int32_t nextIndex = 0;
	::java::lang::StringBuilder* buffer = nullptr;
	int32_t bufferPos = 0;
	static const int32_t UNICODE_3_2 = 32;
	static const int32_t UNICODE_3_2_0_ORIGINAL = UNICODE_3_2;
	static const int32_t UNICODE_LATEST = 0;
	static const int32_t DONE = ::jdk::internal::icu::text::UCharacterIterator::DONE;
	static ::jdk::internal::icu::text::NormalizerBase$Mode* NONE;
	static ::jdk::internal::icu::text::NormalizerBase$Mode* NFD;
	static ::jdk::internal::icu::text::NormalizerBase$Mode* NFKD;
	static ::jdk::internal::icu::text::NormalizerBase$Mode* NFC;
	static ::jdk::internal::icu::text::NormalizerBase$Mode* NFKC;
};

			} // text
		} // icu
	} // internal
} // jdk

#pragma pop_macro("DONE")
#pragma pop_macro("NFC")
#pragma pop_macro("NFD")
#pragma pop_macro("NFKC")
#pragma pop_macro("NFKD")
#pragma pop_macro("NONE")
#pragma pop_macro("UNICODE_3_2")
#pragma pop_macro("UNICODE_3_2_0_ORIGINAL")
#pragma pop_macro("UNICODE_LATEST")

#endif // _jdk_internal_icu_text_NormalizerBase_h_