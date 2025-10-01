#ifndef _jdk_internal_icu_text_BidiBase$Isolate_h_
#define _jdk_internal_icu_text_BidiBase$Isolate_h_
//$ class jdk.internal.icu.text.BidiBase$Isolate
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $export BidiBase$Isolate : public ::java::lang::Object {
	$class(BidiBase$Isolate, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BidiBase$Isolate();
	void init$();
	int32_t startON = 0;
	int32_t start1 = 0;
	int16_t stateImp = 0;
	int16_t state = 0;
};

			} // text
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_text_BidiBase$Isolate_h_