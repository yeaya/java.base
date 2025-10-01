#ifndef _jdk_internal_icu_text_BidiBase$Opening_h_
#define _jdk_internal_icu_text_BidiBase$Opening_h_
//$ class jdk.internal.icu.text.BidiBase$Opening
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $import BidiBase$Opening : public ::java::lang::Object {
	$class(BidiBase$Opening, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BidiBase$Opening();
	void init$();
	int32_t position = 0;
	int32_t match = 0;
	int32_t contextPos = 0;
	int16_t flags = 0;
	int8_t contextDir = 0;
};

			} // text
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_text_BidiBase$Opening_h_