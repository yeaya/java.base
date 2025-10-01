#ifndef _jdk_internal_icu_impl_UCharacterProperty$CombiningClassIntProperty_h_
#define _jdk_internal_icu_impl_UCharacterProperty$CombiningClassIntProperty_h_
//$ class jdk.internal.icu.impl.UCharacterProperty$CombiningClassIntProperty
//$ extends jdk.internal.icu.impl.UCharacterProperty$IntProperty

#include <jdk/internal/icu/impl/UCharacterProperty$IntProperty.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {
				class UCharacterProperty;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class UCharacterProperty$CombiningClassIntProperty : public ::jdk::internal::icu::impl::UCharacterProperty$IntProperty {
	$class(UCharacterProperty$CombiningClassIntProperty, $NO_CLASS_INIT, ::jdk::internal::icu::impl::UCharacterProperty$IntProperty)
public:
	UCharacterProperty$CombiningClassIntProperty();
	void init$(::jdk::internal::icu::impl::UCharacterProperty* this$0, int32_t source);
	::jdk::internal::icu::impl::UCharacterProperty* this$0 = nullptr;
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_UCharacterProperty$CombiningClassIntProperty_h_