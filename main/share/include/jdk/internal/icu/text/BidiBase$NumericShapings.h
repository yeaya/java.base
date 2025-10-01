#ifndef _jdk_internal_icu_text_BidiBase$NumericShapings_h_
#define _jdk_internal_icu_text_BidiBase$NumericShapings_h_
//$ class jdk.internal.icu.text.BidiBase$NumericShapings
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace access {
			class JavaAWTFontAccess;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $import BidiBase$NumericShapings : public ::java::lang::Object {
	$class(BidiBase$NumericShapings, 0, ::java::lang::Object)
public:
	BidiBase$NumericShapings();
	void init$();
	static void shape(Object$* shaper, $chars* text, int32_t start, int32_t count);
	static ::jdk::internal::access::JavaAWTFontAccess* jafa;
};

			} // text
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_text_BidiBase$NumericShapings_h_