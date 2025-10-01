#ifndef _jdk_internal_icu_impl_NormalizerImpl$PrevArgs_h_
#define _jdk_internal_icu_impl_NormalizerImpl$PrevArgs_h_
//$ class jdk.internal.icu.impl.NormalizerImpl$PrevArgs
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class NormalizerImpl$PrevArgs : public ::java::lang::Object {
	$class(NormalizerImpl$PrevArgs, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NormalizerImpl$PrevArgs();
	void init$();
	$chars* src = nullptr;
	int32_t start = 0;
	int32_t current = 0;
	char16_t c1 = 0;
	char16_t c2 = 0;
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_NormalizerImpl$PrevArgs_h_