#ifndef _jdk_internal_icu_text_UnicodeSet$Filter_h_
#define _jdk_internal_icu_text_UnicodeSet$Filter_h_
//$ interface jdk.internal.icu.text.UnicodeSet$Filter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $export UnicodeSet$Filter : public ::java::lang::Object {
	$interface(UnicodeSet$Filter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool contains(int32_t codePoint) {return false;}
};

			} // text
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_text_UnicodeSet$Filter_h_