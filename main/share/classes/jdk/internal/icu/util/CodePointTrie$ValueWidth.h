#ifndef _jdk_internal_icu_util_CodePointTrie$ValueWidth_h_
#define _jdk_internal_icu_util_CodePointTrie$ValueWidth_h_
//$ class jdk.internal.icu.util.CodePointTrie$ValueWidth
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BITS_8")
#undef BITS_8
#pragma push_macro("BITS_32")
#undef BITS_32
#pragma push_macro("BITS_16")
#undef BITS_16

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

class CodePointTrie$ValueWidth : public ::java::lang::Enum {
	$class(CodePointTrie$ValueWidth, 0, ::java::lang::Enum)
public:
	CodePointTrie$ValueWidth();
	static $Array<::jdk::internal::icu::util::CodePointTrie$ValueWidth>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::jdk::internal::icu::util::CodePointTrie$ValueWidth* valueOf($String* name);
	static $Array<::jdk::internal::icu::util::CodePointTrie$ValueWidth>* values();
	static ::jdk::internal::icu::util::CodePointTrie$ValueWidth* BITS_16;
	static ::jdk::internal::icu::util::CodePointTrie$ValueWidth* BITS_32;
	static ::jdk::internal::icu::util::CodePointTrie$ValueWidth* BITS_8;
	static $Array<::jdk::internal::icu::util::CodePointTrie$ValueWidth>* $VALUES;
};

			} // util
		} // icu
	} // internal
} // jdk

#pragma pop_macro("BITS_8")
#pragma pop_macro("BITS_32")
#pragma pop_macro("BITS_16")

#endif // _jdk_internal_icu_util_CodePointTrie$ValueWidth_h_