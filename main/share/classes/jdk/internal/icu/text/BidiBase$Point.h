#ifndef _jdk_internal_icu_text_BidiBase$Point_h_
#define _jdk_internal_icu_text_BidiBase$Point_h_
//$ class jdk.internal.icu.text.BidiBase$Point
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $export BidiBase$Point : public ::java::lang::Object {
	$class(BidiBase$Point, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BidiBase$Point();
	void init$();
	int32_t pos = 0;
	int32_t flag = 0;
};

			} // text
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_text_BidiBase$Point_h_