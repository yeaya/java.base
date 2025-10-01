#ifndef _jdk_internal_icu_impl_NormalizerImpl$UTF16Plus_h_
#define _jdk_internal_icu_impl_NormalizerImpl$UTF16Plus_h_
//$ class jdk.internal.icu.impl.NormalizerImpl$UTF16Plus
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class NormalizerImpl$UTF16Plus : public ::java::lang::Object {
	$class(NormalizerImpl$UTF16Plus, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NormalizerImpl$UTF16Plus();
	void init$();
	static bool equal(::java::lang::CharSequence* s1, int32_t start1, int32_t limit1, ::java::lang::CharSequence* s2, int32_t start2, int32_t limit2);
	static bool isLeadSurrogate(int32_t c);
	static bool isSurrogateLead(int32_t c);
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_NormalizerImpl$UTF16Plus_h_