#ifndef _jdk_internal_icu_impl_UCharacterProperty$IntProperty_h_
#define _jdk_internal_icu_impl_UCharacterProperty$IntProperty_h_
//$ class jdk.internal.icu.impl.UCharacterProperty$IntProperty
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class UCharacterProperty$IntProperty : public ::java::lang::Object {
	$class(UCharacterProperty$IntProperty, $NO_CLASS_INIT, ::java::lang::Object)
public:
	UCharacterProperty$IntProperty();
	void init$(::jdk::internal::icu::impl::UCharacterProperty* this$0, int32_t column, int32_t mask, int32_t shift);
	void init$(::jdk::internal::icu::impl::UCharacterProperty* this$0, int32_t source);
	virtual int32_t getValue(int32_t c);
	::jdk::internal::icu::impl::UCharacterProperty* this$0 = nullptr;
	int32_t column = 0;
	int32_t mask = 0;
	int32_t shift = 0;
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_UCharacterProperty$IntProperty_h_