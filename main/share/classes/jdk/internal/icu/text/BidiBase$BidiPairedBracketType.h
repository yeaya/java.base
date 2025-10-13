#ifndef _jdk_internal_icu_text_BidiBase$BidiPairedBracketType_h_
#define _jdk_internal_icu_text_BidiBase$BidiPairedBracketType_h_
//$ interface jdk.internal.icu.text.BidiBase$BidiPairedBracketType
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CLOSE")
#undef CLOSE
#pragma push_macro("COUNT")
#undef COUNT
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("OPEN")
#undef OPEN

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $export BidiBase$BidiPairedBracketType : public ::java::lang::Object {
	$interface(BidiBase$BidiPairedBracketType, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static const int32_t NONE = 0;
	static const int32_t OPEN = 1;
	static const int32_t CLOSE = 2;
	static const int32_t COUNT = 3;
};

			} // text
		} // icu
	} // internal
} // jdk

#pragma pop_macro("CLOSE")
#pragma pop_macro("COUNT")
#pragma pop_macro("NONE")
#pragma pop_macro("OPEN")

#endif // _jdk_internal_icu_text_BidiBase$BidiPairedBracketType_h_