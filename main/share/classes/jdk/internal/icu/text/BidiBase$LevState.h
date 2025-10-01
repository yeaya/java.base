#ifndef _jdk_internal_icu_text_BidiBase$LevState_h_
#define _jdk_internal_icu_text_BidiBase$LevState_h_
//$ class jdk.internal.icu.text.BidiBase$LevState
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $export BidiBase$LevState : public ::java::lang::Object {
	$class(BidiBase$LevState, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BidiBase$LevState();
	void init$();
	$Array<int8_t, 2>* impTab = nullptr;
	$shorts* impAct = nullptr;
	int32_t startON = 0;
	int32_t startL2EN = 0;
	int32_t lastStrongRTL = 0;
	int32_t runStart = 0;
	int16_t state = 0;
	int8_t runLevel = 0;
};

			} // text
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_text_BidiBase$LevState_h_