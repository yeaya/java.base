#ifndef _jdk_internal_icu_text_StringPrep$Values_h_
#define _jdk_internal_icu_text_StringPrep$Values_h_
//$ class jdk.internal.icu.text.StringPrep$Values
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $import StringPrep$Values : public ::java::lang::Object {
	$class(StringPrep$Values, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StringPrep$Values();
	void init$();
	void reset();
	bool isIndex = false;
	int32_t value = 0;
	int32_t type = 0;
};

			} // text
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_text_StringPrep$Values_h_