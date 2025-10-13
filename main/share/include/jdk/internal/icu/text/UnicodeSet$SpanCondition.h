#ifndef _jdk_internal_icu_text_UnicodeSet$SpanCondition_h_
#define _jdk_internal_icu_text_UnicodeSet$SpanCondition_h_
//$ class jdk.internal.icu.text.UnicodeSet$SpanCondition
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CONTAINED")
#undef CONTAINED
#pragma push_macro("NOT_CONTAINED")
#undef NOT_CONTAINED
#pragma push_macro("SIMPLE")
#undef SIMPLE

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $import UnicodeSet$SpanCondition : public ::java::lang::Enum {
	$class(UnicodeSet$SpanCondition, 0, ::java::lang::Enum)
public:
	UnicodeSet$SpanCondition();
	static $Array<::jdk::internal::icu::text::UnicodeSet$SpanCondition>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::jdk::internal::icu::text::UnicodeSet$SpanCondition* valueOf($String* name);
	static $Array<::jdk::internal::icu::text::UnicodeSet$SpanCondition>* values();
	static ::jdk::internal::icu::text::UnicodeSet$SpanCondition* NOT_CONTAINED;
	static ::jdk::internal::icu::text::UnicodeSet$SpanCondition* CONTAINED;
	static ::jdk::internal::icu::text::UnicodeSet$SpanCondition* SIMPLE;
	static $Array<::jdk::internal::icu::text::UnicodeSet$SpanCondition>* $VALUES;
};

			} // text
		} // icu
	} // internal
} // jdk

#pragma pop_macro("CONTAINED")
#pragma pop_macro("NOT_CONTAINED")
#pragma pop_macro("SIMPLE")

#endif // _jdk_internal_icu_text_UnicodeSet$SpanCondition_h_