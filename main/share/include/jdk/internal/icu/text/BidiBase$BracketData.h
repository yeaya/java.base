#ifndef _jdk_internal_icu_text_BidiBase$BracketData_h_
#define _jdk_internal_icu_text_BidiBase$BracketData_h_
//$ class jdk.internal.icu.text.BidiBase$BracketData
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {
				class BidiBase$IsoRun;
				class BidiBase$Opening;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $import BidiBase$BracketData : public ::java::lang::Object {
	$class(BidiBase$BracketData, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BidiBase$BracketData();
	void init$();
	$Array<::jdk::internal::icu::text::BidiBase$Opening>* openings = nullptr;
	int32_t isoRunLast = 0;
	$Array<::jdk::internal::icu::text::BidiBase$IsoRun>* isoRuns = nullptr;
	bool isNumbersSpecial = false;
};

			} // text
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_text_BidiBase$BracketData_h_