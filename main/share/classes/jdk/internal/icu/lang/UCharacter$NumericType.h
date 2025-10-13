#ifndef _jdk_internal_icu_lang_UCharacter$NumericType_h_
#define _jdk_internal_icu_lang_UCharacter$NumericType_h_
//$ interface jdk.internal.icu.lang.UCharacter$NumericType
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("COUNT")
#undef COUNT
#pragma push_macro("DECIMAL")
#undef DECIMAL
#pragma push_macro("DIGIT")
#undef DIGIT
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("NUMERIC")
#undef NUMERIC

namespace jdk {
	namespace internal {
		namespace icu {
			namespace lang {

class UCharacter$NumericType : public ::java::lang::Object {
	$interface(UCharacter$NumericType, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static const int32_t NONE = 0;
	static const int32_t DECIMAL = 1;
	static const int32_t DIGIT = 2;
	static const int32_t NUMERIC = 3;
	static const int32_t COUNT = 4;
};

			} // lang
		} // icu
	} // internal
} // jdk

#pragma pop_macro("COUNT")
#pragma pop_macro("DECIMAL")
#pragma pop_macro("DIGIT")
#pragma pop_macro("NONE")
#pragma pop_macro("NUMERIC")

#endif // _jdk_internal_icu_lang_UCharacter$NumericType_h_