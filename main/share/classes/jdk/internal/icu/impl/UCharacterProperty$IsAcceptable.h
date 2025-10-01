#ifndef _jdk_internal_icu_impl_UCharacterProperty$IsAcceptable_h_
#define _jdk_internal_icu_impl_UCharacterProperty$IsAcceptable_h_
//$ class jdk.internal.icu.impl.UCharacterProperty$IsAcceptable
//$ extends jdk.internal.icu.impl.ICUBinary$Authenticate

#include <java/lang/Array.h>
#include <jdk/internal/icu/impl/ICUBinary$Authenticate.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class UCharacterProperty$IsAcceptable : public ::jdk::internal::icu::impl::ICUBinary$Authenticate {
	$class(UCharacterProperty$IsAcceptable, $NO_CLASS_INIT, ::jdk::internal::icu::impl::ICUBinary$Authenticate)
public:
	UCharacterProperty$IsAcceptable();
	void init$();
	virtual bool isDataVersionAcceptable($bytes* version) override;
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_UCharacterProperty$IsAcceptable_h_