#ifndef _jdk_internal_icu_text_NormalizerBase$Unicode32_h_
#define _jdk_internal_icu_text_NormalizerBase$Unicode32_h_
//$ class jdk.internal.icu.text.NormalizerBase$Unicode32
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {
				class UnicodeSet;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $export NormalizerBase$Unicode32 : public ::java::lang::Object {
	$class(NormalizerBase$Unicode32, 0, ::java::lang::Object)
public:
	NormalizerBase$Unicode32();
	void init$();
	static ::jdk::internal::icu::text::UnicodeSet* INSTANCE;
};

			} // text
		} // icu
	} // internal
} // jdk

#pragma pop_macro("INSTANCE")

#endif // _jdk_internal_icu_text_NormalizerBase$Unicode32_h_