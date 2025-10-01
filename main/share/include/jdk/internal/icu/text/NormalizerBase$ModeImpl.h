#ifndef _jdk_internal_icu_text_NormalizerBase$ModeImpl_h_
#define _jdk_internal_icu_text_NormalizerBase$ModeImpl_h_
//$ class jdk.internal.icu.text.NormalizerBase$ModeImpl
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {
				class Normalizer2;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $import NormalizerBase$ModeImpl : public ::java::lang::Object {
	$class(NormalizerBase$ModeImpl, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NormalizerBase$ModeImpl();
	void init$(::jdk::internal::icu::text::Normalizer2* n2);
	::jdk::internal::icu::text::Normalizer2* normalizer2 = nullptr;
};

			} // text
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_text_NormalizerBase$ModeImpl_h_