#ifndef _jdk_internal_icu_util_CodePointMap$RangeOption_h_
#define _jdk_internal_icu_util_CodePointMap$RangeOption_h_
//$ class jdk.internal.icu.util.CodePointMap$RangeOption
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("FIXED_ALL_SURROGATES")
#undef FIXED_ALL_SURROGATES
#pragma push_macro("FIXED_LEAD_SURROGATES")
#undef FIXED_LEAD_SURROGATES
#pragma push_macro("NORMAL")
#undef NORMAL

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

class CodePointMap$RangeOption : public ::java::lang::Enum {
	$class(CodePointMap$RangeOption, 0, ::java::lang::Enum)
public:
	CodePointMap$RangeOption();
	static $Array<::jdk::internal::icu::util::CodePointMap$RangeOption>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::jdk::internal::icu::util::CodePointMap$RangeOption* valueOf($String* name);
	static $Array<::jdk::internal::icu::util::CodePointMap$RangeOption>* values();
	static ::jdk::internal::icu::util::CodePointMap$RangeOption* NORMAL;
	static ::jdk::internal::icu::util::CodePointMap$RangeOption* FIXED_LEAD_SURROGATES;
	static ::jdk::internal::icu::util::CodePointMap$RangeOption* FIXED_ALL_SURROGATES;
	static $Array<::jdk::internal::icu::util::CodePointMap$RangeOption>* $VALUES;
};

			} // util
		} // icu
	} // internal
} // jdk

#pragma pop_macro("FIXED_ALL_SURROGATES")
#pragma pop_macro("FIXED_LEAD_SURROGATES")
#pragma pop_macro("NORMAL")

#endif // _jdk_internal_icu_util_CodePointMap$RangeOption_h_