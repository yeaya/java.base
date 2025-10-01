#ifndef _jdk_internal_icu_impl_UCharacterProperty$1_h_
#define _jdk_internal_icu_impl_UCharacterProperty$1_h_
//$ class jdk.internal.icu.impl.UCharacterProperty$1
//$ extends jdk.internal.icu.impl.UCharacterProperty$BiDiIntProperty

#include <jdk/internal/icu/impl/UCharacterProperty$BiDiIntProperty.h>

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

class UCharacterProperty$1 : public ::jdk::internal::icu::impl::UCharacterProperty$BiDiIntProperty {
	$class(UCharacterProperty$1, $NO_CLASS_INIT, ::jdk::internal::icu::impl::UCharacterProperty$BiDiIntProperty)
public:
	UCharacterProperty$1();
	void init$(::jdk::internal::icu::impl::UCharacterProperty* this$0);
	virtual int32_t getValue(int32_t c) override;
	::jdk::internal::icu::impl::UCharacterProperty* this$0 = nullptr;
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_UCharacterProperty$1_h_