#ifndef _jdk_internal_icu_lang_UCharacterDirection_h_
#define _jdk_internal_icu_lang_UCharacterDirection_h_
//$ class jdk.internal.icu.lang.UCharacterDirection
//$ extends jdk.internal.icu.lang.UCharacterEnums$ECharacterDirection

#include <jdk/internal/icu/lang/UCharacterEnums$ECharacterDirection.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace lang {

class UCharacterDirection : public ::jdk::internal::icu::lang::UCharacterEnums$ECharacterDirection {
	$class(UCharacterDirection, $NO_CLASS_INIT, ::jdk::internal::icu::lang::UCharacterEnums$ECharacterDirection)
public:
	UCharacterDirection();
	void init$();
	using ::jdk::internal::icu::lang::UCharacterEnums$ECharacterDirection::toString;
	static $String* toString(int32_t dir);
};

			} // lang
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_lang_UCharacterDirection_h_