#ifndef _jdk_internal_icu_text_FilteredNormalizer2_h_
#define _jdk_internal_icu_text_FilteredNormalizer2_h_
//$ class jdk.internal.icu.text.FilteredNormalizer2
//$ extends jdk.internal.icu.text.Normalizer2

#include <jdk/internal/icu/text/Normalizer2.h>

namespace java {
	namespace lang {
		class Appendable;
		class CharSequence;
		class StringBuilder;
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {
				class UnicodeSet;
				class UnicodeSet$SpanCondition;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $import FilteredNormalizer2 : public ::jdk::internal::icu::text::Normalizer2 {
	$class(FilteredNormalizer2, $NO_CLASS_INIT, ::jdk::internal::icu::text::Normalizer2)
public:
	FilteredNormalizer2();
	void init$(::jdk::internal::icu::text::Normalizer2* n2, ::jdk::internal::icu::text::UnicodeSet* filterSet);
	virtual ::java::lang::StringBuilder* append(::java::lang::StringBuilder* first, ::java::lang::CharSequence* second) override;
	virtual int32_t getCombiningClass(int32_t c) override;
	virtual $String* getDecomposition(int32_t c) override;
	virtual bool hasBoundaryBefore(int32_t c) override;
	virtual bool isNormalized(::java::lang::CharSequence* s) override;
	using ::jdk::internal::icu::text::Normalizer2::normalize;
	virtual ::java::lang::StringBuilder* normalize(::java::lang::CharSequence* src, ::java::lang::StringBuilder* dest) override;
	virtual ::java::lang::Appendable* normalize(::java::lang::CharSequence* src, ::java::lang::Appendable* dest) override;
	::java::lang::Appendable* normalize(::java::lang::CharSequence* src, ::java::lang::Appendable* dest, ::jdk::internal::icu::text::UnicodeSet$SpanCondition* spanCondition);
	virtual ::java::lang::StringBuilder* normalizeSecondAndAppend(::java::lang::StringBuilder* first, ::java::lang::CharSequence* second) override;
	::java::lang::StringBuilder* normalizeSecondAndAppend(::java::lang::StringBuilder* first, ::java::lang::CharSequence* second, bool doNormalize);
	virtual int32_t spanQuickCheckYes(::java::lang::CharSequence* s) override;
	::jdk::internal::icu::text::Normalizer2* norm2 = nullptr;
	::jdk::internal::icu::text::UnicodeSet* set = nullptr;
};

			} // text
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_text_FilteredNormalizer2_h_