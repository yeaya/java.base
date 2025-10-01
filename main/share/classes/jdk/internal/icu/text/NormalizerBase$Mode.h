#ifndef _jdk_internal_icu_text_NormalizerBase$Mode_h_
#define _jdk_internal_icu_text_NormalizerBase$Mode_h_
//$ class jdk.internal.icu.text.NormalizerBase$Mode
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

class $export NormalizerBase$Mode : public ::java::lang::Object {
	$class(NormalizerBase$Mode, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NormalizerBase$Mode();
	void init$();
	virtual ::jdk::internal::icu::text::Normalizer2* getNormalizer2(int32_t options) {return nullptr;}
};

			} // text
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_text_NormalizerBase$Mode_h_