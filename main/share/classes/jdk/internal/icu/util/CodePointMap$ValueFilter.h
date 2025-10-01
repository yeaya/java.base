#ifndef _jdk_internal_icu_util_CodePointMap$ValueFilter_h_
#define _jdk_internal_icu_util_CodePointMap$ValueFilter_h_
//$ interface jdk.internal.icu.util.CodePointMap$ValueFilter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

class CodePointMap$ValueFilter : public ::java::lang::Object {
	$interface(CodePointMap$ValueFilter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t apply(int32_t value) {return 0;}
};

			} // util
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_util_CodePointMap$ValueFilter_h_