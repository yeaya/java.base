#ifndef _jdk_internal_icu_text_NormalizerBase$NFKCMode_h_
#define _jdk_internal_icu_text_NormalizerBase$NFKCMode_h_
//$ class jdk.internal.icu.text.NormalizerBase$NFKCMode
//$ extends jdk.internal.icu.text.NormalizerBase$Mode

#include <jdk/internal/icu/text/NormalizerBase$Mode.h>

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

class $export NormalizerBase$NFKCMode : public ::jdk::internal::icu::text::NormalizerBase$Mode {
	$class(NormalizerBase$NFKCMode, $NO_CLASS_INIT, ::jdk::internal::icu::text::NormalizerBase$Mode)
public:
	NormalizerBase$NFKCMode();
	void init$();
	virtual ::jdk::internal::icu::text::Normalizer2* getNormalizer2(int32_t options) override;
};

			} // text
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_text_NormalizerBase$NFKCMode_h_