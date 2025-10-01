#ifndef _jdk_internal_icu_impl_NormalizerImpl$NextCCArgs_h_
#define _jdk_internal_icu_impl_NormalizerImpl$NextCCArgs_h_
//$ class jdk.internal.icu.impl.NormalizerImpl$NextCCArgs
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class NormalizerImpl$NextCCArgs : public ::java::lang::Object {
	$class(NormalizerImpl$NextCCArgs, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NormalizerImpl$NextCCArgs();
	void init$();
	$chars* source = nullptr;
	int32_t next = 0;
	int32_t limit = 0;
	char16_t c1 = 0;
	char16_t c2 = 0;
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_NormalizerImpl$NextCCArgs_h_