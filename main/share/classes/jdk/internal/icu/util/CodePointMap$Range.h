#ifndef _jdk_internal_icu_util_CodePointMap$Range_h_
#define _jdk_internal_icu_util_CodePointMap$Range_h_
//$ class jdk.internal.icu.util.CodePointMap$Range
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

class CodePointMap$Range : public ::java::lang::Object {
	$class(CodePointMap$Range, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CodePointMap$Range();
	void init$();
	int32_t getEnd();
	int32_t getStart();
	int32_t getValue();
	void set(int32_t start, int32_t end, int32_t value);
	int32_t start = 0;
	int32_t end = 0;
	int32_t value = 0;
};

			} // util
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_util_CodePointMap$Range_h_