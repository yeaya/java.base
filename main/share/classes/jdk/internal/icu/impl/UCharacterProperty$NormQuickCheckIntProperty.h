#ifndef _jdk_internal_icu_impl_UCharacterProperty$NormQuickCheckIntProperty_h_
#define _jdk_internal_icu_impl_UCharacterProperty$NormQuickCheckIntProperty_h_
//$ class jdk.internal.icu.impl.UCharacterProperty$NormQuickCheckIntProperty
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

class UCharacterProperty$NormQuickCheckIntProperty : public ::jdk::internal::icu::impl::UCharacterProperty$IntProperty {
	$class(UCharacterProperty$NormQuickCheckIntProperty, $NO_CLASS_INIT, ::jdk::internal::icu::impl::UCharacterProperty$IntProperty)
public:
	UCharacterProperty$NormQuickCheckIntProperty();
	void init$(::jdk::internal::icu::impl::UCharacterProperty* this$0, int32_t source, int32_t which, int32_t max);
	::jdk::internal::icu::impl::UCharacterProperty* this$0 = nullptr;
	int32_t which = 0;
	int32_t max = 0;
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_UCharacterProperty$NormQuickCheckIntProperty_h_