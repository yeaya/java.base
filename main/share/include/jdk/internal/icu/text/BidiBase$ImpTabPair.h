#ifndef _jdk_internal_icu_text_BidiBase$ImpTabPair_h_
#define _jdk_internal_icu_text_BidiBase$ImpTabPair_h_
//$ class jdk.internal.icu.text.BidiBase$ImpTabPair
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $import BidiBase$ImpTabPair : public ::java::lang::Object {
	$class(BidiBase$ImpTabPair, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BidiBase$ImpTabPair();
	void init$($Array<int8_t, 2>* table1, $Array<int8_t, 2>* table2, $shorts* act1, $shorts* act2);
	$Array<int8_t, 3>* imptab = nullptr;
	$Array<int16_t, 2>* impact = nullptr;
};

			} // text
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_text_BidiBase$ImpTabPair_h_