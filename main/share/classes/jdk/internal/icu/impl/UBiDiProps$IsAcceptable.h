#ifndef _jdk_internal_icu_impl_UBiDiProps$IsAcceptable_h_
#define _jdk_internal_icu_impl_UBiDiProps$IsAcceptable_h_
//$ class jdk.internal.icu.impl.UBiDiProps$IsAcceptable
//$ extends jdk.internal.icu.impl.ICUBinary$Authenticate

#include <java/lang/Array.h>
#include <jdk/internal/icu/impl/ICUBinary$Authenticate.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class UBiDiProps$IsAcceptable : public ::jdk::internal::icu::impl::ICUBinary$Authenticate {
	$class(UBiDiProps$IsAcceptable, $NO_CLASS_INIT, ::jdk::internal::icu::impl::ICUBinary$Authenticate)
public:
	UBiDiProps$IsAcceptable();
	void init$();
	virtual bool isDataVersionAcceptable($bytes* version) override;
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_UBiDiProps$IsAcceptable_h_