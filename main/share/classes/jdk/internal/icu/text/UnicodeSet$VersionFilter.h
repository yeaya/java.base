#ifndef _jdk_internal_icu_text_UnicodeSet$VersionFilter_h_
#define _jdk_internal_icu_text_UnicodeSet$VersionFilter_h_
//$ class jdk.internal.icu.text.UnicodeSet$VersionFilter
//$ extends jdk.internal.icu.text.UnicodeSet$Filter

#include <jdk/internal/icu/text/UnicodeSet$Filter.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {
				class VersionInfo;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $export UnicodeSet$VersionFilter : public ::jdk::internal::icu::text::UnicodeSet$Filter {
	$class(UnicodeSet$VersionFilter, $NO_CLASS_INIT, ::jdk::internal::icu::text::UnicodeSet$Filter)
public:
	UnicodeSet$VersionFilter();
	void init$(::jdk::internal::icu::util::VersionInfo* version);
	virtual bool contains(int32_t ch) override;
	::jdk::internal::icu::util::VersionInfo* version = nullptr;
};

			} // text
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_text_UnicodeSet$VersionFilter_h_