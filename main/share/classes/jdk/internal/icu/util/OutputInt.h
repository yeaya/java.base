#ifndef _jdk_internal_icu_util_OutputInt_h_
#define _jdk_internal_icu_util_OutputInt_h_
//$ class jdk.internal.icu.util.OutputInt
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

class OutputInt : public ::java::lang::Object {
	$class(OutputInt, $NO_CLASS_INIT, ::java::lang::Object)
public:
	OutputInt();
	void init$();
	int32_t value = 0;
};

			} // util
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_util_OutputInt_h_