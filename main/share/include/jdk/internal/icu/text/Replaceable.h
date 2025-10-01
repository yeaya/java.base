#ifndef _jdk_internal_icu_text_Replaceable_h_
#define _jdk_internal_icu_text_Replaceable_h_
//$ interface jdk.internal.icu.text.Replaceable
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $import Replaceable : public ::java::lang::Object {
	$interface(Replaceable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual char16_t charAt(int32_t offset) {return 0;}
	virtual void getChars(int32_t srcStart, int32_t srcLimit, $chars* dst, int32_t dstStart) {}
	virtual int32_t length() {return 0;}
};

			} // text
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_text_Replaceable_h_