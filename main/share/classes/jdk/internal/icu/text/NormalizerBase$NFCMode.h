#ifndef _jdk_internal_icu_text_NormalizerBase$NFCMode_h_
#define _jdk_internal_icu_text_NormalizerBase$NFCMode_h_
//$ class jdk.internal.icu.text.NormalizerBase$NFCMode
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

class $export NormalizerBase$NFCMode : public ::jdk::internal::icu::text::NormalizerBase$Mode {
	$class(NormalizerBase$NFCMode, $NO_CLASS_INIT, ::jdk::internal::icu::text::NormalizerBase$Mode)
public:
	NormalizerBase$NFCMode();
	void init$();
	virtual ::jdk::internal::icu::text::Normalizer2* getNormalizer2(int32_t options) override;
};

			} // text
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_text_NormalizerBase$NFCMode_h_