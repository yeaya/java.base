#ifndef _jdk_internal_icu_impl_UCharacterProperty$BiDiIntProperty_h_
#define _jdk_internal_icu_impl_UCharacterProperty$BiDiIntProperty_h_
//$ class jdk.internal.icu.impl.UCharacterProperty$BiDiIntProperty
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

class UCharacterProperty$BiDiIntProperty : public ::jdk::internal::icu::impl::UCharacterProperty$IntProperty {
	$class(UCharacterProperty$BiDiIntProperty, $NO_CLASS_INIT, ::jdk::internal::icu::impl::UCharacterProperty$IntProperty)
public:
	UCharacterProperty$BiDiIntProperty();
	void init$(::jdk::internal::icu::impl::UCharacterProperty* this$0);
	::jdk::internal::icu::impl::UCharacterProperty* this$0 = nullptr;
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_UCharacterProperty$BiDiIntProperty_h_