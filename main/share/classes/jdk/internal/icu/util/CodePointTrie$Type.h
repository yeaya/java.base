#ifndef _jdk_internal_icu_util_CodePointTrie$Type_h_
#define _jdk_internal_icu_util_CodePointTrie$Type_h_
//$ class jdk.internal.icu.util.CodePointTrie$Type
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("SMALL")
#undef SMALL
#pragma push_macro("FAST")
#undef FAST

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

class CodePointTrie$Type : public ::java::lang::Enum {
	$class(CodePointTrie$Type, 0, ::java::lang::Enum)
public:
	CodePointTrie$Type();
	static $Array<::jdk::internal::icu::util::CodePointTrie$Type>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::jdk::internal::icu::util::CodePointTrie$Type* valueOf($String* name);
	static $Array<::jdk::internal::icu::util::CodePointTrie$Type>* values();
	static ::jdk::internal::icu::util::CodePointTrie$Type* FAST;
	static ::jdk::internal::icu::util::CodePointTrie$Type* SMALL;
	static $Array<::jdk::internal::icu::util::CodePointTrie$Type>* $VALUES;
};

			} // util
		} // icu
	} // internal
} // jdk

#pragma pop_macro("SMALL")
#pragma pop_macro("FAST")

#endif // _jdk_internal_icu_util_CodePointTrie$Type_h_