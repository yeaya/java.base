#ifndef _jdk_internal_icu_text_NormalizerBase$NFKC32ModeImpl_h_
#define _jdk_internal_icu_text_NormalizerBase$NFKC32ModeImpl_h_
//$ class jdk.internal.icu.text.NormalizerBase$NFKC32ModeImpl
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {
				class NormalizerBase$ModeImpl;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $export NormalizerBase$NFKC32ModeImpl : public ::java::lang::Object {
	$class(NormalizerBase$NFKC32ModeImpl, 0, ::java::lang::Object)
public:
	NormalizerBase$NFKC32ModeImpl();
	void init$();
	static ::jdk::internal::icu::text::NormalizerBase$ModeImpl* INSTANCE;
};

			} // text
		} // icu
	} // internal
} // jdk

#pragma pop_macro("INSTANCE")

#endif // _jdk_internal_icu_text_NormalizerBase$NFKC32ModeImpl_h_