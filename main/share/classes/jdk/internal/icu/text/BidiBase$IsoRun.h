#ifndef _jdk_internal_icu_text_BidiBase$IsoRun_h_
#define _jdk_internal_icu_text_BidiBase$IsoRun_h_
//$ class jdk.internal.icu.text.BidiBase$IsoRun
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $export BidiBase$IsoRun : public ::java::lang::Object {
	$class(BidiBase$IsoRun, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BidiBase$IsoRun();
	void init$();
	int32_t contextPos = 0;
	int16_t start = 0;
	int16_t limit = 0;
	int8_t level = 0;
	int8_t lastStrong = 0;
	int8_t lastBase = 0;
	int8_t contextDir = 0;
};

			} // text
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_text_BidiBase$IsoRun_h_