#ifndef _sun_text_CollatorUtilities_h_
#define _sun_text_CollatorUtilities_h_
//$ class sun.text.CollatorUtilities
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {
				class NormalizerBase$Mode;
			}
		}
	}
}

namespace sun {
	namespace text {

class $import CollatorUtilities : public ::java::lang::Object {
	$class(CollatorUtilities, 0, ::java::lang::Object)
public:
	CollatorUtilities();
	void init$();
	static int32_t toLegacyMode(::jdk::internal::icu::text::NormalizerBase$Mode* mode);
	static ::jdk::internal::icu::text::NormalizerBase$Mode* toNormalizerMode(int32_t mode);
	static $Array<::jdk::internal::icu::text::NormalizerBase$Mode>* legacyModeMap;
};

	} // text
} // sun

#endif // _sun_text_CollatorUtilities_h_