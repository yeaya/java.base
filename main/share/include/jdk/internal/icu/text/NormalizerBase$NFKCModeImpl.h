#ifndef _jdk_internal_icu_text_NormalizerBase$NFKCModeImpl_h_
#define _jdk_internal_icu_text_NormalizerBase$NFKCModeImpl_h_
//$ class jdk.internal.icu.text.NormalizerBase$NFKCModeImpl
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

class $import NormalizerBase$NFKCModeImpl : public ::java::lang::Object {
	$class(NormalizerBase$NFKCModeImpl, 0, ::java::lang::Object)
public:
	NormalizerBase$NFKCModeImpl();
	void init$();
	static ::jdk::internal::icu::text::NormalizerBase$ModeImpl* INSTANCE;
};

			} // text
		} // icu
	} // internal
} // jdk

#pragma pop_macro("INSTANCE")

#endif // _jdk_internal_icu_text_NormalizerBase$NFKCModeImpl_h_